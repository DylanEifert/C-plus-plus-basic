
#include <iostream>
using namespace std;

int read_recharge(float num);


int main()
{
	double last_fee = 0;
	double total = 0;
	int key = 1;
	int input;
	int loop = 0;
	int trip = 0;
	int start_zone = 0;
	int start_hour = 0;
	int end_zone = 0;
	int end_hour = 0;
	int curent_start_zone = 0;
	int curent_start_hour = 0;
	int curent_end_zone = 0;
	int curent_end_hour = 0;

	do
	{
		

		cout << "\n\n== = SMART TRANSIT CARD == =" <<
			endl << "1) Recharge" <<
			endl << "2) Tap - In" <<
			endl << "3) Tap - Out" <<
			endl << "4) Show Balance" <<
			endl << "5) Show Last Trip" <<
			endl << "6) Admin / Debug" <<
			endl << "7) Exit" <<
			endl << "Choose :";
		cin >> input;

		if (input == 1)
		{
			float amount;
			do
			{

				cout << endl << "enter recharge amount:";
				cin >> amount;

				loop = read_recharge(amount);

			} while (loop == 0);

			total = total + amount;
			cout << "\nRecharge successful. New balance: $" << total << endl;
		}
		else if (input == 2)
		{
			if (trip == 1)
			{
				cout << "\nYou are already in a trip! Please tap out first\n";
			}
			else
			{
				cout << "enter your starting zone (1,2,3): ";
				cin >> curent_start_zone;
				cout << endl << "enter your starting hour (1-24):";
				cin >> curent_start_hour;
				cout << endl;
				trip = 1;

				cout << "Tap-In recorded successfully.\n";
			}

		}
		else if (input == 3)
		{
			if (trip == 0)
			{
				cout << "\ninvalid input, you failed to log embarcation deducting penalty fare of $6.00\n";
				if (total >= 6)
				{
					total = total - 6.00;

					cout << "your new balance is: $" << total << endl;
				}
				else
				{
					cout << "Insufficient balance to pay penalty. Please recharge.\n";
				}
			}
			else if (trip == 1)
			{
				
				double fee = 2.50;

				cout << "enter your ending zone (1,2,3): ";
				cin >> curent_end_zone;
				cout << endl << "enter your ending hour (1-24):";
				cin >> curent_end_hour;
				cout << endl;
				trip = 0;

				end_zone = curent_end_zone;
				end_hour = curent_end_hour;
				start_zone = curent_start_zone;
				start_hour = curent_start_hour;
			

				if (end_zone != start_zone)
				{
					fee = fee + 1.75;
				}

				if ((end_hour > 6 && end_hour < 10) || (start_hour > 6 && start_hour < 10))
				{
					fee = fee + 1.25;
				}
				else if ((end_hour > 16 && end_hour < 20) || (start_hour > 16 && start_hour < 20))
				{
					fee = fee + 1.25;
				}

				if (fee > total)
				{
					cout << "Insufficient balance to pay penalty. Please recharge.\n";
				}
				else
				{
					total = total - fee;
					last_fee = fee;

					cout << "your fee is: $" << fee <<
						endl << "remaining total: $" << total << endl;
				}

			}
		}
		else if (input == 4)
		{
			cout << endl << "current balance: $" << total << endl;
		}
		else if (input == 5)
		{
			if (last_fee > 0)
			{

				cout << "\n\nLast Trip Summary" <<
					endl << "===========" <<
					endl << "Start zone:" << start_zone <<
					endl << "End zone: " << end_zone <<
					endl << "start Hour: " << start_hour <<
					endl << "End Hour:" << end_hour <<
					endl << "Fare Paid:" << last_fee <<
					endl;
			}
			else
			{
				cout << "\nNo previous trip found\n";
			}
		}
		else if (input == 6)
		{
			double* ptr_total = &total;
			int* ptr_trip = &trip;
			int* ptr_start_zone = &start_zone;
			int* ptr_end_zone = &end_zone;
			int* ptr_start_hour = &start_hour;
			int* ptr_end_hour = &end_hour;
			int* ptr_curent_start_zone = &curent_start_zone;
			int* ptr_curent_end_zone = &curent_end_zone;
			int* ptr_curent_start_hour = &curent_start_hour;
			int* ptr_curent_end_hour = &curent_end_hour;

			cout << "total @" << ptr_total << " = " << total << endl;
			cout << "trip @" << ptr_trip << " = " << trip << endl;
			cout << "start_zone @" << ptr_start_zone << " = " << start_zone << endl;
			cout << "end_zone @" << ptr_end_zone << " = " << end_zone << endl;
			cout << "start_hour @" << ptr_start_hour << " = " << start_hour << endl;
			cout << "end_hour @" << ptr_end_hour << " = " << end_hour << endl;
			cout << "curent_start_zone @" << ptr_curent_start_zone << " = " << curent_start_zone << endl;
			cout << "curent_end_zone @" << ptr_curent_end_zone << " = " << curent_end_zone << endl;
			cout << "curent_start_hour @" << ptr_curent_start_hour << " = " << curent_start_hour << endl;
			cout << "curent_end_hour @" << ptr_curent_end_hour << " = " << curent_end_hour << endl;
		}
		else if (input == 7)
		{
			key = 0;
		}
		else
		{
			cout << "\ninvalid input\n";

		}

		
	}while (key == 1);
	cout << "\n ====closing program==== \n";




	return 0;
}


int read_recharge(float num)
{
	
	if (num > 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
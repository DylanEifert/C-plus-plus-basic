
#include <iostream>
using namespace std;

int main()
{
	const int trows = 3;
	const int tcolumns = 3;

	int regular_rate, ev_rate, handicap_rate;
	cout << "enter the rates";
	cin >> regular_rate >> ev_rate >> handicap_rate;

	cout << "enter 5 ocupied spots (row col):\n";

	int occ_row1, occ_row2, occ_row3, occ_row4;
	int occ_col1, occ_col2, occ_col3, occ_col4;
	cin >> occ_row1 >> occ_col1;
	cin >> occ_row2 >> occ_col2;
	cin >> occ_row3 >> occ_col3;
	cin >> occ_row4 >> occ_col4;

	int total_ev = 0, total_handicap = 0, total_regular = 0;
	int occ_ev = 0, occ_handicap = 0, occ_regular = 0;
	long long total_rev = 0;

	cout << "\nlegend: e=ev h=handicap x=occupied .=free\n\n";

	for (int current_row = 1; current_row <= trows; current_row++)
	{
		for (int current_column = 1; current_column <= tcolumns; current_column++)
		{
			char spot_type;

			if (current_column == 3)
			{
				spot_type = 'e';
				total_ev++;
			}
			else if (current_row == 1)
			{
				spot_type = 'h';
				total_handicap++;
			}
			else
			{
				spot_type = '.';
				total_regular++;
			}
			bool is_occupied =
				(current_row == occ_row1 && current_column == occ_col1) ||
				(current_row == occ_row2 && current_column == occ_col2) ||
				(current_row == occ_row3 && current_column == occ_col3) ||
				(current_row == occ_row4 && current_column == occ_col4);
			if (is_occupied)
			{
				cout << "x ";
				if (spot_type == 'e')
				{
					occ_ev++;
					total_rev += ev_rate;
				}
				else if (spot_type == 'h')
				{
					occ_handicap++;
					total_rev += handicap_rate;
				}
				else
				{
					occ_regular++;
					total_rev += regular_rate;
				}
			}
			else
			{
				cout << spot_type << " ";
			}

		}
		cout << endl;

	}
	cout << "\n---summary---\n";
	cout << "ev spots: " << total_ev << " occupied " << occ_ev << ")\n";
	cout << "handicap spots: " << total_handicap << " occupied " << occ_handicap << ")\n";
	cout << "regular: " << total_regular << " occupied " << occ_regular << ")\n";
	cout << "revenue: $" << total_rev << endl;

	return 0;
}
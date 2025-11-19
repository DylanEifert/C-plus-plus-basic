
#include <iostream>
using namespace std;

void raise_marks(int* marks);

int main()
{
	int grade = 72;

	raise_marks(&grade);


	cout << grade;

	return 0;
}

void raise_marks(int* marks)
{
	

	*marks = *marks + 5;



}

#include <iostream>
using namespace std;
int total(int mk1, int mk2, int mk3);
int average(int total, int subjects);

int main()
{
    int sub1, sub2, sub3;
    cout << "Enter the marks for all three subjects: ";
    cin >> sub1 >> sub2 >> sub3;

    int total_marks = total(sub1, sub2, sub3);
    int average_marks = average(total_marks, 3);

    cout << "total marks: " << total_marks << endl;
    cout << "average marks: " << average_marks << endl;
}


int total(int mk1, int mk2, int mk3)
{
    return mk1 + mk2 + mk3;
}
int average(int total, int subjects)
{
    return total / subjects;
}

#include <iostream>
using namespace std;

int main()
{
    int marks;
    int score;
    int sport;

    
    cout << "Imput student's overal marks: ";
    cin >> marks;

    cout << endl << "Imput student's entrance exam score: ";
    cin >> score;

    cout << endl << "is the student eligable for the sports qouta, imput 1 for yes and 0 for no: ";
    cin >> sport;

    if(marks >= 85 && score >= 80 )
    {
        cout << endl << "Admission in Honors Program" << endl;
    }
    else if(marks >= 70 && score >= 60)
    {
        cout << endl << "Admission in Regular Program" << endl;
    }
    else if (marks >= 60 && score < 60 && sport == 1)
    {
        cout << endl << "Admission under Sports Quota" << endl;
    }
    else
    {
        cout << endl << "Application Rejected" << endl;
    }
    return 0;
}
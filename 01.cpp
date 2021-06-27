// This program takes Number of students, their names , their marks and total marks as input and then summarizes this data
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int Student_count = 0;
    float TOTNUM;
    cout << "Enter Number of students";
    cin >> Student_count;
    string students[Student_count];
    float num[Student_count];
    for (int q = 0; q < Student_count; q++)
    {
        cout << "Enter name of"
             << " " << q << "student" << endl;
        cin >> students[q];
    }

    for (int r = 0; r < Student_count; r++)
    {
        cout << "Enter number of" << students[r] << endl;
        cin >> num[r];
    }

    cout << "total numbers?" << endl;
    cin >> TOTNUM;
    cout << "RESULT" << endl;
    for (int i = 0; i < Student_count; i++)
    {
        cout << students[i] << " "
             << "got"
             << " "
             << num[i]
             << " "
             << "numbers" << endl;
       cout << students[i] << "s" << " " << "percentage is" << ((num[i]/TOTNUM)*100);
    }
}

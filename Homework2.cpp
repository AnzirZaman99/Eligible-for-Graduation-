#include <iostream>
using namespace std;
int main ()
{
    int credits;
    double gpa;
    char holds;
    char coursereq;
     cout << "Enter Your Total Credits";
     cin >> credits;
     cout << "enter your GPA";
     cin >> gpa;
     cout << "Do you have any holds (y/n)";
     cin >> holds;
     cout << "Do you have any course remaining (y/n)";
     cin >> coursereq;

     if (credits >= 60 && gpa >= 2.0 && holds == 'n' && coursereq == 'n') {
        cout << "You are eligible to Graduate." <<endl;
     }
     else {
        cout << "You are not eligible to Graduate." <<endl;
     }
     return 0;
}
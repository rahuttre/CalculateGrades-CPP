// Ryan Hutton
// Module 2 - Calculate GPA
// SNHU IT 312 - Software Development with C++
// 1/15/2020

// Assignment: Develop a program that calculates the GPA based
//  on four grades inputted by the user. The program will then
//  determine if there are honors awards given based on the 
//  overall GPA.

#include <iostream>
#include <iomanip>  // Used to set the decimal precision of the GPA

using namespace std;
//using namespace setprecision;  Error: "setprecision" namespace does not exist

int main()
{
    bool summaCumLaude = false,
        magnaCumLaude = false,
        cumLaude = false,
        noHonors = false;
    double averageGPA = 0.00;
    double grade1, grade2, grade3, grade4;

    cout << "Ryan Hutton: Module 2 - Calculate GPA" << endl;
    cout << "\nInput your four grades (seperate each with a SPACE or an ENTER): ";
    cout << "\nInput Format: X.X or X.XX\n";

    // This will take the four inputted values from the user
    cin >> grade1 
        >> grade2 
        >> grade3 
        >> grade4;
    
    averageGPA = (grade1 + grade2 + grade3 + grade4) / 4;

    if (averageGPA >= 3.9)
    {
        summaCumLaude = true;
    }
    else if (averageGPA >= 3.8 && averageGPA <= 3.89)
    {
        magnaCumLaude = true;
    }
    else if (averageGPA >= 3.65 && averageGPA <= 3.79)
    {
        cumLaude = true;
    }
    else
    {
        noHonors = true;
    }
    
    // setprecition(2) will allow for two decimal places after the decimal.
    // boolalpha will allow the boolean values to print true/false versus
    //  0 or 1.
    cout << "\nYour GPA is " << setprecision(2) << fixed << averageGPA << endl;

    cout << "Graduating summa cum laude is " << boolalpha
        << summaCumLaude << endl;

    cout << "Graduating magna cum laude is " << boolalpha
        << magnaCumLaude << endl;

    cout << "Graduating cum laude is " << boolalpha
        << cumLaude << endl;

    cout << "Graduating without honors is " << boolalpha
        << noHonors << endl;
}
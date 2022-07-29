
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main (){

    cout.setf(std::ios_base::fixed);   // Using precision function to limit decimal output to 2
    cout.setf(std::ios_base::showpoint);
    cout.precision(2);




    char cartype = 0;
    int days = (0 <= 30);
    string destination;


    cout << "Welcome to our Car Rental service.\n";

    do {

        cout << "What class of car do you want (T, B, C, or D)? ";  
        cin >> cartype; 
        switch (cartype){
        case 't':
        case 'T':
        cout << " Enter your Destination :";
        cin >> destination;
            cout << "How many days will you keep the car (no more than 30 days)? ";  // Asking user number of days car is needed
            cin >> days;
            cout << destination +  " fare  will be $" << 30*days*1.06 << ". Is this OK (Y or N)?";
            cin >> cartype;
            break;
        case 'b':
        case 'B':
 cout << " Enter your Destination :";
        cin >> destination;
            cout << "How many days will you keep the car (no more than 30 days)? ";
            cin >> days;
            cout << destination +  "fare will be $" << 40*days*1.06 << ". Is this OK (Y or N)?";
            cin >> cartype;
            break;
        case 'c':
        case 'C':
 cout << " Enter your Destination :";
        cin >> destination;
            cout << "How many days will you keep the car (no more than 30 days)? ";
            cin >> days;
            cout << destination + " fare will be $" << 55*days*1.06 << ". Is this OK (Y or N)?";
            cin >> cartype;
            break;
        case 'd':
        case 'D':
 cout << " Enter your Destination :";
        cin >> destination;
            cout << "How many days will you keep the car (no more than 30 days)? ";
            cin >> days;
           
        
        cout << destination + "fare will be $" << 80*days*1.06 << ".\nIs this OK \n (Y or N)?";
            cin >> cartype;
            break;
        default :
            cout << "Invalid Entry please try again." << cartype<< "\n"; 
        }
    }   while (cartype !='Y' && cartype != 'y');  // if user chooses Y they will get a thank you message can either be caps or lower case.

        cout << "Thank You,come again.\n";
        cout<<"If you any complain please contact our number 016xxxxxxx.";


    return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int choice, months;
    double charges;
    const double Adult= 40.0;
    const double Senior= 30.0;
    const double Child= 20.0;
    cout << fixed<< showpoint << setprecision(2);
do{
    //display menu and get choice
    cout << "\n\t\tHealth Club Membership Menu" << endl;
    cout << "1: Standard Adult Membership" << endl;
    cout << "2: Standard Senior Membership" << endl;
    cout << "3: Standard Child Membership" << endl;
    cout << "4: Quit the Program" << endl;
    cout << "Enter your Choice: ";
    cin >> choice;
    if(choice<=0 || choice >=5 ){
        cout<< "\t\tPlease Enter Number in the Range of 1 to 4" << endl; }
    switch(choice){
    case 1:
        cout << "How many Months: ";
        cin >> months;
        charges= months * Adult;
        cout <<"The total Charges are " << charges << endl;
        break;
     case 2:
        cout << "How many Months" <<endl;
        cin >> months;
        charges= months * Senior;
        cout <<"The total Charges are " << charges << endl;
        break;
     case 3:
        cout << "How many Months" <<endl;
        cin >> months;
        charges= months * Child;
        cout <<"The total Charges are " << charges << endl;
        break;
     case 4:
        cout << "Program Ending" <<endl;
        break;
   }
   }while(choice !=4);


    return 0;
}

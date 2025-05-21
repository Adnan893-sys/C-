#include <iostream>

using namespace std;

int main()
{

    int choice;
do{
    cout << "\n\n\t\tSerendipity Booksellers" << endl; //....\ //
    cout << "\t\t  Inventory Database" << endl;
    cout << "\n\t\t1:Look Up a Book" << endl;
    cout << "\t\t2:Add a Book" << endl;
    cout << "\t\t3:Edit a Book's Record" << endl;
    cout << "\t\t4:Delete a Book" << endl;
    cout << "\t\t5:Return to the Main Menu" << endl;
    cout << "\n\t\tEnter Your Choice:";
    cin >> choice;
    while(choice<=0 || choice >=6 ){
        cout<< "\t\tPlease Enter Number in the Range of 1 to 5: " ;
        cin >> choice;}
    switch(choice){
      case 1:
         cout << "\t\tYou Entered the choice 1" << endl;
         break;
     case 2:
         cout << "\t\tYou Entered the choice 2" << endl;
         break;
      case 3:
         cout << "\t\tYou Entered the choice 3" << endl;
         break;
      case 4:
         cout << "\t\tYou Entered the choice 4" << endl;
         break;
      case 5:
         cout << "\t\tReturn to Main menu" << endl;
         break;

    }}while(choice != 5);

    return 0;
}

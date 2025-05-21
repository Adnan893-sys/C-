#include <iostream>

using namespace std;

int main()
{

    int choice;
do{
  //  system("cls");
    cout << "\n\n\t\tSerendipity Booksellers" << endl; //....\ //
    cout << "\t\t\tReports" << endl;
    cout << "\n\t\t1:Inventory Listing" << endl;
    cout << "\t\t2:Inventory Wholesale Value" << endl;
    cout << "\t\t3:Inventory Retail Value" << endl;
    cout << "\t\t4:Listing by Quantity" << endl;
    cout << "\t\t5:Listing by Cost" << endl;
    cout << "\t\t6:Listing by Age" << endl;
    cout << "\t\t7:Return to the Main Menu" << endl;
    cout << "\n\t\tEnter Your Choice:";
    cin >> choice;
    while(choice<=0 || choice >=8 ){
        cout<< "\t\tPlease Enter Number in the Range of 1 to 7: " ;
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
         cout << "\t\tYou Entered the choice 5" << endl;
         break;
      case 6:
         cout << "\t\tYou Entered the choice 6" << endl;
         break;
      case 7:
         cout << "\t\tReturn to the Main Menu" << endl;
         break;


    }}while(choice !=7);

    return 0;
}


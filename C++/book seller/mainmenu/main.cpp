#include <iostream>

using namespace std;

int main()
{
    int choice;
do{
    cout << "\n\n\t\t  Serendipity Booksellers" << endl; //....\//
    cout << "\t\t\tMain Menu" << endl;
    cout << "\n\t\t1:Cashier Module" << endl;
    cout << "\t\t2:inventory Database Module" << endl;
    cout << "\t\t3:Report Module" << endl;
    cout << "\t\t4:Exit" << endl;
    cout << "\n\t\tEnter your Choice:" ;
    cin  >> choice;
    while(choice<=0 || choice >=5 ){
        cout<< "\t\tPlease Enter Number in the Range of 1 to 4: " ;
        cin  >> choice;}
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
         cout << "\t\tExit" << endl;
         break;


    }}while(choice !=4);


    return 0;
}

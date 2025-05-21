#include <iostream>
#include  "cashier.h"
#include  "invmenu.h"
#include  "bookinfo.h"
#include  "reports.h"
using namespace std;

char Booktitle[20][51];
char ISBN[20][14];
char Author[20][31];
char Publisher[20][31];
char DateAdded[20][11];
int QtyOnHand[20];
double WholeSale[20];
double Retail[20];
int main()
{
    int choice;
do{
    cout << "\n\n\t\t  Serendipity Booksellers" << endl; //....\//
    cout << "\t\t\tMain Menu" << endl;
    cout << "\n\t\t1:Cashier Module" << endl;
    cout << "\t\t2:inventory Database Module" << endl;
    cout << "\t\t3:Bookinfo Module" << endl;
    cout << "\t\t4:Report Module" << endl;
    cout << "\t\t5:Exit" << endl;
    cout << "\n\t\tEnter your Choice:" ;
    cin  >> choice;
    while(choice<=0 || choice >=6 ){
        cout<< "\t\tPlease Enter Number in the Range of 1 to 4: " ;
        cin  >> choice;}
    switch(choice){
      case 1:
         cout << "\t\tYou Entered the choice 1" << endl;
         cashier();
         break;
     case 2:
         cout << "\t\tYou Entered the choice 2" << endl;
         invmenu();
         break;
      case 3:
         cout << "\t\tYou Entered the choice 3" << endl;
         bookinfo();
         break;
          case 4:
         cout << "\t\tYou Entered the choice 4" << endl;
         reports();
         break;
      case 5:
         cout << "\t\tExit" << endl;
         break;


    }}while(choice !=5);


    return 0;
}


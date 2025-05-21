#include <iostream>
#include  "invmenu.h"
using namespace std;
void lookUpbook(void);
void addBook(void);
void editBook(void);
void deleteBook(void);


int invmenu()
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
            lookUpbook();
         break;
     case 2:
            addBook();
         break;
      case 3:
            editBook();
         break;
      case 4:
             deleteBook();
         break;
      case 5:
         cout << "\t\tReturn to Main menu" << endl;
         break;

    }}while(choice != 5);
    system("cls");
    return 0;
}
void lookUpbook(void){
  cout << "\t\tYou Entered the choice 1" << endl;
}
void addBook(void){
   cout << "\t\tYou Entered the choice 2" << endl;
}
void editBook(void){
  cout << "\t\tYou Entered the choice 3" << endl;
}
void deleteBook(void){
    cout << "\t\tYou Entered the choice 4" << endl;
}

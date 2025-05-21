#include <iostream>
#include <iomanip>
#include  "cashier.h"
using namespace std;

int cashier()
{


    char Date[11];//="3/31/06";;
    char ISBN[15];//="0-333-90123-8";;
    char Title[25];//= "History of Scotland";;
    int Quantity;//= 19.95;;
    float Price=0.0, Total, Sales_Tax , Final_Amount;
    char choice;
do{
    system("cls");
    cout << "Enter Date:";
    cin >> Date;
    cout << "Enter quantity of book being purchased:" ;
    cin >> Quantity;
    cout << "Enter ISBN of Book:" ;
    cin >> ISBN;
    cin.ignore();
    cout << "Enter Title of Book:";
    cin.getline(Title,25);
    cout << "Enter Price of Book:" ;
    cin >> Price;

  //


    // merchandise total
   Total= Quantity * Price;
   Sales_Tax = (Total/100) * 6;
   Final_Amount=Total+ Sales_Tax;

    cout << "\n\n\t\t  Serendipity Booksellers" << endl; //....\ //
    cout << "\n\t" << "Date:" << Date << endl;
    cout << "\n"<<right << setw(11)<<"Qty" << "\t";
    cout <<left << setw(20)<<"ISBN";
    cout <<left << setw(25)<<"Title";
    cout <<left << setw(10)<<"Price";
    cout <<left << setw(10)<<"Total" <<endl;

    cout <<right << setw(11)<<Quantity << "\t";
    cout <<left << setw(20)<<ISBN;
    cout <<left << setw(25)<<Title;
    cout <<left <<"$" << setw(9)<<Price;
    cout <<setprecision(2)<<fixed;
    cout <<left <<"$" <<setw(10)<<Total <<endl;

    cout << "\n\n";
    cout <<setprecision(2)<<fixed;
    cout <<right<<setw(36)<<""<<"Subtotal" <<right<<setw(28)<<"$"<<right<<setw(6)<<Total<< endl;
    cout <<right<<setw(36)<<""<<"Tax" <<right<<setw(33)<<"$"<<right<<setw(6)<<Sales_Tax<< endl;
    cout <<right<<setw(36)<<""<<"Total" <<right<<setw(31)<< "$"<<right<<setw(6)<<Final_Amount<< endl;

    cout << "\n\tThank You for Shopping at Serendipity!" << endl;
    cout<<"\n\n\tDo you want another transcetion press Y or N: " ;
    cin >> choice;
    }while(choice == 'Y' || choice == 'y');

    system("cls");
    return 0;
}


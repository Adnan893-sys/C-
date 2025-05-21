#include <iostream>
#include <iomanip>

using namespace std;
void show_auditorium(void);
void updated_auditorium(void);
void book_seat(void);
void seat_sold_per_row(void);
void seat_available_per_row(void);
void check_repetition(void);
void total_available_seat(void);
 const int rows=16; // rows aro 15 R0 we are not using
 const int columns=31; // columns are 30 we are not usin c0
 char auditorium[rows][columns];
 int Row_price[16]={0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30}; // not using 0the item
 int row_number , column_number , ticket_price=0, total_sales=0;
 char choice;
 int select;
 int R_available_seats[16]={30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30}; // not using 0th item
 int R_Sold_seats[16];
 int total_available;
int main()
{

    cout<<" Theater Seating Project" << endl;
    cout << " " << endl;
    show_auditorium();
    cout << " " << endl;
    cout << " " << endl;
    cout<<" 1: Buy tickets" << endl;
    cout<<" 2: View total seats available in Each Row" << endl;
    cout<<" 3: View total seats sold in Each Row" << endl;
    cout<<" 4: View total seats Available in auditorium " << endl;
    cout<<" 5: View Total Sales" << endl;
    cout<<" 6: End Program" << endl;
do{
    cout << " Enter Choice"<< endl;
    cin >> select;

    while(0>=select || select>=7 ){
            cout<< "incorrect choice, Enter again"<< endl;
            cin >> select;}
 switch(select){
   case 1:
       book_seat();
       break;
  case 2:
       seat_available_per_row();
       break;
  case 3:
      seat_sold_per_row();
       break;
  case 4:
      total_available_seat();
       cout<<"Total Available  seats in auditorium are " << total_available<< endl;
       updated_auditorium();
       break;
  case 5:
       cout<<"Total Sales is " << total_sales<< endl;
       break;
  case 6:
        cout<<" 6: End Program" << endl;
       break;
 }
 }while(select != 6);
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//This function shows the arrangement of seats in audotorium.
void show_auditorium(void){
      // show auditorium
    cout << "\t\tSeats" << endl;
    cout << "\t123456789012345678901234567890" << endl;
    for(int i=1; i<rows ; i++){
      cout << "Row " <<setw(2) <<left<<(i) <<"  ";
      for(int j=0; j<columns ; j++) {
        cout<<"#";
        auditorium[i][j]='#';}
        cout<<" " <<endl;
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//This function  updates each element in the auditorium either its booked or not
void updated_auditorium(void){
      // show auditorium
    cout << "\t\tSeats" << endl;
    cout << "\t123456789012345678901234567890" << endl;
    for(int i=1; i<rows ; i++){
      cout << "Row " <<setw(2) <<left<<(i+1) <<"  ";
      for(int j=1; j<columns ; j++) {
        cout<<auditorium[i][j];}
        cout<<" " <<endl;
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//THis function takes the row number and column number for the seat to be booked. check repetition function
// checks either seat is already booked or not. And also it calculates the total sales price.

 void book_seat(void){
     do{
 cout<< " Enter Row number: ";
 cin>> row_number;
  cout<< " Enter column number: ";
 cin>> column_number;
 check_repetition();
 ticket_price= ticket_price+ Row_price[row_number];
  auditorium[row_number][column_number]= '*';
 cout<<" want more seats Y or N"<<endl;
 cin >> choice;
 while( choice != 'N' && choice != 'Y' &&  choice !='n' && choice != 'y' ){
    cin >> choice;}
}while(choice != 'N' && choice != 'n' );
      total_sales=ticket_price;
 }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//This function checks the available  seats per row. It keeps checking the remaining seats
//in each row and then keep adding them in R_available1 array. in last it shows the available
//seat in each row

 void seat_available_per_row(void){
     int i,j;
      int R_available_seats1[16]={30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30};
     for(i=1 ; i<rows ;i++ ){
       for(j=0 ; j<columns ;j++ ){
            if(auditorium[i][j]=='*'){R_available_seats1[i]=R_available_seats1[i]-1;  cout<< i << " " <<j << endl; }
     }
 }
        for(int i=1 ; i<rows ;i++ ){
                R_available_seats[i]=R_available_seats1[i];
                cout<< " Empty seats in Row " << i << " is "<<R_available_seats[i] << endl;};
 }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//This function checks the total sold seats per row. It keeps checking the booked seats
//in each row and then keep adding them in R_available1 array. in last it shows the sold
//seat in each row

  void seat_sold_per_row(void){
     int i,j;
     int R_Sold_seats1[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
     for(i=1 ; i<rows ;i++ ){
       for(j=0 ; j<columns ;j++ ){
            if(auditorium[i][j]=='*'){R_Sold_seats1[i]=R_Sold_seats1[i]+1;  cout<< i << " " <<j << endl; }
     }
 }
         for(int i=1 ; i<rows ;i++ ){
                R_Sold_seats[i]=R_Sold_seats1[i];
                cout<< " sold seats in each Row " << i << " is "<<R_Sold_seats[i] << endl;}
 }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This function checks that either seat is already booked or not if
// booked then it will keep remain in this while loop
// if not booked then it out of the loop

void check_repetition(void){
    while(auditorium[row_number][column_number]=='*'){
            cout<<"already booked, try another"<< endl;
 cout<< " Enter Row number: ";
 cin>> row_number;
  cout<< " Enter column number: ";
 cin>> column_number;
 }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This function displays the total available seats in the auditorium
// * shows the seat is already booked. if seat is not booked it keeps adding
// unbooked quantity in total_available variable

void total_available_seat(void){
    int i,j;
     for(i=1 ; i<rows ;i++ ){
       for(j=1 ; j<columns ;j++ ){
            if(auditorium[i][j]!='*'){total_available = total_available+1;}
       }
     }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

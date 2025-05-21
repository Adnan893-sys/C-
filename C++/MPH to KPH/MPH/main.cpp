#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
  /*  int KPH;
    double MPH;
    cout <<"KPH\t\tMPH"<< endl;
    cout <<"..........................."<< endl;
    cout << fixed << showpoint << setprecision(1);
    for(KPH=60 ; KPH <=130 ; KPH=KPH+10){
            MPH= KPH *0.6214;
    cout<<KPH<<"\t\t"<<MPH<<endl;
}*/

/*
  //How many points did your team earned
  int points;
  int total=0;
  int game=1;
   cout << "Enter points for game 1: ";
   cin >> points;
   while ( points != -1){
        total= total+ points;
        game++;
        cout << "Enter points for game " << game <<":";
        cin >> points;

    }
     cout << "Total points earned are "  << total << endl; */

// Redaind data from a File
 /*   ifstream inputFile;
    inputFile.open("numbers.txt");
    if(!inputFile){
        cout<<"Error in opening inputFile" << endl;}
    int i, number;
   // for(i=0; i<10; i++){
     while   (inputFile >> number){
    cout << number << endl;
    }
    inputFile.close(); */

// total number of students and total paper per student
/*   int number_of_students;
   int total_papers;
   double average, total;

   cout << "Enter total number of students: ";
   cin >> number_of_students;
   cout << "Enter total number of papers per student: ";
   cin >> total_papers;
   cout << showpoint << fixed << setprecision(1);
   for(int students=1 ; students <= number_of_students ; students++){
    for(int paper=1 ; paper <= total_papers ; paper++){
            double score;
        cout<< "Enter score "<<paper <<" for student " << students <<": ";
        cin >> score;
        total= total+score;
    }
    average=total/total_papers;
    total=0;
    cout << "The average score for student "<< students <<" is " << average << endl;
   }

*/
    int numDVDs, DVD_count=1;

    double final_price;
    cout << "How many DVDs being rented: ";
    cin >> numDVDs;
    cout << fixed << showpoint << setprecision(2);
    do{
        if((DVD_count%3)==0){
            cout << "DVD " << DVD_count << " is free " << endl;
                continue;}
        char option;
        cout << "Is DVd " << DVD_count << " is current release: ";
        cin >> option;
        if(option=='Y' || option=='y' ){
            final_price=final_price+3.50;}
        if(option=='N' || option=='n' ){
            final_price=final_price+2.50;}

    } while(DVD_count ++< numDVDs);

    cout << "The total Price is $" <<final_price << endl;
    return 0;
}

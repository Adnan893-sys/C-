#include <iostream>
#include <iomanip>
using namespace std;
/*void get_score(void);
void get_total(void);
void get_lowesst(void);
int scores[4];
    int total=0;
    int lowest=0;
    int adj_total;
    double avg;
int main()
{



     get_score();
     get_total();
     get_lowesst();

   adj_total= total-lowest;
   avg= adj_total/3;



    cout<< "The scores are" << endl;
    for(int i=0; i<4 ; i++){
        cout << scores[i]<< endl;}
    cout<< "The total  is " << total << endl;
     cout<< "The lowest  is " << lowest << endl;
     cout<< "The average  is " << avg << endl;


    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////

void get_score(void){

    // get scores
    cout<< "Enter the score of students" << endl;
    for(int i=0; i<4 ; i++){
        cin>> scores[i];}
}
///////////////////////////////////////////////////////////////////////////////////////////
void get_total(void){

    for(int i=0; i<4 ; i++){
       total=total + scores[i];}
}
///////////////////////////////////////////////////////////////////////////////////////////
void get_lowesst(void){

    lowest= scores[0];
    for(int i=1; i<4 ; i++){
       if(scores[i]<lowest){
        lowest=scores[i];}
       }
}
*/

// 2D array show
const int Cols=4;
const int Tab1_Row=3;
const int Tab2_Row=4;
void show_array(int table[][Cols],int rows);
int main(){

  int Tab1[Tab1_Row][Cols]={{1,2,3,4},
                            {5,6,7,8},
                            {9,10,11,12}};
  int Tab2[Tab2_Row][Cols]={{10,20,30,40},
                            {50,60,70,80},
                            {90,100,110,120},
                            {130,140,150,160},};
  cout << " Array 1 is "<< endl;
  show_array(Tab1,Tab1_Row);
  cout << " Array 2 is "<< endl;
  show_array(Tab2,Tab2_Row);

return 0;
}
void show_array(int table[][Cols],int rows){
  for(int i=0; i<rows ; i++){
    for(int j=0; j<Cols ; j++){
            cout<< setw(4)<<table[i][j]<<" ";
  }
     cout << endl;
}

}

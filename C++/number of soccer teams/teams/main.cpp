#include <iostream>

using namespace std;

int main()
{
   int Available_players;
   int Players_per_team;
   int total_teams;
   int left_over;

   cout << "Enter number of Players Per team" <<endl;
   cout << "Enter number between between 9 to 15" << endl;
   cin >> Players_per_team;

   while( Players_per_team>=16 || Players_per_team <=8 ){
    cout <<"Please  Enter Valid number of Players" << endl;
    cin >> Players_per_team;}

   cout << "Enter total Available players" <<endl;
   cin >> Available_players;

   while( Available_players <=0 ){
    cout <<"Please Enter positive number" << endl;
    cin >> Available_players;}

    total_teams= Available_players / Players_per_team;
    left_over= Available_players % Players_per_team;

    cout << "Total teams will be " << total_teams << endl;
    cout << "Total left over players will be " << left_over<< endl;


    return 0;
}

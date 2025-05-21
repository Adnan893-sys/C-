#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    int employees;
    vector<int>hours;
    vector<double>payrate;
    int index;

    cout<< "Enter how many employees you have: "<< endl;
    cin >>employees;
    for(index=0; index<employees ; index++){
             int temp_hours;
             double temp_rate;
        cout<<"Number of hours worked by " << (index+1);
        cout <<": ";
         cin>> temp_hours;
         hours.push_back(temp_hours);
        cout<<"Enter Pay rate for employee " << (index+1);
        cout <<": ";
        cin>> temp_rate;
        payrate.push_back(temp_rate);
    }
  cout<< "Here is the gross pay for each employee " <<endl;
     for(index=0; index<employees ; index++){
        double gross_pay= hours[index] * payrate[index];
        cout<<"Employee " << (index+1);
        cout <<": $";
        cout << gross_pay<<endl;
       // payrate.pop_back();

    }
        cout<< payrate.size();
         payrate.pop_back();
        cout<< payrate.size();
    return 0;
}

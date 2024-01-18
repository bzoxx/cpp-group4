#include <iostream>
using namespace std;

int numstudents, hours[50][50];
string names[50];

int main() {
    cout << "Welcome to the Academic Study Performance Analyzer!" << endl;
    cout << "-------------------------------------------------" << endl;
    cout<<"How many students are there? ";
    cin>>numstudents;

    for(int i=0; i!=numstudents; i++){
            cout<<"Enter the name of Student number "<<i+1<<" ";
            cin>>names[i];
    for(int j=0; j!=7; j++){
            cout<<names[i]<<"'s hours of student at Day "<<j+1<<" ";
            cin>>hours[i][j];

    }
    }



}

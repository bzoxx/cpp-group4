#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include <iomanip>
int numstudents,hours[50][50],total,totals[50],found;
string names[50],id[50],searchh;

int main(){
    cout << "Welcome to the Academic Study Performance Analyzer!" << endl;
    cout << "-------------------------------------------------" << endl;
    cout<<"How many students are there? ";
    cin>>numstudents;
for(int i=0; i!=numstudents; i++){
            cout<<"Enter the name of Student number "<<i+1<<" ";
            cin>>names[i];
            id[i]="ets"+to_string(i+1);
    for(int j=0; j!=7; j++){
            cout<<names[i]<<"'s hours of student at Day "<<j+1<<" ";
            cin>>hours[i][j];

    }
    total = 0;
    for(int j=0; j!=7; j++){
        total += hours[i][j];
    }
    totals[i]=total;


 }
 cout << "\nResults in tabular format:\n";
    cout << setw(15) << "Student Name" << "  ";
    for (int i = 0; i != 8; i++) {
            if(i==7){
    cout << setw(10) << "Total"<< "  ";
            }else{
        cout << setw(10) << "Day " << i+1 << "  ";
    }}
    cout << endl;

    for (int i = 0; i < numstudents; i++) {
        cout << setw(15) << names[i] << "("<<id[i]<<")  ";
        for (int j = 0; j < 7; j++) {
            cout << setw(10) << hours[i][j] << "  ";
        }
        cout << setw(10) << totals[i];
        cout << endl;
    }
searchbar:
cout<<endl;
cout<<"Search with Name/Id ";
cin>>searchh;
found = -1;
transform(searchh.begin(), searchh.end(), searchh.begin(), ::tolower);
    for (int i = 0; i < numstudents; i++)
    {
        transform(id[i].begin(), id[i].end(), id[i].begin(), ::tolower);
        transform(names[i].begin(), names[i].end(), names[i].begin(), ::tolower);
            if(names[i]==searchh)
            {
            found = i;
            break;
            }
             if(id[i]==searchh)
            {
            found = i;
            break;
            }

    }

    if(found==-1){
        cout<<"endeza mibal sew weynm temsasay id yalew yelem"<<endl;
    }else{
                    cout << endl<< "-------------------------------------------------" << endl<< endl;
        cout << "Found user named " << names[found] << "("<<id[found]<<")  "<<endl<<endl;
                    cout << endl<< "-------------------------------------------------" << endl<< endl;
        cout << setw(15) << "Student Name" << "  ";
    for (int i = 0; i != 8; i++) {
            if(i==7){
    cout << setw(10) << "Total"<< "  ";
            }else{
        cout << setw(10) << "Day " << i+1 << "  ";
    }}
        cout << endl;

    for (int i = 0; i < 1; i++) {


        cout << setw(15) << names[found] << "("<<id[found]<<")  ";


        for (int j = 0; j < 7; j++) {
            cout << setw(10) << hours[found][j] << "  ";
        }
        cout << setw(10) << totals[found];
        cout << endl;
    }

    }
els:
char yorn;
cout<<endl<<"Do you want to search again Y/N? ";
cin>>yorn;
if(yorn=='y' || yorn =='Y'){
    goto searchbar;
}else if(yorn=='n' || yorn =='N'){
    cout<<"Thank you for using our program!!";
}else{
     cout<<"sorry, You entered another key ";

    goto els;
}


return 0;
}


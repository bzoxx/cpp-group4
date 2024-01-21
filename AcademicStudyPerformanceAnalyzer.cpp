#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include <iomanip>
#include<cmath>
int numstudents,hours[50][50],total,totals[50],found;
double sum[7],avg[7];
string names[50],id[50],searchh;

int main()
{
    cout << "Welcome to the Academic Study Performance Analyzer!" << endl;
    cout << "---------------------------------------------------" << endl;
    cout<<"How many students are there? ";
    cin>>numstudents;
    for(int i=0; i!=numstudents; i++)
    {
        total = 0;
        cout<<"Enter the name of Student number "<<i+1<<" ";
        cin>>names[i];
        id[i]="ets"+to_string(i+1);
        for(int j=0; j!=7; j++)
        {
re_enter:
            cout<<names[i]<<"'s hours of student at Day "<<j+1<<" ";
            cin>>hours[i][j];
            if (hours[i][j]>24)
            {
                cout << "That`s incorrect please enter again\n";
                goto re_enter;
            }
            total += hours[i][j];
        }

        totals[i]=total;


    }
    for (int j=0; j<7; ++j)
    {
        for (int i=0; i < numstudents; ++i)
        {
            sum[j] += hours[i][j];
            avg[j]= round(sum[j]/numstudents);

        }
    }
    cout << "\nResults in tabular format:\n";
    cout << setw(15) << "Student Name(ID)" << "  ";
    for (int i = 0; i != 8; i++)
    {
        if(i==7)
        {
            cout << setw(10) << "Total"<< "  ";
        }
        else
        {
            cout << setw(10) << "Day " << i+1 << "  ";
        }
    }
    cout << endl;

    for (int i = 0; i < numstudents; i++)
    {
        cout << setw(10) << names[i] << "(" << id[i] << ")  ";
        for (int j = 0; j < 7; j++)
        {
            if (j<2)
            {
                if (j==0)cout << setw(8) << hours[i][j];
                else cout << setw(15) << hours[i][j] ;
            }
            else cout << setw(9+j) << hours[i][j] ;
        }
        cout << setw(12) << totals[i];
        cout << endl;
    }
    if (numstudents!=1)
    {
        total=0;
        cout << "\nAverage study (hr/day)";
        for (int j=0; j<7; ++j)
        {
            if (j==0)cout<<setw(4)<<avg[j];
            else if (j==1)cout<<setw(15)<<avg[j];
            else cout<<setw(9+j)<<avg[j];
            total+=avg[j];
        }
        cout <<setw(12)<< total<<endl;
    }

searchBar:
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

    if(found==-1)
    {
        cout<<"endeza mibal sew weynm temsasay id yalew yelem"<<endl;
    }
    else
    {
        cout << endl<< "-------------------------------------------------" << endl<< endl;
        cout << "Found user named " << names[found] << "("<<id[found]<<")  "<<endl<<endl;
        cout <<  "-------------------------------------------------" << endl<< endl;
        cout << setw(15) << "Student Name(ID)" << "  ";
        for (int i = 0; i != 8; i++)
        {
            if(i==7)
            {
                cout << setw(10) << "Total"<< "  ";
            }
            else
            {
                cout << setw(10) << "Day " << i+1 << "  ";
            }
        }
        cout << "\n\n";
        cout << setw(11) << names[found] << "(" << id[found] << ")  ";
        for (int j = 0; j < 7; j++)
        {
            if (j<2)
            {
                if (j==0)cout << setw(8) << hours[found][j];
                else cout << setw(13) << hours[found][j] << " ";
            }
            else cout << setw(9+j) << hours[found][j] ;
        }
        cout << setw(12) << totals[found];
        cout << endl;


    }
els:
    char yorn,ch;
    cout << "\nDo you want to search again Y/N? ";
    cin >> yorn;
    ch=tolower(yorn);
    if (ch == 'y')
    {
        goto searchBar;
    }
    else if (ch == 'n')
    {
        cout << "Thank you for using our program!!"<< endl;
    }
    else
    {
        cout<<"sorry, You entered another key ";

        goto els;
    }


    return 0;
}

#include <iomanip>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int numstudents, hours[50][7], totals[50];
string names[50], id[50], searchh;

int main() {
    cout << "Welcome to the Academic Study Performance Analyzer!" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "How many students are there? ";
    cin >> numstudents;

    for (int i = 0; i < numstudents; i++) {
        cout << "Enter the name of Student number " << i + 1 << " ";
        cin >> names[i];
        id[i] = "ets" + to_string(i + 1);
        for (int j = 0; j < 7; j++) {
            cout << names[i] << "'s hours of study at Day " << j + 1 << " ";
            cin >> hours[i][j];
        }
        int total = 0;
        for (int j = 0; j < 7; j++) {
            total += hours[i][j];
        }
        totals[i] = total;
    }

    cout << "\nResults in tabular format:\n";
    cout << "Student Name(ID)" << "  ";
    for (int i = 0; i <= 7; i++) {
        if (i == 7) {
            cout << setw(10) << "Total" << "  ";
        } else {
            cout << setw(10) << "Day " << i + 1 << "  ";
        }
    }
    cout << endl;

    for (int i = 0; i < numstudents; i++) {
        cout << setw(10) << names[i] << "(" << id[i] << ")  ";
        for (int j = 0; j < 7; j++) {
                if (j<2){
                        if (j==0)cout << setw(8) << hours[i][j];
                        else cout << setw(15) << hours[i][j] ;
                }
            else cout << setw(9+j) << hours[i][j] ;
        }
        cout << setw(12) << totals[i];
        cout << endl;
    }

    searchBar:
    cout << endl;
    cout << "Search with ID ";
    cin >> searchh;
    transform(searchh.begin(), searchh.end(), searchh.begin(), ::tolower);

    int found = -1;
    for (int i = 0; i < numstudents; i++) {
        string temp_id = id[i];
        transform(temp_id.begin(), temp_id.end(), temp_id.begin(), ::tolower);

        if (temp_id == searchh) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        cout << "Student with ID " << searchh << " not found." << endl;
    } else {
        cout << "Found user named " << names[found] << "(" << id[found] << ")" << endl;
        cout << "Student Name(ID)" << "  ";
        for (int i = 0; i <= 7; i++) {
            if (i == 7) {
                cout << setw(10) << "Total" << "  ";
            } else {
                cout << setw(10) << "Day " << i + 1 << "  ";
            }
        }
        cout << "\n\n";
        cout << setw(12) << names[found] << "(" << id[found] << ")  ";
       for (int j = 0; j < 7; j++) {
                if (j<2){
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
    if (ch == 'y') {
        goto searchBar;
    } else if (ch == 'n') {
        cout << "Thank you for using our program!!"<< endl;
    }
    return 0;
}

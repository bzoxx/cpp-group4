#include <iostream>
using namespace std;
int main (){
int pointer[100], e, k, *q, s;
cout << "Enter the amount of numbers you want to arrange: ";
cin >> e;
cout<<e;
cout << "Enter the numbers in ascending order." << endl;
for (int i = 0; i < e; i++) {
    cout << "Enter the " << i + 1 << " number: ";
    cin >> pointer[i];
}
cout << "Enter the number you want to insert: ";
cin >> k;
for (int i = 0; i < e; i++) {
    if (k < pointer[i]) // check where to insert k
        {
        for (int j = e - 1; j >= i; j--) {
            pointer[j + 1] = pointer[j];// take current value and give it to next. basically move the numbers up until

            if (j == i) {
                q = &pointer[i];
                *q = k;

            }
        }
   break;
    }
}
    for (int i = 0; i < e + 1; i++) {
    cout << pointer[i] << " ";
}
}

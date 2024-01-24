#include <iostream>
using namespace std;
int main(){
int n,spaces,a;
a:
cout<<"Enter Postive number for your pattern ";
cin>>n;

if(n<0){
   cout<< "error you have enter a number less than zero."<<endl;
   goto a;
}
else{
for(int i=0; i!=n; i++){
if(i==0){
for(int j=1; j<=n-i; j++){
    cout<<i;
}}else{
for(int j=0; j<=n-i; j++){
    cout<<i;
}
}
if(i==0){
    spaces = 0;
    cout<<"0";
}else if(i==1){
    spaces = 1;
    for(int j=0; j!=spaces; j++){
    cout<<" ";
}
}else{
spaces+=2;
for(int j=0; j!=spaces; j++){
    cout<<" ";
}}
if(i==0){
for(int j=1; j<=n-i; j++){
    cout<<i;
}}else{
for(int j=0; j<=n-i; j++){
    cout<<i;
}
}
    cout<<endl;
}
spaces = (2*n)+1;
for(int i=n; i!=-1; i--){
if(i==0){
for(int j=1; j<=n-i; j++){
    cout<<i;
}}else{
for(int j=0; j<=n-i; j++){
    cout<<i;
}
}
if(i==0){
    //spaces = 0;
    cout<<"0";
}else if(i==1){
    spaces = 1;
    for(int j=0; j!=spaces; j++){
    cout<<" ";}
}else{
spaces-=2;

for(int j=0; j!=spaces; j++){
    cout<<" ";
}
}
if(i==0){
for(int j=1; j<=n-i; j++){
    cout<<i;
}}else{
for(int j=0; j<=n-i; j++){
    cout<<i;
}
}
    cout<<endl;
}
}
els:
    char yorn,ch;
    cout << "\nDo you want to go again Y/N? ";
    cin >> yorn;
    ch=tolower(yorn);
    if (ch == 'y')
    {
        goto a;
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
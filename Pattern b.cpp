#include <iostream>
using namespace std;
int main(){
int n,spaces;
cout<<"Enter Postive number for your pattern ";
cin>>n;
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
return 0;
}

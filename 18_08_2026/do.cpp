#include<iostream>
using namespace std;
int main()
{
int i=1,n;
cout<<"enter a number";
cin>>n;
do
{
    cout<<n*i;
    i=i+1;
}while(i<=10);
return 0;
}
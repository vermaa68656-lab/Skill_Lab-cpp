#include<iostream>
using namespace std;
int main ()
{ 
    int p,q;
    cout<<"rows";
    cin>>p;
    cout<<"column";
    cin>>q;

    int arr[p][q];
    cout<<"enter elements ";
    for(int m=0;m<p;m++)
    {
        for(int n=0;n<q;n++)
        {
            cin>>arr[m][n];
        }
        cout<<endl;
    }
        cout<<endl<<endl;

    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
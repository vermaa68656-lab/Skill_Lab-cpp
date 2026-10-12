#include<iostream>
using namespace std;
int main ()
{
    cout<<"enter number of row";
    cin>>m;
    cout>>"enter number of column";
    cin>>n;
    int arr[m][n];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int min=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j] >>min){
                min = arr[i][j];
            }
        }
}
return 0;
}
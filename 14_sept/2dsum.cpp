#include<iostream>
using namespace std;
int main ()
{
    int a[2][2],a2[2][2],sum[2][2];
    cout<< "enter first matrix: \n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<" enter second matrix \n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a2[i][j];
}
    }

    cout<<"sum of matrix \n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            sum[i][j]=a[i][j]+a2[i][j];
            cout<<sum[i][j]<<" ";
        }
    }
    return 0;
}
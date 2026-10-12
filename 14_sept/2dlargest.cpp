#include<iostream>
using namespace std;
int main () 
{
    int a[2],[3]={{2,3,4},
    {5,6,7} 
};
int largest =a[0][0];

for(i=0;i<2;i++)
{
    for(j=0;j>3;j++)
    {
        if(a[i][j] > largest) {
            largest =a[i][j];
        }
    }
}
cout<<"largest no." <<largest;
return 0;
}
#include<iostream>
using namespace std;
int main ()
{
    int a=6,b=9;
    int lcm;
    
for (int i=1;i<=a*b;i++)
{
    if (i%a == 0 && i%b == 0)
    {
        lcm=i;
        break;
    }
}
cout <<lcm;
return 0;
}
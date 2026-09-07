#include<iostream>
using namespace std;
int main ()
{
    int a=6,b=9,lcm;
lcm= (a>b)? a:b;
while (lcm % a!=0 || lcm % b!=0)
{
    lcm++;
}
cout <<"lcm ="<<lcm;
return 0;
}
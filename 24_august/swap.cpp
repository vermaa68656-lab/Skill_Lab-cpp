#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout <<"enter two numbner";
    cin >> a >>b;
    c=a;
    a=b;
    b=c;
    cout <<"after swaping" <<a <<" " <<b;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
   int n,rev=0,tem;

cout <<"enter any number";
cin >> n;
tem = n;
   while(n != 0)
   {
    rev=rev*10+(n%10);
    n=n/10;
   }
   if(tem == rev)
   {
    cout << "polindrome";
   }
   else
   {
    cout << "not polindrome";
   }
   return 0;
}

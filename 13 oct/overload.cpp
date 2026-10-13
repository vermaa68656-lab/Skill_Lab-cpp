#include<iostream>
using namespace std;
// function overloading
class student {
    public:
    void add (int a) 
    {
        cout<< a <<endl;
    }
    void add (int a,int b)
    {
        cout<< a+b <<endl;
    }
    void add (int a,int b,int c) 
    {
        cout<< a+b+c <<endl;
    }
};
int main ()
{
student C;
C.add(10);
C.add(10,20);
C.add(10,20,30);
return 0;
}

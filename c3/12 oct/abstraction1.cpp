#include<iostream>
using namespace std;
class shape {
    public:
    virtual void calculateArea()=0;
};
class rectangle :public shape
{
    public:
    void calculateArea() override 
    {
int length =20, breadth = 10;

cout<<"Area of rectangle is "<<length*breadth<<endl;
    }
};
int main()
{
    rectangle r;
    r.calculateArea();
    return 0;
}
#include<iostream>
using namespace std;
class a {
    public :
    void d1 (){
        cout<<"this is class a";
    }
};
class b : public a{
    public:
    void d2 () {
        cout<<"this is class b";
    }
};
class c : public b {
    public :
    void d3 () {
        cout<<"this is class c";
    }
};
int main ()
{
    c obj;

    obj1.d1();
    obj2.d2();
    obj3.d3();
    
    return 0;
}
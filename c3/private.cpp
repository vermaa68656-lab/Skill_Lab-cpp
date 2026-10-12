#include <iostream>
using namespace std;
class student {
    private:
   int  marks;
public:
    void display( int n){
    marks = n;
    cout<<marks;
    }
};
int main ()
{
 student obj;

obj.display(10);

    return 0;
}
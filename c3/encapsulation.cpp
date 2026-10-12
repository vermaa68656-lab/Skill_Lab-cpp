#include <iostream>
using namespace std;
class student {
public:
    int marks;
    string name;
};
int main ()
{
 student obj;

obj.marks=40;
obj.name="ANKIT VERMA";
cout<<obj.marks<<endl;
cout<<obj.name;

    return 0;
}
#include <iostream>
using namespace std;
class student 
{
    public:
    int n;
    string name;
    void display()
    {
        cout<<"this is a display function"<<" ";
    }
};

int main()
{
    cout<<"RADHE RADHE"<<endl;
     student obj;
     obj.name="BCA";
     obj.n = 25;
     obj.display();
     cout<<endl;
     cout<<obj.name<<endl;
     cout<<obj.n<<endl;
    
}
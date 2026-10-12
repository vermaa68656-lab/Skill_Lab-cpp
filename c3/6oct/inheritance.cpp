#include<iostream>
using namespace std;
class vehicle
{
    public :
    string brand = "KAWASKI";
    void hero (){
        cout<<"this is a professional bike"<<endl;
    }
    };
    class car : public vehicle
    {
        public :
        string model = "m5";
    };
    
    int main()
    {
        car c;
        c.hero();
        cout<<c.brand;
        cout<<c.model;
       
        
        return 0;
    }
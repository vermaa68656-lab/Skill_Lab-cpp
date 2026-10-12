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
    class cycle : public car {
        public :
        void display() {
        cout <<"this is cycle class"<<endl;
        }
    };
    class privatejet : public cycle {
        public :
        void p(){
        cout <<"this is privatejet"<<endl;
        }
    };
    
    int main()
    {
     privatejet p;
     cout<<p.brand<<endl;
     p.hero();
     cout<<p.model<<endl;
     p.display();
     p.p();
        
        return 0;
    }
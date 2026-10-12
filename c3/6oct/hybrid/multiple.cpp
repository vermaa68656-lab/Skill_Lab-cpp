#include<iostream>
using namespace std;
class vehicle{
    public:
    void bike(){
        cout<<"this is vehicle class"<<endl;
    }
};
class car{
    public:
    void four_whiller(){
        cout<<"this is car class"<<endl;
    }
};
class radhe{
    public:
    void show(){
        cout<<"this is radhe class"<<endl;
    }
};
class namaste:public vehicle,public car,public radhe{
    public:
    void hi(){
        cout<<"this is namaste class";
    }
};
int main (){
    namaste obj1;
    obj1.bike();
    obj1.four_whiller();
    obj1.show();
    obj1.hi();
    return 0;
}
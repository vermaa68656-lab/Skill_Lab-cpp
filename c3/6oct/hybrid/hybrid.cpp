#include<iostream>
using namespace std;
class vehicle {
public: 
void travel(){
    cout<<"this is vehicle class"<<endl;
}
};

class fare {
public:
void fare_a(){
    cout<<"this is fare class";
}
};

class car : public vehicle{
public: 
void car_travel(){
    cout<<"this is car class"<<endl;
}
};

class bus : public vehicle, public fare{
public:
void bus_travel(){
    cout<<"this is bus class"<<endl;
}
};



int main ()
{
    bus obj4;
    obj4.bus_travel();
    obj4.travel();
    obj4.fare_a();
    return 0;
}
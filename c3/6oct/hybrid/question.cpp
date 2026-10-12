#include<iostream>
using namespace std;
class student (){
    protected:
    string name;
    int rollno;
    public:
    void getstudent(){
        cout<<"enter student name";
        cin>>name;
        cout<<"enter rollno";
        cin>>rollno;
    }
};

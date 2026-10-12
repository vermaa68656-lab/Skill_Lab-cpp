#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int roll;


    public:
    student (string n, int m) {
        name = n;
        roll = m;
        cout<<name<<endl;
        cout<<roll;
    }
};
int main ()
{
    student o("AKKI",1);


    return 0;
}
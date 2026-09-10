#include<iostream>
#include<string>
using namespace std;
class Banking {
    //attributes /properties
    private:
    double deposite;
    public:
    Banking () { //non parameterized
        Mode_of_Payment="Cash";
        cout << "this is constructor call!" <<endl;
    }
//parameterized constructor 
Banking ( string u, string c, string mop, double AC, double dep ){
    Username = u;
    city = c;
    Mode_of_Payment = mop;
    AC_Number = AC;
    deposite = dep;
}
string Username;
string city;
string Mode_of_Payment;
double AC_Number;
double deposite;

void getInfo() {
    cout << "Username" <<Username <<endl;
    cout << "city" <<city <<endl;
    cout << "Mode-of_Payment" <<Mode_of_Payment <<endl;
    cout << "AC_Number" <<AC_Number <<endl;
    cout << "deposite" <<deposite <<endl;
}
};

int main()
{
    Banking b1("Radhe", "Varanasi", "cash", 124248090069, 28000); //constructor call
    b1.getInfo();
    return 0;
}
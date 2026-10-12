#include<iostream>
using namespace std;
class student {

    private:
    string name;
    int rollno;
    int math;
    int science;
    int computer;

    public:
student (string n, int rollno, int m, int s, int c)
{
    name= n;
    rollno = r;
    math = m;
    science = s;
    computer = c;

}
 int calculatetotal(){
        return math+science+computer;
    }

    float calculatepercentage(){
    return calculatetotal()/3.0;
    }

    void checkresult (){
        if(math > = 33 && science >= 33 && computer >= 33){
            cout<<"PASS"<<endl;
        }
        else
        {
            cout<<"FAIL"<<endl;
        }
        }

        void display (){
            cout<<"-----STUDENT MARKS MANAGEMENT-----"<<endl;
            cout<<"NAME :"<<name;
            cout<<"ROLLNO :"<<rollno;
            cout<<"Total Marks :"<<calculatetotal()<<endl;
            cout<<"Percentage :"<<percentagecalculate()<<"%"<<endl;
            
        }
    };
int main()
{
    student obj("Radhe Radhe",069,70,84,89);

    obj.display();
    obj.checkresult();
    return 0;
}
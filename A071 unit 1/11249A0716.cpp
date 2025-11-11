#include<iostream>
using namespace std;
class employee
{
    public:
    int empid;
    string name;
    float salary;
    void setemployee(int id,string n,float s)
    {
        empid = id;
        name = n;
        salary = s;
    }
    void displayemployee();
};
void employee::displayemployee()
{
    cout<<"Employee id :"<<empid
        <<",name:"<<name
        <<",salary:"<<salary<<endl;
}
int main()
{
    employee e1,e2;
    e1.setemployee(101,"ravi",500000.75);
    e2.setemployee(102,"priya",62000.50);
    e1.displayemployee();
    e2.displayemployee();
    return 0;
}

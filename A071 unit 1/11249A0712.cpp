#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    float marks;
    void display()
    {
        cout<<"name:"<<name
            <<",Roll No:"<<roll
            <<",Marks:"<<marks<<endl;
    }
};
int main()
{
    student s1,s2,s3;
    s1.name ="raj";
    s1.roll = 101;
    s1.marks = 85.5;
    s2.name ="divya";
    s2.roll = 102;
    s2.marks = 90;
    s1.name ="kumar";
    s3.roll = 103;
    s3.marks = 78.2;
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
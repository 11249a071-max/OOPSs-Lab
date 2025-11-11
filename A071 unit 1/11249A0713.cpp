 #include<iostream>
using namespace std;
class account
{
    public:
    int accno;
    string name;
    float balance;
    void diaplay()
    {
        cout<<"Account no :"<<accno
            <<",Name :"<<name
            <<",Balance :"<<balance<<endl;
    }
};
int main()
{
    account a1,a2;
    a1.accno =1001;
    a1.name = "Ramesh";



    a1.balance = 25000.50;
    a2.accno =1002;
    a2.name = "sita";
    a2.balance = 40000.70;
    a1.diaplay();
    a2.diaplay();
    return 0;
}
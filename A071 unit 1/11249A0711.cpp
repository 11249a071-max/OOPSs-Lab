#include<iostream>
using namespace std;
class laptop
{
    public:
    string brand;
    string processor;
    int ram;
    void display()
    {
        cout<<"Brand :"<<brand
            <<",processor :"<<processor
            <<",ram :"<<ram<<"GB"<<endl;
    }
};
int main()
{
 laptop l1,l2;
 l1.brand = "dell";
 l1.processor = "Intel i5";
 l1.ram = 8;
 l2.brand = "HP";
 l2.processor = "AMDRYZEN 5";
 l2.ram = 16;
 l1.display();
 l2.display();
 return 0;
}
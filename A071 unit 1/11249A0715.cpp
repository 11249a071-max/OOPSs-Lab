#include<iostream>
using namespace std;
class book
{
    public:
    string title;
    string author;
    float price;
    void display()
    {
        cout<<"title :"<<title
            <<",author :"<<author
            <<",price :"<<price<<endl;
    }
};
int main()
{
    book b1,b2;
    b1.title = "c++ pringramming";
    b1.author = "bjarne stroustrup";
    b1.price = 750.00;
    b2.title = "Data structure";
    b2.author = "mark allen";
    b2.price = 600.70;
    b1.display();
    b2.display();
    return 0;
}

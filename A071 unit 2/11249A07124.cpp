#include<iostream>
using namespace std;
class math{
    public:
    inline int add(int a, int b){return a+b;}
    inline int subtract(int a ,int b){return a-b;}
};
int main(){
    math m;
    cout<<"add :"<<m.add(10,5)<<endl;
    cout<<"subtract :"<<m.subtract(10,5)<<endl;
    return 0;
}
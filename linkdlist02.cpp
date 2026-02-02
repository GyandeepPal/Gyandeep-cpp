#include<iostream>
using namespace std;   
class Demo{
    public:
    int x; //normal data
    int *y; //poinrter data (dynamic)
    //default constructor


//copy constructor
Demo()
{
    y=new int(5);
    x=10;
}
//destructor
~Demo(){
    delete y; //free dynamic memory
}
    void display()
    {
    cout<<"x="<<x<<endl;
    cout<<"y="<<*y<<endl;
    }
};
int main(){
    Demo d1; //default constructor
    Demo d2; //copy constructor
    cout<< "before modifying d2" << endl;
    d1. display();
    d2. display();

    *(d2.y)=50; //modifying d2's dynamic value
    cout<< "after modifying d2" << endl;
    d1.display();
    d2.display();

    return 0;

   
}
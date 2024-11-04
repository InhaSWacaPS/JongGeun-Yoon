#include <iostream>

using namespace std;

class A{
    public: 
    int a;
};
int main(){
    int a=1;
    int* b = &a;
    int* c=new int[100];
    A a=new A();
}
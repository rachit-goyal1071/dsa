// clases types are defined on the basis of types of variables declared within them
// type are auto extern static register

#include <iostream>

using namespace std;
int b;

void basicClassExample(){
    cout<<"All types of funct declaration";

    int a =32;
    extern int b;
    b=33;
    static int c = 34;
    register int d = 35;

    cout<<endl<<a<<endl<<b <<endl<<c<<endl<<d;

}

int main(){
    basicClassExample();
    return 0;
}
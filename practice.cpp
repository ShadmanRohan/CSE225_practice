#include <stdio.h>
#include <iostream>


using namespace std;

int main (){
    int a = 5;
    int b = (a++)+(++a);
    cout<<b<<endl;

    return 0;
}

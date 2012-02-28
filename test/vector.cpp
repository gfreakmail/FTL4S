#include<iostream>
#include<FTL4S.h>

using namespace std;
using namespace FTL4S;
int main(void){

    Vector v;
    v.Add(5, 1.0 , 2.0 , 3.0 , 4.0,  5.0);
    cout << v.size();
    cout << endl << v[4] << "   " << v[3];
 

}


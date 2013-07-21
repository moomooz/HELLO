#include <iostream>
#include <memory>
#include "consttest.h"
#include <vector>

using namespace std;

void passref( int &a);

int main(){

    // Declare Variables
    int temp=0, s = 0;

    // initilize vectors
    vector<int> vt;
    vector<unique_ptr<consttest>> vv;

    // regular object based off the stack
    consttest test(45,85);
    test.printt();

    // pointer to the object
    consttest *sptr = &test;
    sptr->printt();

    // pointer of object consttest bassed off the heap
    consttest* hptr = new consttest(66,99);
    hptr->printt();

    // smart pointer wrapping around raw pointer pointing to object in the heap
    unique_ptr<consttest> uptr(new consttest(45,45));
    uptr->printt();

    for(int i = 0; i <= 100; i++){
        vt.push_back(i*10);
        cout<<vt[i]<<endl;
    }

    for(int i = 0; i <= 12; i++)
        for(int j = 0; j <= 200; j++)
            for(int k = 0; k <= 200; k++){
                temp=i*j*k;
                cout<<temp<<endl;
                s++;
                }

    vv.push_back(move(uptr));

    if(!vv.empty())
        cout << "I am :  \n" << endl;


    // Play around with const function.
    passref(s);

    cout<<"s is still :"<<s<<endl;

    cout<<"\n\n\n\n\n";
    return 0;
}

void passref( int &a){

    a=a*1000;
    cout << a << endl;
}






#include "consttest.h"
#include <iostream>

consttest::consttest(int a, int b): a(a), cb(b)
{
}

void consttest::printt()
{
    std::cout << getA() << " & " << getCB() << std::endl;
}

void consttest::setA(int a){

    a = a;
}

int consttest::getA(){

    return a;
}

int consttest::getCB(){

    return cb;
}

consttest::~consttest(){}


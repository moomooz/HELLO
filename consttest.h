#ifndef CONSTTEST_H
#define CONSTTEST_H

class consttest
{

public:

    consttest(int a, int b);
    consttest();
    ~consttest();
    void printt();
    void setA(int a);
    int getA();
    int getCB();

private:

    int a;
   const int cb;

};



#endif // CONSTTEST_H

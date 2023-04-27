#ifndef TASK02_BIGNUMBER_H
#define TASK02_BIGNUMBER_H
#include "LongArray.h"
#include <iostream>
class BigNumber {
    bool negative= false;
    LongArray * number=nullptr;
    size_t length=0;

public:

    BigNumber()=default;
    BigNumber(const char*);
    BigNumber(long long int);

    BigNumber(const BigNumber&other);
    BigNumber& operator=(const BigNumber&other);
    ~BigNumber();

private:
    void free();
    void copyFrom();

    void stringToNumber(const char*);
};

#endif //TASK02_BIGNUMBER_H

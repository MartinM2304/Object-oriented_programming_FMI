#include "BigNumber.h"
#include <iostream>

BigNumber::BigNumber(const char *arr) {
    if(arr[0]=='-'){
        negative= true;
    }
    stringToNumber(arr+1);
}
BigNumber::BigNumber(long long num) {
    if(num<0){
        negative= true;
        num*=-1;
    }
    number=new LongArray[1];
    number[0]=(unsigned long long)num;

}
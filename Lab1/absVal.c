#include "absVal.h"

/*
 * absVal(x): return the absolute value of x
 *   You may assume that INT_MIN (-2^31) is not provided as an input.
 *   Example: absVal(-1) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 */
int absVal(int x) {
    int cond = (x >> 31) & 0x1;
    cond=~cond+1;
    x = (cond & ~x+1) | (~cond & x)  ;
    //int result=(x + (x >> 31)) ^ (x >> 31);
    return x;
}

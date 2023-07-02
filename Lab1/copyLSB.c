#include "copyLSB.h"

/*
 * copyLSB(x): return an int with all bits set to the least significant bit of x
 *   Example: copyLSB(5) = 0xFFFFFFFF, copyLSB(6) = 0x00000000
 *   Legal ops: ! ~ & ^ | + << >>
 */
int copyLSB(int x) {
    //int x = 121;
    //printf("%d",x<<31);
    int result =((x<<31)>>31);
   // printf("%#.8x",result);
   // printf("0x%.8X",result);
    return result;
}

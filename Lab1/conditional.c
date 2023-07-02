#include "conditional.h"

/*
 * conditional(x, y, z): same as x ? y : z
 *   Example: conditional(2,4,5) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 */
int conditional(int x, int y, int z) {
    int cond = ((x | (~x + 1)) >> 31) & 0x1;
    cond=~cond+1;
   // printf("cond %d\n",cond);
     x = (cond & y) | (~cond & z);
   // printf("\n%d\n",result);
    return x;
}

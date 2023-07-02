
/*
 * addNumber(set, x): Add 'x' to the bitset represented in array 'set'
 *   Assume that 0 <= x <= 127 and 'set' is a pointer to 16-byte array
 */

void addNumber(unsigned char* set, int x) {


unsigned char A=1<<(7-(x%8));
if((set[x/8]&A)==0){
  set[x/8]+=A;
}
  return;
}

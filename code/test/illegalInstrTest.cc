/* illegalInstr.cc
 *  Simple program to test function pointer handle work
 *
 *  Just create a function pointer to bogus value 
 */

#include "syscall.h"

int
main()
{
  int (*functionPtr)();         
  functionPtr = 7;
}

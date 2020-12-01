/**
 * C++ puzzle program.  Try to figure out the result before running!
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

using std::cout;
using std::endl;

int main() {
  int *p, *q; /* Initialized pointers p and q */
  p = new int; // p points to a garbage value on heap memory
  q = p; // q is assigned the value of p, which is the address of p.
  *q = 8; // We dereference q to assign it the value of 8.
  cout << *p << endl; /*p is the value of 8 */

  q = new int; // q now points to an int address with a garbage value.
  *q = 9; // We derefernece q to give it the value of 9.
  cout << *p << endl; // This should be 8.
  cout << *q << endl; // This should be 9.

  /*
  Something that should be included here that the instructor did not include
  was the deallocation of the heap memory. I shall include that below.
  */
 delete p;
 p = nullptr;
 delete q;
 q = nullptr;


  return 0;
}

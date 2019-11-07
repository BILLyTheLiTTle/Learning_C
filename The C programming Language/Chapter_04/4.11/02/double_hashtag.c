#include <stdio.h>

/* You can find an extreme example here (https://susam.in/blog/obfuscating-main/)
and the explanation of it here (https://www.hackerearth.com/practice/notes/writing-a-c-program-without-a-main/)
*/

// same as #define integer int
#define integer i ## nt

// wtf is this? Copied from here (https://www.cprogramming.com/reference/preprocessor/token-pasting-operator.html)
#define DECLARE_AND_SET(type, varname, value) type varname = value; type orig_##varname = varname;

int main(int argc, char const *argv[]) {
  integer a = 1;
  DECLARE_AND_SET( int, area, 2 * 6 );
  printf("%d\n", a);
  return 0;
}

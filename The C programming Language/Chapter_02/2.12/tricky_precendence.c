#include <stdio.h>

void printArray(int[]);
void reassignArray(int[]);

int main(int argc, char const *argv[]) {

  printf("--Original array--\n");
  int a[5] = {10, 11, 12, 13, 14};
  printArray(a); // 10, 11, 12, 13, 14

  printf("\n--Array Example 1 (i++)--\n");
  int i = 0;
  a[i] = i++;
  printArray(a); // 10, 0, 12, 13, 14

  printf("\n--Array Example 2 (i+1)--\n");
  reassignArray(a);
  i = 0;
  a[i] = i + 1;
  printArray(a); // 1, 11, 12, 13, 14

  printf("\n--Array Example 3 (++i)--\n");
  reassignArray(a);
  i = 0;
  a[i] = ++i;
  printArray(a); // 10, 1, 12, 13, 14

  printf("\n--Variable Example (j++)--\n");
  int j = 0;
  j = j++;
  printf("j: %d\n",j); // 0
  j++;
  printf("j (again): %d\n",j); // 1

  return 0;
}

void printArray(int arr[]) {
  for(int i=0; i<5; i++) {
    printf("a[%d]: %d\n", i, arr[i]);
  }
}

void reassignArray(int arr[]) {
  for(int i = 0 ; i < 5 ; i++) {
    arr[i] = i + 10;
  }
}

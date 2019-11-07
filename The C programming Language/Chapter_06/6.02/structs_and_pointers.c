#include <stdio.h>

struct person{
  int age;
  char *name;
} p;

struct person *pp = &p;

int main(int argc, char const *argv[]) {
  //struct person p = {5, "Bill"}; // Creates a new variable instead of the global above
  p.age = 5;
  p.name = "Bill";

  printf("-- From structure itself --\n");
  printf("Age: %d\n", p.age);
  printf("Name: %s\n\n", p.name);

  printf("-- From structure pointer --\n");
  printf("Age [(*pp).age]: %d\n", (*pp).age); // 5
  printf("Name [(*pp).name]: %s\n\n", (*pp).name); // Bill
  printf("Age [pp->age]: %d\n", pp->age); // 5
  printf("Name [pp->name]: %s\n\n", pp->name); // Bill
  printf("First letter of name [*(*pp).name]: %c\n", *(*pp).name); // B
  printf("First letter of name [*((*pp).name)]: %c\n", *((*pp).name)); // B
  printf("First letter of name [*pp->name]: %c\n", *pp->name); // B
  printf("First letter of name [*(pp->name)]: %c\n", *(pp->name)); // B

  //printf("First letter of name [*(pp->name)]: %c\n", *pp.*name); // Compile time error
  return 0;
}

#include <stdio.h>

struct point {
  int x;
  int y;
} dot;

int main(int argc, char const *argv[]) {

  return 0;
}

struct point getPointOneOne() {
  struct point pt;
  pt.x = 1;
  pt.y = 1;
}

/* struct getPointTwoTwo() {
  struct point pt;
  pt.x = 2;
  pt.y = 2;
} */

struct point getAPoint(struct point pt) {
  return pt;
}

/* struct getBPoint(struct point pt) {
  return pt;
} */

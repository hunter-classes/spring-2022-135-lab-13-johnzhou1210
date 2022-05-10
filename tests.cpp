#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include "doctest.h"
#include "recursion.h"
using std::cout;

TEST_CASE("TASK A") {
  CHECK(printRange(1,10) == "1 2 3 4 5 6 7 8 9 10");
  CHECK(printRange(-6,4) == "-6 -5 -4 -3 -2 -1 0 1 2 3 4");
  CHECK(printRange(0,0) == "0");
}

TEST_CASE("TASK B") {
  CHECK(sumRange(1,3) == 6);
  CHECK(sumRange(-2,10) == 52);
  CHECK(sumRange(1,1) == 1);
}

TEST_CASE("TASK C") {
  const int size = 10;
  int *arr = new int[size];
  arr[0] = 12; arr[1] = 17; arr[2] = -5; arr[3] = 3; arr[4] = 7;
  arr[5] = -15; arr[6] = 27; arr[7] = 5; arr[8] = 13; arr[9] = -21;
  CHECK(sumArray(arr, size) == 43);
  CHECK(sumArray(arr, 5) == 34);
  CHECK(sumArray(arr, 0) == 0);
  delete[] arr;
}

TEST_CASE("TASK D") {
  CHECK(isAlphanumeric("johnzhou1210") == false);
  CHECK(isAlphanumeric("john") == true);
  CHECK(isAlphanumeric("") == true);
}

TEST_CASE("TASK E") {
  CHECK(nestedParens("") == true);
  CHECK(nestedParens("(((((())))))") == true);
  CHECK(nestedParens("(()") == false);
}

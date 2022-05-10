#include <iostream>
#include "recursion.h"
using std::cout;

int main() {
  cout << "===========TASK A============\n";
  cout << "printRange(1,10) returns: " << printRange(1,10) << "\n";
  cout << "printRange(-6,4) returns: " << printRange(-6,4) << "\n";
  cout << "printRange(0,0) returns: " << printRange(0,0) << "\n";
  cout << "===========TASK B============\n";
  cout << "sumRange(1,3) returns: " << sumRange(1,3); cout << "\n";
  cout << "sumRange(-2,10) returns: " << sumRange(-2,10); cout << "\n";
  cout << "sumRange(1,1) returns: " << sumRange(1,1); cout << "\n";
  cout << "===========TASK C============\n";
  cout << "arr passed into sumArray function is the same one as in the lab example\n";
  const int size = 10;
  int *arr = new int[size];
  arr[0] = 12; arr[1] = 17; arr[2] = -5; arr[3] = 3; arr[4] = 7;
  arr[5] = -15; arr[6] = 27; arr[7] = 5; arr[8] = 13; arr[9] = -21;
  cout << "sumArray(arr, size) returns: " << sumArray(arr, size) << "\n";
  cout << "sumArray(arr, 5) returns: " << sumArray(arr, 5) << "\n";
  cout << "sumArray(arr, 0) returns: " << sumArray(arr, 0) << "\n";
  delete[] arr;
  cout << "===========TASK D============\n";
  cout << std::boolalpha;
  cout << "isAlphanumeric(\"johnzhou1210\") returns: " << isAlphanumeric("johnzhou1210") << "\n";
  cout << "isAlphanumeric(\"john\") returns: " << isAlphanumeric("john") << "\n";
  cout << "isAlphanumeric(\"\") returns: " << isAlphanumeric("") << "\n";
  cout << "===========TASK E============\n";
  cout << "nestedParens(\"\") returns: " << nestedParens("") << "\n";
  cout << "nestedParens(\"(((((())))))\") returns: " << nestedParens("(((((())))))") << "\n";
  cout << "nestedParens(\"(()\") returns: " << nestedParens("(()") << "\n";
  cout << "===========END TESTS============\n";
  return 0;
}

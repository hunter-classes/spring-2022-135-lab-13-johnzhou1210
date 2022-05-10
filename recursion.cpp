#include <iostream>
using std::cout;

std::string printRange(int left, int right) {
  if (left > right) {
    // base case
    return "";
  }
  std::string space = " ";
  if (left == right) {
    space = "";
  }
  return std::to_string(left) + space + printRange(left + 1, right);
}

int sumRange(int left, int right) {
  if (left == right) {
    return left;
  }
  return left + sumRange(left + 1, right);
}

int sumArrayInRange(int* arr, int i, int size) {
  if (size <= 0) {
    return 0;
  }
  if (i == size - 1) {
    return arr[i];
  }
  return arr[i] + sumArrayInRange(arr, i + 1, size);
}

int sumArray(int* arr, int size) {
  return sumArrayInRange(arr, 0, size);
}

bool charIsAlpha(char c) {
  return (c >= 97 && c <= 122) || (c >= 65 && c <= 90);
}

bool isAlphanumeric(std::string s) {
  // just check first character
  if (s.length() == 0) {
    // base case
    return true;
  }
  return charIsAlpha(s[0]) && isAlphanumeric(s.substr(1));
}

bool nestedParens(std::string s) {
  if (s == "" || (s.length() == 2 && s == "()")) {
    return true;
  }
  if (s.length() == 1) {
    return false;
  }
  // get next string to analyze
  if (s[0] == '(' && s[s.length() - 1] == ')') {
    std::string nxtStr = s.substr(1, s.length() - 2);
    return nestedParens(nxtStr);
  }
  return false;
}

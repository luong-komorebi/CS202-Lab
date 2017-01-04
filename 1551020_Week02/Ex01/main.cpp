#pragma once
#include "function.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  int a, b, c, d, j, i=0, k;
  bool tF;
  fraction f1[100], sumOfAll, minimum, maximum,swap;
  ifstream file;
  file.open("input.txt");
  while (!file.eof()) {
    file >> a;
    file >> b;
    f1[i].input(a, b);
    i++;
  }
  file.close();
  j = i-1;
  minimum = f1[j];
  maximum = f1[j];
  while (j >= 0) {
    tF = compareFraction(f1[j], minimum);
    sumOfAll = sum(sumOfAll, f1[j]);
    if ( tF == true) 
      maximum = f1[j];
    else minimum = f1[j];
    j--;
    reduceFraction(sumOfAll);
  }
 
  cout << "Sum of all Fractions : ";
  sumOfAll.displayFraction();
  cout << "Minimum : ";
  minimum.displayFraction();
  cout << "Maximum: ";
  maximum.displayFraction();


  for (j = 0; j < (i - 1); j++)
  {
    for (k = 0; k < i - j - 1; k++)
    {
      if (!compareFraction(f1[k], f1[k + 1]))
      {
        swap = f1[k];
        f1[k] = f1[k + 1];
        f1[k + 1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (j = 0; j < i; j++)
    f1[j].displayFraction();

  return 0;
}
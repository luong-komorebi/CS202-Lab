#include "function.h"

#include <iostream>
using namespace std;

int main() {
  int selection = 0, n; 
  
  cout << "Input Selection : ";
  cout << "1. Array of integer numbers." << endl;
  cout << "2. Array of float numbers." << endl;
  cout << "3. Array of fractions." << endl;
  cout << "4. Array of strings." << endl;
  cout << "Select : ";
  cin >> selection;
  cout << "How many elements : ";
  cin >> n;
  switch (selection) {
  case 1: {
    int* a = NULL;
    int x;

    inputArr(a, n);
    outputArr(a, n);
    cout << "Sum of element : " << sumOfElements(a, n);
    cout << "Minimum element : " << findMinimum(a, n);
    cout << "Which element do you want to find frequency ? ";
    cin >> x;
    cout << "Its frequency : " << findFreq(a, x, n);
    delete[] a;
    a = NULL;
  }
  case 2: {
    float* a = NULL;
    float x;

    inputArr(a, n);
    outputArr(a, n);
    cout << "Sum of element : " << sumOfElements(a, n);
    cout << "Minimum element : " << findMinimum(a, n);
    cout << "Which element do you want to find frequency ? ";
    cin >> x;
    cout << "Its frequency : " << findFreq(a, x, n);
    delete[] a;
    a = NULL;
  }
  case 3: {
    Fraction* a = NULL;
    Fraction x;

    inputArr(a, n);
    outputArr(a, n);
    cout << "Sum of element : " << sumOfElements(a, n);
    cout << "Minimum element : " << findMinimum(a, n);
    cout << "Which element do you want to find frequency ? ";
    input(x);
    cout << "Its frequency : " << findFreq(a, x, n);
    delete[] a;
    a = NULL;
  }
  }
}


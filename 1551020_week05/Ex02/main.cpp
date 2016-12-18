#include "Circle.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Triangle.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, type;
  float biggestArea = 0, biggestPerimeter = 0;
  Shape* output1 = NULL;
  Shape* output2 = NULL;
  cout << "How many shapes do you want ? ";
  cin >> N;
  vector<Shape*> shape(N);
  for (int i = 0; i < N; ++i) {
    cout << "\n Which types of shapes: 1.Triangle \t\t 2.Rectangle \t\t 3.Circle \n";
    cin >> type;
    switch (type) {
    case 1: {
      float a, b, c;
      cout << "\n Input the sides: ";
      cout << "\n a=";
      cin >> a;
      cout << "\n b=";
      cin >> b;
      cout << "\n c=";
      cin >> c;
      shape[i] = new Triangle(a, b, c);
      break;
    }
    case 2: {
      float a, b;
      cout << "\n Input the sides: ";
      cout << "\n a=";
      cin >> a;
      cout << "\n b=";
      cin >> b;
      shape[i] = new Rectangle(a, b);
      break;
    }
    case 3: {
      float r;
      cout << "\n Input the sides: ";
      cout << "\n r = ";
      cin >> r;
      shape[i] = new Circle(r);
      break;
    }
    }
  }
  for (int i = 0; i < N; ++i) {
    if (shape[i]->perimeter() > biggestPerimeter) {
      biggestPerimeter = shape[i]->perimeter();
      output1 = shape[i];
    }
    if (shape[i]->area() > biggestArea) {
      biggestArea = shape[i]->area();
      output2 = shape[i];
    }
  }
  cout << "\nBiggest Perimeter: ";
  output1->Display();
  cout << "\nBiggest Area: ";
  output2->Display();

}
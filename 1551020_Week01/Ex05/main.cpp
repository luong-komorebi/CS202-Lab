#include "function.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  student a, b, c;
  long x;
  string q, w, e;
  float t;
  ofstream fout;

  cout << "First student's ID: ";
  cin >> x;
  cout << "First student's fullname: ";
  cin.ignore();
  getline(cin, q);
  cout << "First studnet's gender: ";
  cin.ignore();
  getline(cin, w);
  cout << "First student's address: ";
  cin.ignore();
  getline(cin, e);
  cout << "First student's mark: ";
  cin >> t;
  a.input(x, q, w, e, t);

  cout << "Second student's ID: ";
  cin >> x;
  cout << "Second student's fullname: ";
  cin.ignore();
  getline(cin, q);
  cout << "Second studnet's gender: ";
  cin.ignore();
  getline(cin, w);
  cout << "Second student's address: ";
  cin.ignore();
  getline(cin, e);
  cout << "Second student's mark: ";
  cin >> t;
  b.input(x, q, w, e, t);

  fout.open("output.xml");
  c = a.greaterMark(b);
  fout << "<id>" << c.getID() << "</id>\n";
  fout << "<fullname>" << c.getName() << "</fullname>\n";
  fout << "<classid>" << c.classID() << "</classid>\n";
  fout << "<address>" << c.getAddress() << "</address>\n";
  fout << "<mark>" << c.getMark() << "</mark>\n";
  fout << "<gpa>" << c.GPA() << "</gpa>\n";
  fout.close();

}
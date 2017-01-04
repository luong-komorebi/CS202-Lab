#pragma once
#include "function.h"
#include <iostream>
#include <fstream>

using namespace std;

int main() {
  student* a;
  long x;
  string q1, q2, w, e;
  float t;
  ofstream fout;
  int noOfStudents;
  cout << "How many Students do you want to input? ";
  cin >> noOfStudents;
  a = new student[noOfStudents];
  for(int i =0 ; i<noOfStudents; i++) {
    cout << " student"<<i+1<<"'s ID: ";
    cin >> x;
    cout << " student" << i+1 << "'s firstname: ";
    cin.ignore();
    getline(cin, q1);
    cout << " student" << i+1<< "'s lastname: ";
    getline(cin, q2);
    cout << " student" << i+1<< "'s gender: ";
    getline(cin, w);
    cout << " student" << i+1<< "'s address: ";
    getline(cin, e);
    cout << " student" << i+1<< "'s mark: ";
    cin >> t;
    a[i].input(x, q1, q2, w, e, t);
  }

  a = sortStudent(a, noOfStudents);
  fout.open("output.xml");
  for (int i = 0; i < noOfStudents; i++) {
    fout << "<Student>\n";
    fout << "\t<id>" << a[i].getID() << "</id>\n";
    fout << "\t<firstname>" << a[i].getFName() << "</firstname>\n";
    fout << "\t<lastname>" << a[i].getLName() << "</lastname>\n";
    fout << "\t<classid>" << a[i].classID() << "</classid>\n";
    fout << "\t<address>" << a[i].getAddress() << "</address>\n";
    fout << "\t<mark>" << a[i].getMark() << "</mark>\n";
    fout << "\t<gpa>" << a[i].GPA() << "</gpa>\n";
    fout << "</Student>\n>";
  }
  fout.close();

}
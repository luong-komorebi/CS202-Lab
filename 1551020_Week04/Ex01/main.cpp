
#include "Employee.h"
#include "Lecturer.h"
#include "Researcher.h"
#include "Employee.h"
#include "TA.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
  Employee** employee;
  int N, input, i = 0, tmpHours, tmpPapers, tmpProjects, totalMoney=0;
  string name;

  cout << "How many Staff do you want to input? ";
  cin >> N;
  employee = new Employee*[N];
  //pointer cua employee thi co the chi den cac kieu du lieu khac 

  while (i != N) {
    cout << "Inputting staff. ";
    cout << "Which type? (1: TA, 2: Lecturer, 3: Researcher)";
    cin >> input;
    switch (input) {
    case 1: {
      cout << "\n Name: ";
      getline(cin, name);
      cout << "\n Work Hours: ";
      cin >> tmpHours;
      employee[i] = new TA(tmpHours, name);
      break;
    }
    case 2: {
      cout << "\n Name: ";
      getline(std::cin, name);
      cout << "\n Work Hours: ";
      cin >> tmpHours;
      cout << "\n Number of Papers ";
      cin >> tmpPapers;
      employee[i] = new Lecturer(tmpPapers, tmpHours, name);
      break;
    }
    case 3: {
      cout << "\n Name: ";
      getline(std::cin, name);
      cout << "\n Number of Projects: ";
      cin >> tmpProjects;
      cout << "\n Number of Papers ";
      cin >> tmpPapers;
      employee[i] = new Researcher(tmpPapers, tmpProjects, name);
      break;
    }
    }
    i++;
  }
  for (int j = 0; j < N; j++) {
    totalMoney += employee[i]->money();
  }
  cout << "\nTotal money the university has to pay:  " << totalMoney;

}
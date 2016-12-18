
#include "Employee.h"

Employee::Employee(void) {
  name = "";
}

Employee::Employee(const string& name) {
  this->name = name;
}

int Employee::money() {
  return 0;
}
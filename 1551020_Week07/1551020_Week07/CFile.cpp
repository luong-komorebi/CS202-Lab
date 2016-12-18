
#include "CFile.h"
#include <iostream>
#include <string>
using namespace std;
CFile::CFile() {

}

void CFile::print(const int& arg) {}

CFile::CFile(const string& name, const int& size) {
  this->name = name;
  this->size = size;
  type = "File";
}

int CFile::getSize() {
  return this->size;
}

string CFile::getType() {
  return this->type;
}

string CFile::getName() {
  return this->name;
}

void CFile::setHidden(bool a, bool b) {
  this->hiddenOrNot = a;
}

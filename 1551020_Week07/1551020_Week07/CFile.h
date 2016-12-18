#pragma once
#include "CItem.h"
#include <string>
using namespace std;
class CFile : public CItem {
public:
  CFile();
  CFile(const string& name, const int& size);
  int getSize();
  string getType();
  string getName();
  void print(const int& arg);
  void setHidden(bool a, bool b);

};
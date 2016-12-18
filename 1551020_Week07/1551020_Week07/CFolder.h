#pragma once
#include "CFile.h"
#include "CItem.h"
#include <vector>
#include <string>
using namespace std;

class CFolder : public CItem {
public:
  CFolder();
  CFolder(const string& name);
  void add(CFile* a);
  void add(CFolder* b);
  void print(const int& arg);
  string getType();
  string getName();
  int getSize();
  CItem* removeByName(const string& a);
  CItem* findByName(const string& b);
  void setHidden(bool a, bool b);
private:
  int numberOfFiles;
  int numberOfFolders;
  vector<CItem*> allTheFiles;
  
};
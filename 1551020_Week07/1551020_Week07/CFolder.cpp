#pragma once
#include "CFolder.h"
#include "CFile.h"
#include <vector>
#include <iostream>
#include <string>

using namespace std;
CFolder::CFolder() {

}

CFolder::CFolder(const string& name) {
  this->name = name;
  this->type = "Folder";
  this->size = 0;
}

void CFolder::add(CFile* a) {
  numberOfFiles++;
  this->size += a->getSize();
  allTheFiles.push_back(a);
}

void CFolder::add(CFolder* b) {
  numberOfFolders++;
  this->size += b->getSize();
  allTheFiles.push_back(b);
}

void CFolder::print(const int& arg) {
  if (arg == 0) {
    cout << "\nSubfolders in folder: \n";
    for (int i = 0; i != allTheFiles.size(); i++) {
      if (allTheFiles[i]->getType() == "Folder") {
        cout << i+1<<" > "<< allTheFiles[i]->getName() <<endl;
      }
    }
  }
  else if (arg == 1) {
    cout << "\nFiles in Folder : \n";
    for (int i = 0; i != allTheFiles.size()-1; i++) {
      if (allTheFiles[i]->getType() == "File") {
        cout << allTheFiles[i]->getName() << endl;
      }
    }
  }
  else {
    cout << "Wrong Argument input. Cannot print anything.";
  }
}

string CFolder::getName() {
  return this->name;
}

string CFolder::getType() {
  return this->type;
}

int CFolder::getSize() {
  return this->size;
}

CItem* CFolder::removeByName(const string& a) {
  vector<CItem*>::iterator iter;
  for (iter = allTheFiles.begin(); iter != allTheFiles.end(); ++iter) {
    if ((*iter)->getName() == a) {
      allTheFiles.erase(iter);
      return this;
    }
  }
  return NULL;
}

CItem* CFolder::findByName(const string& b) {
  vector<CItem*>::iterator iter;
  for (iter = allTheFiles.begin(); iter != allTheFiles.end(); ++iter) {
    if ((*iter)->getName() == b) {
      cout << "\nFind found ! \n";
      return (*iter);
    }
    else cout << "\nFind not Found ! \n";
  }
  return NULL;
}
void CFolder::setHidden(bool a, bool b) {
  if (a == true) {
    this->hiddenOrNot = true;
    vector<CItem*>::iterator iter;
    for (iter = allTheFiles.begin(); iter != allTheFiles.end(); ++iter) {
      (*iter)->setHidden(true, true);
    }
  }
  else {
    this->hiddenOrNot = false;
    vector<CItem*>::iterator iter;
    for (iter = allTheFiles.begin(); iter != allTheFiles.end(); ++iter) {
      (*iter)->setHidden(false, false);
    }
  }
}


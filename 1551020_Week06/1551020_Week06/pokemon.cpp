#pragma once
#include "pokemon.h"
#include <iostream>
#include <string>
using namespace std;

Pokemon::Pokemon() {
  name = "";
  Ptype = "Hoa";
  hp = 100;
  damage = 100;
}
Pokemon::Pokemon(string name, string Ptype, unsigned int hp, vector<string> skillset) {
  this->name = name;
  this->Ptype = Ptype;
  this->hp = hp;
  this->skillset = skillset;
}
Pokemon::Pokemon(string name, string Ptype, int growIndex) {
  this->name = name;
  this->Ptype = Ptype;
  this->hp = 100 + 200 * growIndex;
  this->damage = 100 + 250 * growIndex;
  for (int i = 0; i < growIndex; i++) {
    skillset.push_back(Ptype + to_string(i+1));
  }
}
Pokemon::Pokemon(const Pokemon& a) {
  this->name = a.name;
  this->hp = a.hp;
  this->damage = a.damage;
  this->Ptype = a.Ptype;
  this->skillset = a.skillset;
}
Pokemon& Pokemon::operator=(const Pokemon& a) {
  this->hp = a.hp;
  this->damage = a.damage;
  this->skillset = a.skillset;
  return (*this);
}
bool Pokemon::operator>(const Pokemon& a) {
  int check =0;
  if (this->hp > a.hp) ++check;
  if (this->damage > a.damage) ++check;
  if (this->skillset.size() > a.skillset.size()) ++check;
  if (check >= 2) return true;
  return false;
}
istream &operator >> (istream& input, Pokemon &a) {
  string skillInput;
  cout << "Name : ";
  getline(input, a.name);
  
  cout << "Hp: ";
  input >> a.hp;
  cout << "Type: ";
  getline(input, a.Ptype);
  while (a.Ptype != "Hoa" || a.Ptype != "Thuy" || a.Ptype != "Loi" || a.Ptype != "Moc") {
    cout << "Reinput Type Please  : ";
    getline(input, a.Ptype);
  }
  for (int i = 0; i < a.skillset.size(); i++) {
    input.ignore();
    cout << "Name of  skill : ";
    getline(input, skillInput);
    a.skillset.push_back(skillInput);
  }
  return input;
}
ostream &operator << (ostream &output, Pokemon &a) {
  output << " Name : " << a.name << endl;
  output << " Ptype: " << a.Ptype << endl;
  output << " HP : " << a.hp << endl;
  output << " Damage: " << a.damage << endl;
  for (int i = 0; i < a.skillset.size(); i++) {
    output << " Skill " << i + 1 << " : " << a.skillset[i];
  }
  return output;
}
void Pokemon::HocChieuThuc(vector<string> a) {
  skillset.insert(skillset.end(), a.begin(), a.end());
}
void Pokemon::TanCong(Pokemon a) {
  while (this->hp > 0 && a.hp >0) {
    if (this->Ptype == "Hoa") {
      if (a.Ptype == "Hoa") {
        a.hp -= this->damage / 2;
        this->hp -= a.damage / 2;
      }
      if (a.Ptype == "Thuy") {
        a.hp -= this->damage / 2;
        this->hp -= a.damage * 2;
      }
      if (a.Ptype == "Moc") {
        a.hp -= this->damage * 2;
        this->hp -= a.damage / 2;
      }
    }
    if (this->Ptype == "Thuy") {
      if (a.Ptype == "Thuy") {
        a.hp -= this->damage / 2;
        this->hp -= a.damage / 2;
      }
      if (a.Ptype == "Moc") {
        a.hp -= this->damage / 2;
        this->hp -= a.damage * 2;
      }
      if (a.Ptype == "Hoa") {
        a.hp -= this->damage * 2;
        this->hp -= a.damage / 2;
      }
    }
    if (this->Ptype == "Loi") {
      if (a.Ptype == "Loi") {
        a.hp -= this->damage / 2;
        this->hp -= a.damage / 2;
      }
      if (a.Ptype == "Moc") {
        a.hp -= this->damage / 2;
        this->hp -= a.damage * 2;
      }
      if (a.Ptype == "Thuy") {
        a.hp -= this->damage * 2;
        this->hp -= a.damage / 2;
      }
    }
    if (this->Ptype == "Moc") {
      if (a.Ptype == "Moc") {
        a.hp -= this->damage / 2;
        this->hp -= a.damage / 2;
      }
      if (a.Ptype == "Hoa") {
        a.hp -= this->damage / 2;
        this->hp -= a.damage * 2;
      }
      if (a.Ptype == "Thuy") {
        a.hp -= this->damage * 2;
        this->hp -= a.damage / 2;
      }
    }
  }
  if (this->hp <= 0) cout << this->name << "Is severly Damage (HP<0)";
  if (a.hp <= 0) cout << a.name << "Is severly Damage (HP<0)";
}



Pokemon::~Pokemon() {
  // everything is clean automatically, we dont need to explicitly delete anything here.
}



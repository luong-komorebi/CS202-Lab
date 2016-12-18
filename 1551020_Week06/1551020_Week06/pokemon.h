#pragma once
#include <string>
#include <vector>
using namespace std;
class Pokemon {
private:
  string name;
  string Ptype;
  unsigned int hp;
  int damage;
  vector<string> skillset;
public:
  Pokemon();
  Pokemon(string name, string Ptype, unsigned int hp, vector<string> skillset);
  Pokemon(string name, string Ptype, int growIndex);
  Pokemon(const Pokemon& a);
  Pokemon& operator=(const Pokemon& a);
  bool operator>(const Pokemon& a);
  ~Pokemon();
  friend istream &operator >> (istream &input, Pokemon &a);
  friend ostream &operator << (ostream &output, Pokemon &a);
  void HocChieuThuc(vector<string> a);
  void TanCong(Pokemon a);
};
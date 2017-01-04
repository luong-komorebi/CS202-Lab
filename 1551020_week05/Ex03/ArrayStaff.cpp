
#include "ArrayStaff.h"



ArrayStaff::ArrayStaff()
{
  n = 5;
  vector<StaffMember*>member(n);
}


ArrayStaff::~ArrayStaff()
{

}

void ArrayStaff::Input()
{
  int type;
  cout << "How many staffs are there in your company ? ";
  cin >> n;
  //vector<StaffMember*>member(n);

  string name, passport, email, address;
  int numberDay, dayOff, numberPro;
  Date d;

  int n1, n2, n3;
  n1 = n2 = n3 = 0;
  double moneyAOfficial = 0, moneyAPro = 0, moneyASale = 0;


  for (int i = 0; i < n; ++i) {
    cout << "What types of staffs: 1.Official \t\t 2.Production \t\t 3.Sale \n";
    cin >> type;
    cin.ignore();
    switch (type) {
    case 1: {
      InputInfo(name, passport, email, address);
      cout << "Day of birth: \n";
      d.Input();
      cout << "Input days of work: ";
      cin >> numberDay;
      cout << "Input days off: ";
      cin >> dayOff;
      OfficialStaff *temp = new OfficialStaff(name, passport, email, address, d, numberDay, dayOff);
      member.push_back(temp);
      n1++;
      moneyAOfficial += member[i]->getSalary();
      break;
    }
    case 2: {
      InputInfo(name, passport, email, address);
      cout << "Day of birth: \n";
      d.Input();
      cout << "Input numbers of productions : ";
      cin >> numberPro;
      ProductionStaff *temp = new ProductionStaff(name, passport, email, address, d, numberPro);
      member.push_back(temp);
      n2++;
      moneyAPro += member[i]->getSalary();
      break;
    }
    case 3: {
      InputInfo(name, passport, email, address);
      cout << "Day of birth: \n";
      d.Input();
      cout << "Input days of work: ";
      cin >> numberDay;
      SaleStaff *temp = new SaleStaff(name, passport, email, address, d, numberDay);
      member.push_back(temp);
      n3++;
      moneyASale += member[i]->getSalary();
      break;
    }
    default:cout << "Wrong input, try again ! \n";
    }
  }
  cout << "\nAverage money of Official staff: " << moneyAOfficial / (double)n1;
  cout << "\nAverage money of Production staff: " << moneyAPro / (double)n2;
  cout << "\nAverage money of Sale staff: " << moneyASale / (double)n3;
}

void ArrayStaff::InputInfo(string &name, string &passport, string &email, string &address)
{
  cout << "Name: ";
  getline(cin, name);
  cout << "Passport: ";
  getline(cin, passport);
  cout << "Email: ";
  getline(cin, email);
  cout << "Address: ";
  getline(cin, address);
}

void ArrayStaff::Display()
{
  for (int i = 0; i < member.size(); ++i) {
    cout << "\nMember " << i << " :";
    member[i]->Display();
  }
}

void ArrayStaff::sortStaffMoney()
{
  StaffMember *a;
  for (int i = 0; i < member.size(); ++i) {
    for (int j = i + 1; j < member.size(); ++j) {
      if (member[i]->getSalary() > member[j]->getSalary()) {
        a = member[j];
        replace(member.begin(), member.end(), member[j], member[i]);
        replace(member.begin(), member.end(), member[i], a);
      }
    }
  }
}




// Program with class bill. The users have the option to pay the bill either by cheque or by cash. Use inheritance to model this situation

#include <iostream>
using namespace std;

class Bill {
 public:
  virtual void pay() = 0;
};

class Cheque : public Bill {
 public:
  void pay() override { cout << "Paying by cheque." << endl; }
};

class Cash : public Bill {
 public:
  void pay() override { cout << "Paying by cash." << endl; }
};

int main() {
  Bill* bill;
  Cheque cheque;
  Cash cash;

  bill = &cheque;
  bill->pay();

  bill = &cash;
  bill->pay();

  return 0;
}
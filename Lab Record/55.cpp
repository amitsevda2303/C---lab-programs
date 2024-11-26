// Program that uses multi level inheritance to implement classes- note, server
// and device

#include <iostream>
using namespace std;

class Note {
 public:
  void displayNote() { cout << "This is a note." << endl; }
};

class Server : public Note {
 public:
  void displayServer() { cout << "This is a server." << endl; }
};

class Device : public Server {
 public:
  void displayDevice() { cout << "This is a device." << endl; }
};

int main() {
  Device d;
  d.displayNote();
  d.displayServer();
  d.displayDevice();
  return 0;
}
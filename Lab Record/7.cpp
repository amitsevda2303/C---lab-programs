// Program to convert an lowercase character into uppercase and uppercase character into lowercase

#include <iostream>
using namespace std;

int main()
{
  char input, ch;
  cout << "Enter the character: ";
  cin >> input;
  if (isupper(input))
  {
    ch = tolower(input);
    cout << input << " converted to lowercase: " << ch;
  }
  else
  {
    ch = toupper(input);
    cout << input << " converted to uppercase: " << ch;
  }
  return 0;
}
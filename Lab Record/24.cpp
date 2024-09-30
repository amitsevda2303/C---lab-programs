// Program to interchange the largest and the smallest number in the array

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;
  int arr[n];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int max = arr[0], min = arr[0], maxIndex = 0, minIndex = 0;
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
      maxIndex = i;
    }
    if (arr[i] < min)
    {
      min = arr[i];
      minIndex = i;
    }
  }
  int temp = arr[maxIndex];
  arr[maxIndex] = arr[minIndex];
  arr[minIndex] = temp;
  cout << "The array after interchanging the largest and the smallest number is: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
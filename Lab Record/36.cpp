//progrsm to add two vectors(arrays)
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {6, 7, 8, 9, 10};

    if (arr1.size() != arr2.size())
    {
        cout << "Both arrays are not equal" << endl;
        return 1;
    }
    vector<int> arr3;

    for (int i = 0; i < arr1.size(); i++)
    {
        arr3.push_back( arr1[i] + arr2[i]);
    }
    for (int i = 0; i < arr1.size(); i++)
    {
        cout<<arr3[i]<<" ";
    }
    return 0;
    
}
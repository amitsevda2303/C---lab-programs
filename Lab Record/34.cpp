//program to display the n lines of text starting from mth line
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    vector<string> lines;
    string line;
    int m , n;

    cout<<"Enter the lines of text (Type 'END' on a new line to stop ): "<<endl;
    while (getline(cin,line))
    {
        if (line == "END")
        {
            break;
        }
        lines.push_back(line);
        
    }

    cout<<"Enter the starting line number : ";
    cin>>n;
    cout<<"Enter the ending line number: ";
    cin>>m;
    cout<<"Displaying lines from "<<n <<" to " <<(m+n-1)<<" : "<<endl;
    for (int i = n-1; i < m-1 +n&& i < lines.size(); i++)
    {
        cout<<lines[i]<<endl;
    }
    
    return 0;
}
    
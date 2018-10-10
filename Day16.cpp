//Day 16: Exceptions - String to Integer

#include <iostream>
using namespace std;

int main()
{
    string s;
    
    cin>>s;
    
    try {
        
      cout<<stoi(s);
    }
    catch (...) {
        cout << "Bad String";
    }
    return 0;
}

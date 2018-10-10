//Day 1: Data Types

#include <iostream>
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int j;
    double e;
    string str;

    // Read and save an integer, double, and String to your variables.
     cin>>j;
     cin>>e;
     getline(cin >> ws, str);

    // Print the sum of both integer variables on a new line.
    cout<<i+j;
    
    // Print the sum of the double variables on a new line.
    cout<<"\n"<< fixed << setprecision(1) <<d+e;
    
    // Concatenate and print the String variables on a new line
    
    cout<<"\n"<< s << str;
    
     return 0;
}

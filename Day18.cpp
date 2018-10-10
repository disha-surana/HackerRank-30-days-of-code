//Day 18: Queues and Stacks

#include <iostream>

using namespace std;

class Solution {
    //Write your code here
    
    char stack[500],queue[500];
    int top,f,r;
    
    public:
    
    Solution(){
        top=-1;
        f=r=-1;
    }
    
    void pushCharacter(char ch){
        
        stack[++top]=ch;
    }
    
    void enqueueCharacter(char ch){
        
        if(r==-1)
            f=0;
        
        queue[++r]=ch;
    }
    
    char popCharacter(){
        
        if(top==-1)
            return '|';
        
        char ch=stack[top--];
        
        return ch;
    }
    
    char dequeueCharacter(){
        
        if(f==-1)
            return '|';
        
        char ch=queue[f];
        
        if(f==r)
            f=r=-1;
        else
            f++;
        
        return ch;
    }
    

};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}

//Day 19: Interfaces

#include <iostream>
using namespace std;

class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};
class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        
        if(n==1)
            return 1;
        
        int sum=0;
        
        for(int i=2;i<=n/2;i++){
            
            if(n%i==0)
                sum+=i;
            
        }
        
        return sum+1+n;
    }
};
int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}

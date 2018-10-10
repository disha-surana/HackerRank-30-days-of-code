//Day 17: More Exceptions

#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

class myexception: public exception
{
  virtual const char* what() const throw()
  {
    return "n and p should be non-negative";
  }
} myex;

class Calculator{
    
    int n,p;
    
    public:
    
    int power(int x,int y){
        n=x;
        p=y;
        
        if(p<0 || n<0){
            throw myex ;
        }
        else
            return pow(n,p);
        
    }
    
};

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}

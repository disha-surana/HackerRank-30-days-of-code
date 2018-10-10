//Day 25: Running Time and Complexity


#include <iostream>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int T,num,i,j,f;
    cin>>T;
    
    for(i=0;i<T;i++){
        
        cin>>num;
            if(num==1)
                f=1;
            else
                f=0;
        for(j=2;j*j<=num;j++){
            if(num%j==0){
                f=1;
                break;
            }
        }
        if(f==0)
           cout<<"Prime"<<endl;
        else
           cout<<"Not prime"<<endl;
 
    }
    
    return 0;
}

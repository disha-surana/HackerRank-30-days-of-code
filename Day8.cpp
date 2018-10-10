//Day 8: Dictionaries and Maps

#include <iostream>
#include<string.h>
using namespace std;

class person{
     public:
    char name[20];
    long phone;
    
    void input(char x[20],long y){
        strcpy(name,x);
        phone=y;
    }
};

int main() {
    
    char x[20],item[20];
    long y;
    unsigned n,j;
    cin>>n;
    person *p = new person[n];
    
    for(int i=0;i<n;i++){
        cin>>x>>y;
        p[i].input(x,y);
    }
    
    for(int i=0;i<n;i++){
        cin>>item;
        for(j=0;j<n;j++){
            if(strcmp(item,p[j].name)==0){
                cout<<p[j].name<<"="<<p[j].phone<<endl;
                break;
            }
        }
            if(j==n)
                cout<<"Not found"<<endl;
        
    }
    
    return 0;
}

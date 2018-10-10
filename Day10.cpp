//Day 10: Binary Numbers

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0,a[50],i=0;
    long b=1;
    int res=0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    while(n>0){
        b=b*10+(n%2);
        n/=2;
    }
    
    while(b>0){
        a[i++]=b%10;
        b/=10;
    }
    n=i-1;
    for(i=0;i<n;i++){
        //cout<<a[i]<<" ";
        if(a[i]==1){
            c++;
            res=c>res?c:res;
        }
        else{
            res=res<c?c:res;
            c=0;
            continue;
        }
    }
    
    cout<<res;

    return 0;
}

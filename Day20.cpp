//Day 20: Sorting

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,numSwaps=0,i,j,temp;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    // Write Your Code Here
    
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                numSwaps++;
                
            }
            
        }
    }
    
    cout<<"Array is sorted in "<<numSwaps<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1];
    
    
    return 0;
}

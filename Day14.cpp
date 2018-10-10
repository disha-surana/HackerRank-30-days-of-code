//Day 14: Scope

#include <vector>
#include <iostream>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
     Difference(vector<int> a){
        elements=a;
    }

    void computeDifference(){
        
       int n=elements.size();
       int h,l;
        h=l=elements[0]; 
        
        for(int i=1;i<n;i++){
            if(elements[i]>h)
                h=elements[i];
            if(elements[i]<l)
                l=elements[i];
        }
        maximumDifference = h-l;
    }
  }; 
  
  int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}

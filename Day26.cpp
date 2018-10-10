//Day 26: Nested Logic

#include <iostream>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int fine;
    
    int return_D,return_M,return_Y;
    int due_D,due_M,due_Y;
    
    cin>>return_D>>return_M>>return_Y;
    cin>>due_D>>due_M>>due_Y;
    
    if(due_Y < return_Y)
        fine=10000;
    else if(due_Y == return_Y  && due_M < return_M)
        fine= 500 * (return_M - due_M);
    else if(due_Y == return_Y  && due_M == return_M && due_D < return_D)
        fine= 15 * (return_D - due_D);
    else
        fine=0;
    
    cout<<fine;
    
    return 0;
}

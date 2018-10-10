//Day 2: Operators

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int tip_per,tax_per,cost1;
	float meal,tip,tax,cost;

	cin>>meal>>tip_per>>tax_per;

	tip=(float)(tip_per*meal/100);
	tax=(float)(tax_per*meal/100);

	cost=meal+tip+tax;

	cost1= round(cost);

	cout<<"The total meal cost is "<<cost1<<" dollars.";

	return 0;
}

//Day 29: Bitwise AND

#include <iostream>

using namespace std;

int main(){

	int T,Bit_and;
	cin>> T;

	for(int t=0;t<T;t++){

		int N,K;
		cin>>N>>K;
		int res=0;

		for(int i=1;i<=N;i++){

			for(int j=i+1;j<=N;j++){

				Bit_and= i&j;
				if(Bit_and > res && Bit_and < K )
					res=Bit_and;
			}
		}

		cout<<res<<endl;
	}

	return 0;
}

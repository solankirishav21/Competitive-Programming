#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		if(x<=y){
			cout<<(y-x+1)/2 + (y-x)%2<<endl;
		}
		else{
			cout<<(x-y)<<endl;
		}
	}
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		map<int , int> m;
		for(int i=0;i<5;i++)
		{
			int a;
			cin>>a;
			m[a] +=1; 
		}
// 		for(auto pr :m)
// 		{
// 			cout<<pr.first<<" "<<pr.second<<endl;
// 		}
        if(m[1]>m[2])
            cout<<"INDIA"<<endl;
        else if(m[2]>m[1])
            cout<<"ENGLAND"<<endl;
        else if(m[1] == m[2])
            cout<<"DRAW"<<endl;
	}
}
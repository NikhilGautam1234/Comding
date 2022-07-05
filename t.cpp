#include "bits/stdc++.h"
#define ll long long
using namespace std;

int main(){
	int x,m;
	cin>>x>>m;
	if(m%x) cout<<-1<<"\n";
	else{
		int x=0,p=m/x;
		while(p%2==0) p/=2,x++;
		while(p%3==0) p/=3,x++;
		if(p!=1) cout<<-1<<"\n";
		else cout<<x<<"\n";
	}
	return 0;
}
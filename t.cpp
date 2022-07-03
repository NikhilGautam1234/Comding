#include "bits/stdc++.h"
#define ll long long
using namespace std;

int main(){
	int tt;cin>>tt;
	int x=0;
	while(tt--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a+b+c>=2) x++;
	}
	cout<<x;
	return 0;
}
#include "bits/stdc++.h"
using namespace std;

int main(void){
	string str;
	cin>>str;
	int n = str.length();
	cout<<n<<"\n";
	for(int i = 0; i < n/2 ; i++) swap(str[i],str[n-i-1]);
	for(char p: str) cout<< p;
	cout<<"\n";
}
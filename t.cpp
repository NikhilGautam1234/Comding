#include "bits/stdc++.h"
using namespace std;

int main(void){
	int n,i=0;
	cin>>n;
	int a[n];
	for(;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n/2;i++){
		swap(a[i],a[n-1]);
	}
	for (int x: a){
		cout<<x<<" ";
	}
}
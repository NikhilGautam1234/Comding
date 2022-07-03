#include "bits/stdc++.h"
using namespace std;

int main(void){
	vector<int> arr = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
	int j=0;
	for(int i = 0; i< arr.size();i++){
		if(arr[i]<0){
			if(i!=j)swap(arr[i],arr[j]);
			j++;
		}
	}
	for(int i: arr){
		cout<< i <<" ";
	}
}
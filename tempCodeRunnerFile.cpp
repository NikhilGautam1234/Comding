int n = str.length();
	for(int i = 0; i < n/2 ; i++) swap(str[i],str[n-1]);
	for(char p: str) cout<< p;
	cout<<"\n";
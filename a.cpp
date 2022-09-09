#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> t;
	while(t--){
		long long n,f;
		cin>>n; f=n;
		for(int i=0;i<8;i++) n*=t;
		cout<<n;
}
return 0;
}

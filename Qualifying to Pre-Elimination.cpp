#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	for(int tt=1; tt<=t; tt++){
		int n, k;
		cin >> n >> k;
		int p[100005];
		memset(p, 0, sizeof(p));
		for(int i=1; i<=n; i++){
			cin >> p[i];
		}
		
		sort(p+1, p+n+1);
		reverse(p+1, p+n+1);
		int want;
		for(int i=1; i<=n; i++){
			if(i==k)	want=p[i];
		}
		
		int ans=0;
		for(int i=1; i<=n; i++){
			if(p[i]>=want)	ans++;
		}
		
		cout << ans << endl;
	}	
}
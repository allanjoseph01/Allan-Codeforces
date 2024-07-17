#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		string s1,s2;
		cin >> s1 >> s2;
		int j=0,i=0;
		int siz1=s1.length(),siz2=s2.length();
		while(i<siz1){
			while(j<siz2 && s1[i]!=s2[j]){
				j++;
			}
			if(s1[i]==s2[j]){
				break;
			}else{
				i++;
				j=0;
			}
		}
		long long ans=i+j;
		while(s1[i]==s2[j] && i<siz1 && j<siz2){
			i++;
			j++;
		}
		ans+=(siz1-i);
		ans+=(siz2-j);
		cout << ans << endl;
	}
}
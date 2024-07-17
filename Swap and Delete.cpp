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
		string s;
		cin >> s;
		int siz=s.length();
		int c1=0,c0=0;
		for(int i=0;i<siz;i++){
			if(s[i]=='0'){
				c0+=1;
			}else{
				c1+=1;
			}
		}
		int i;
		for(i=0;i<siz;i++){
			if(s[i]=='0'){
				if(c1==0){
					break;
				}
				c1-=1;
			}else{
				if(c0==0){
					break;
				}
				c0-=1;
			}
		}
		cout << siz-i << endl;
	}
}
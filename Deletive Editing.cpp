#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
long long arr[100000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		string s,t;
		cin >> s >> t;
		deque<char>letter;
		deque<char>le;
		int ss=s.length();
		int st=t.length();
		for(int i=0;i<st;i++){
			letter.push_front(t[i]);
		}
		bool ans=true;
		for(int j=ss-1;j>=0;j--){
			if(!letter.empty()){
				if(s[j]==letter.front()){
					letter.pop_front();
				}else{
					while(!letter.empty()){
						if(s[j]==letter.front()){
							ans=false;
							break;
						}
						le.push_back(letter.front());
						letter.pop_front();
					}
					if(!ans){
						break;
					}
				}
			}else{
				if(!le.empty() && le.front()==s[j]){
					le.pop_front();
				}else{
					while(!le.empty()){
						if(s[j]==le.front()){
							ans=false;
							break;
						}
						letter.push_back(le.front());
						le.pop_front();
					}
					if(!ans){
						break;
					}				
				}
			}
		}
		if(ans && letter.empty() && le.empty()){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
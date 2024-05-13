#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		char st;
		cin >> st;
		string s="codeforces";
		string ans="NO";
		for(int i=0;i<s.length();i++){
			if(int(s[i])==int(st)){
				ans="YES";
				break;
			}
		}
		cout << ans << endl;
	}
}
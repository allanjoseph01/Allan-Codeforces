#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		string s;
		cin >> s;
		int count=0;
		for(int i=0;i<n;i++){
			if(s[i]=='.'){
				count+=1;
			}
			if(i>0 && i<n-1){
				if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.'){
					count=2;
					break;
				}
			}
		}
		cout << count << endl;
	}
}
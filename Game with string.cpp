#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	stack<char>ans;
	int count=0;
	for(int i=0;i<s.length();i++){
		if(ans.empty() || ans.top()!=s[i]){
			ans.push(s[i]);
		}else{
			ans.pop();
			count+=1;
		}
	}
	if(count%2==1){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}
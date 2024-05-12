#include<bits/stdc++.h>
using namespace std;
string shift(string st){
	return st.substr(st.length()-1,1) + st.substr(0,st.length()-1);
}
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		string s;
		cin >> s;
		string str=shift(s);
		if(str==s){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
			cout << str << endl;
		}
	}
}
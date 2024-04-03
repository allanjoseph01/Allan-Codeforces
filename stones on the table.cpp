#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	char a=s[0];
	int count=0;
	for(int i=1;i<n;i++){
		if(s[i]==a){
			count+=1;
		}else{
			a=s[i];
		}
	}
	cout << count;
}
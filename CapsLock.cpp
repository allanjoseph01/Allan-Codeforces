#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	bool alls= true;
	for(int j=0;j<s.size();j++){
		if(!isupper(s[j])){
			alls=false;
		}
	}
	if(alls){
		for(int k=0;k<s.size();k++){
			s[k]=tolower(s[k]);
		}
	}
	else{
		if((islower(s[0]) || isupper(s[0]))){
		bool all= true;
		for(int i=1;i<s.size();i++){
			if (!isupper(s[i])){
				all=false;
			}
		}
		if(all){
			s[0]=toupper(s[0]);
			for(int j=1;j<s.size();j++){
				s[j]=tolower(s[j]);
			}
		}
		}
	}
	cout << s;
}
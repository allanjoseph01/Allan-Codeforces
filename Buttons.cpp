#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int a,b,c;
		cin >> a >> b >> c;
		if(c%2!=0){
			if(b>a){
				cout << "Second" << endl;
			}else{
				cout << "First" << endl;
			}
		}else{
			if(b>a){
				cout << "First" << endl;
			}else{
				cout << "Second" << endl;
			}
		}
	}
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int x,y;
		cin >> x >> y;
		if(x%2==0 && y%2==0 && y<=x/2){
			cout << "YES" << endl;
		}else if(x%2==1 && y%2==1 && y<=x/2){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
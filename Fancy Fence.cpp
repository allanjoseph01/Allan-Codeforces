#include<bits/stdc++.h>
using namespace std;
//formula for side of a regular polygon --> (((n-2)*180)/n)=angle
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int a;
		cin >> a;
		int n=(360/(180-a));
		if((float(360)/(float(180-a)))-n==0){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
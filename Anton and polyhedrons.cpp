#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	int count=0;
	for(int i=0;i<t;i++){
		string s;
		cin >> s;
		if(s=="Cube"){
			count+=6;
		}else if(s=="Tetrahedron"){
			count+=4;
		}else if(s=="Octahedron"){
			count+=8;
		}else if(s=="Icosahedron"){
			count+=20;
		}else{
			count+=12;
		}
	}
	cout << count;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int a, y, n;
		cin >> a >> y >> n;
		if(n-n%a+y<=n) {
			cout << n-n%a+y << endl;
		} else {
			cout << n-n%a-(a-y) << endl;
		}
	}
	return 0;
}
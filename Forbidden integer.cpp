#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n,k,x;
		cin >> n >> k >> x;
		if(x!=1 && k>1){
			cout << "YES" << endl;
			cout << n << endl;
			for(int i=0;i<n;i++){
				cout << "1 ";
			}
			cout << endl;
		}else{
			vector<int>number;
			int sum=n;
			int p=1;
			while(p<=k && sum<n){
				if(p==x){
					p+=1;
				}
				else if(n-sum<k){
					k-=1;
				}else{
					if(n%2==0){
						if(k%2==0 && (n-sum)%k!=x){
							sum+=k;
							number.push_back(k);
						}else{
							k-=1;
						}
					}else if((n-sum)%k!=x){
						sum+=k;
						number.push_back(k);
					}else{
						k-=1;
					}
				}
			}
			if(sum==n){
				cout << "YES" << endl;
				cout << number.size() << endl;
				for(int j=0;j<number.size();j++){
					cout << number[j] << " ";
				}
				cout << endl;
			}else{
				cout << "NO" << endl;
			}
		}
	}
}
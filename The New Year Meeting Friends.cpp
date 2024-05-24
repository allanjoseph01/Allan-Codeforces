#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int maxi=a;
    int mini=a;
    maxi=max(maxi,max(b,c));
    mini=min(mini,min(b,c));
    cout << maxi-mini << endl;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int arr[3];
    arr[0]=(n*nl)/(k*l);
    arr[1]=(n*1)/(c*d);
    arr[2]=(n*np)/p;
    sort(arr,arr+3);
    cout << arr[2] << endl;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    for(int i=1;i<=4;i++)
        cin >> arr[i];
    string st;
    cin >> st;
    int sum=0;
    for(int j=0;j<st.size();j++)
        sum+=arr[st[j]-'0'];
    cout << sum << endl;
    return 0;
}
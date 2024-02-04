#include<stdio.h>
void main(){
	int n;
	scanf("%d",&n);
	int is_prime[n+1];
	for(int i=1;i<=n;i++){
		is_prime[i]=i;
	}
	int j;
	for(int i=2;j<=n;i++){
		if(is_prime[i]==i){
			for(j=2*i;j<=n;j+=i){
				if(is_prime[j]==j){
					is_prime[j]=i;
				}
			}
		}
	}
	printf("%d",is_prime[2]);
	return 0;
}
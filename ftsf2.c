#include<stdio.h>
void main(){
	int n;
	scanf("%d",&n);
	int sum = 0;
	for(int i=1;i<=n;i++){
		int ai;
		scanf("%d ",&ai);
		sum+=ai;

	}
	printf("%d",sum);
}
#include<stdio.h>
int main(){
	int arr[100],k,i,j,n,sum;
	printf("enter the elements\n");
	scanf("%d",&n);
		printf("enter the k value\n");
	scanf("%d",&k);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]+arr[j]==k){
				printf("(%d %d)",arr[i],arr[j]);
			}
			
		}
		
	}
		//printf("(%d %d)",sum,arr[j]);
}

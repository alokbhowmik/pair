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
		for(j=0;j<n;j++){
			if(arr[i]+arr[j+1]==k){
				printf("(%d %d)",arr[i],arr[j+1]);
			}
			else{
				arr[j++]=arr[i];
			}
			
		}
		
	}
		//printf("(%d %d)",sum,arr[j]);
}

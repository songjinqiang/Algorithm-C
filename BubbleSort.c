#include <stdio.h>


int main()
{
	int arr[5]={2,1,3,5,4};
	int len=sizeof(arr)/sizeof(arr[0]);
	int i,j,tmp;
	
	for(i=0;i<len;i++){
	    for(j=i+1;j<len;j++){
	        if(arr[i]>arr[j]){
	            tmp=arr[i];
	            arr[i]=arr[j];
	            arr[j]=tmp;
	        }
	    }
	}
	for(i=0;i<len;i++){
	   printf("%d\n",arr[i]);
	}
	
    return 0;
}


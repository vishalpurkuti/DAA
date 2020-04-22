#include<stdio.h>
#include<conio.h>
void main(){
	
 int i,j,n,temp;
 int a[5]={7,100,9,5,8};
 n=5;
 for(i=0;i<n-1;i++)
 {
 	for(j=0;j<n-1-i;j++){
 		if(a[j]>a[j+1]){
 			temp=a[j];
 			a[j]=a[j+1];
 			a[j+1]=temp;
		 }
	 }
 }
 printf("The sorted list is:\n");
 for(i=0;i<n;i++){
 	printf("%d ",a[i]);
 }
 
}

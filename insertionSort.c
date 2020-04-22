#include<stdio.h>
#include<conio.h>
void main(){
	
	int i,j,n,temp,min; // 4 5 10 1 5 6
 int a[50];
 printf("Enter the number of integers to sort:");
 scanf("%d",&n);
 printf("Enter the %d integers:",n);
 for(i=0;i<n;i++){
 	scanf("%d",&a[i]);
 }
 
 for(i=1;i<n;i++){
 	temp=a[i];
 	j=i-1;
 	while(j>=0 && a[j]>temp){
 		a[j+1]=a[j];
 		j--;
	 }
	 a[j+1]=temp;
 }


	printf("The sorted array is:");
	 for(i=0;i<n;i++){
	 	printf("%d ",a[i]);
	 }
}



 

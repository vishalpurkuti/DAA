#include<stdio.h>
#include<conio.h>
void main(){
	
 int i,j,n,temp;
 
 int a[50];
 printf("Enter the number of integers to sort:");
 scanf("%d",&n);
 printf("Enter the %d integers",n);
 for(i=0;i<n;i++){
 	scanf("%d",&a[i]);
 }
  printf("The original list is: ");
 for(i=0;i<n;i++){
 	printf("%d ",a[i]);
 }
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

 printf("\nThe sorted list is:\n");
 printf("No of stepes %d",k);
 for(i=0;i<n;i++){
 	printf("%d ",a[i]);
 }
 
}

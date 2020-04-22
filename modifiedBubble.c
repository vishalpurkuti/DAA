#include<stdio.h>
#include<conio.h>      // 1 2 3 4 5
void main(){
	
 int i,j,n,temp;

 int a[5];
 printf("Enter the number of integers to sort:");
 scanf("%d",&n);
 printf("Enter the %d integers",n);
 for(i=0;i<n;i++){
 	scanf("%d",&a[i]);
 }
  printf("The original list is: ");
 for(i=0;i<n;i++){
 	printf("\n%d ",a[i]);
 }
 for(i=0;i<n-1;i++)

 {
 	printf("%d",j);
 	 int k=0;
 	for(j=0;j<n-1-i;j++){
 		if(a[j]>a[j+1]){
 			temp=a[j];
 			a[j]=a[j+1];
 			a[j+1]=temp;
 			k++;
 			
		 }
	 }

	 if(k==0)
	 break;
	 
 }

 printf("\nThe sorted list is:\n");
 for(i=0;i<n;i++){
 	printf("%d ",a[i]);
 }
 
}

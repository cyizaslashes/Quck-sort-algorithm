#include <iostream>

using namespace std;
 void Quicksort(int arr[15], int firstInt, int LastInt){
 	
 	int i,j,pivot,temp;
 	
 	if(firstInt < LastInt){
 		pivot=firstInt;
 		i=firstInt;
 		j=LastInt;
 		while (i<j){
 		 	
 		 	while(arr[i] <=arr[pivot]&& i<LastInt)
 		 	i++;
 		 	while(arr[j]>arr[pivot])
 		 	j--;
 		 	if (i<j){
 	          temp=arr[i];
 	          arr[i]=arr[j];
 	          arr[j]=temp;
 		 	
    }
   }
   
   
 temp=arr[pivot];
 arr[pivot]=arr[j];
 arr[j]=temp;
 Quicksort(arr, firstInt,j-1);
 Quicksort(arr, j+1,LastInt);
 
 }
}



int main(){
	int i, count , arr[15];
	printf("Enter the size the Array:");
	scanf("%d",&count);
	
	printf("Enter the elements of the Array:");
	 for(i=0;i<count;i++)
	 	scanf("%d",&arr[i]);
	 	
		 Quicksort(arr,0,count-1);
		 
		 printf("The Sorted Array is :");
		 
		  for (i=0;i<count;i++)
		  printf("%4d",arr[i]);
		  printf("\t");
		
		return 0;
	 	
}
	
	


/* DSA SORTING */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAX_SIZE 101
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))
void sort(int [],int);
void main(void)
{
  int list[MAX_SIZE],n,i;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  if (n<1 || n>MAX_SIZE){
    fprintf(stderr,"Invalid number of elements.\n");
    exit(EXIT_FAILURE);
  }
  for(i=0;i<n;i++){
    list[i]=rand()%1000;
    printf("%d ",list[i]);
  }
  sort(list,n);
  printf("\nSorted array: ");
  for(i=0;i<n;i++){
      printf("%d ",list[i]); 
  }
}
void sort(int list[],int n){
  int i,j,min,temp;
  for(i=0;i<n-1;i++){
    min=i;
    for(j=1+i;j<n;j++)
      if(list[j]<list[min])
       min=j;
      SWAP(list[i],list[min],temp);
  }
}
  

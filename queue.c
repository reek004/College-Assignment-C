#include<stdio.h>
#include<stdlib.h>

int arr[100];
int front=-1,back=-1;
int newEle;
int i;
void insertelement(int n){
	if(back == n-1){
	printf("Queue overflow\n");}
	else{
		  if (front == - 1){
	
	      printf("Enter the element you want to enter \n:");
	      scanf("%d",&newEle);
	      back += 1;
	      arr[back]=newEle;
}
}
}
void deleteElement(){
	if(front==-1 || front > back){
	  	printf("Queue underflow \n");	
		return ;
	}
	else{
	
	  printf("Element deleted from the Queue: %d\n", arr[front]);
      front += 1;
	}
	
}


void displayElement(){
        printf("The elements of stack are\n");
        for ( i = front; i <= back; i++)
            printf("%d ", arr[i]);
        printf("\n");
}
int main(){
	int i,ch;
	int maxLen;

	printf("Enter the length of queue \n");
	scanf("%d",&maxLen);
    

	while(1){
		printf("Enter 1 to Insert element \n");
		printf("Enter 2 to Delete element \n");
		printf("Enter 3 to Display element \n");
		printf("Enter 4 to return to exit \n");
	   scanf("%d",&ch);
	
	  switch(ch){
	  	 case 1 :
	  	 	insertelement(maxLen);
	  	 	break;
	  	 case 2 :
	  	 	deleteElement();
	  	 	break;
	  	 case 3 :
	  	 	displayElement();
	  	 	break;
	     case 4 :
	  	 	exit(0);
	      default : 
	      printf("wrong choice \n");
	  }  

	}
	return 0;
}

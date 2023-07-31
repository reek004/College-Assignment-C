#include<stdio.h>
#include<stdlib.h>

int arr[100];
int top = -1;
int newEle;
int i;
void pushElement(int x){
	if(top == x){
	printf("stack overflow");}
	
	else{
	
	printf("Enter the element you want to enter \n:");
	scanf("%d",&newEle);
	top++;
	arr[top]=newEle;
}
}
void popElement(){
	
	if(top==-1){
	  printf("stack underFlow");	
	}
	else{
	 top--;
	}
	
	
}
void displayElement(){
	printf("The elements of stack are\n");
	
	for(i = top; i>=0;--i){
		printf("|\t%d\t\\n",arr[i]);
	}
    printf("_______________");
}
int main(){
	int i,ch;
	int maxLen;
	
	//Intput length
	printf("Enter the length of stack \n");
	scanf("%d",&maxLen);
	while(1){
		printf("Enter 1 to push element \n");
		printf("Enter 2 to pop element \n");
		printf("Enter 3 to display element \n");
		printf("Enter 4 to return to exit \n");
	   scanf("%d",&ch);
	
	  switch(ch){
	  	 case 1 :
	  	 	pushElement(maxLen);
	  	 	break;
	  	 case 2 :
	  	 	popElement();
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


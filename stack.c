#include<stdio.h>

int main(){
	int data[5],top=-1,temp;
	
	int ch=0;
	
	
	while(ch!=4){
		cin>>ch;
	switch(ch){
		
		case 1: if(top!=4){
			cin>>temp;
			top++;
			data[top]=temp;
		}
		else
		printf("Stack is full\n");
	
	break;
	case 2:
		if(top==-1){
			printf("Stack is empty\n");
		}
		break;
		
		case 3:
			if(top!=-1){
				printf("POP element\n");
				top--;
				printf("%d",data[top]);
			}
			break;
			
		case 4:
			if(top!=-1){
				printf("Peek element");
					printf("%d",data[top]);
				
			}
			break;
	default :
		printf("Not found choice\n");
	}
}

}

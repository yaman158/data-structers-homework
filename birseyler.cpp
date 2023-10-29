#include<stdio.h>
#include<stdlib.h>

struct n{
	int y;
	n * next;
};
typedef n node;

void addlast(node *r, int x){
	while(r->next!=NULL){
		r = r -> next;
	}
	r-> next = (node*)malloc(sizeof(node));
	r-> next -> y = x;
	r-> next -> next = NULL;	
}

node * addfront(node* r, int x){
	node * temp = (node *)malloc(sizeof(node));
	temp -> y = x;
	temp -> next = r;
	r = temp;
	return r;
}

void printlist(node* r){
	if(r==NULL){
		printf("The list is empty");
	}
	else{
		while(r!=NULL){
			printf("%d \t", r ->y);
			r = r->next;
		}
	}
}

int main(){
	node * head = NULL;
	head = (node *)malloc(sizeof(node));
	head -> next = NULL;
	printf("sayi giriniz:");
	int x;
	scanf("%d", &x);
	if(x!=-1){
		head->y=x;
	}
	while(x!=-1){
		scanf("%d", &x);
		if(x%2==0){
			addlast(head, x);
		}
		if(x%2==1){
			head = addfront(head, x);
		}
	}
	printlist(head);
}

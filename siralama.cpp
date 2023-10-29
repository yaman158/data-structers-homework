#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct n{
	int y;
	n * next;
};
typedef n node;

void sort(node * r){
	node * z = r;
	while(z->next!=NULL){
		if(z -> y < z -> next -> y){
			int c = z->y;
			z->y = z->next->y;
			z->next->y = c;
			z = r;
		}
		z = z->next;
	}
	
}
void printlist(node* r){
	if(r==NULL){
		printf("The list is empty");
	}
	else{
		while(r!=NULL){
			printf("%d \n", r ->y);
			r = r->next;
		}
	}
}
int main(){
	srand(time(NULL));
	node * head = NULL;
	head = (node *)malloc(sizeof(node));
	head -> next = NULL;
	head-> y= rand()%101;
	int x;
	for(int i= 0;i<99;i++){
		x = rand()%101;
		node * temp = (node *)malloc(sizeof(node));
		temp -> y = x;
		temp -> next = NULL;
		if(head==NULL){
			head=temp;
		}
		else{
			node * last = head;
			while(last->next!=NULL){
				last = last->next;
			}
			last->next = temp;
		}
	}
	sort(head);
	printlist(head);
}

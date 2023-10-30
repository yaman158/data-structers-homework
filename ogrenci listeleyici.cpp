#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct student{
	char name[50];
	int age;
	int student_number;
	student * next;
};
typedef student node;

void countandlister(node *r){
	int counter = 0;
	while(r!=NULL){
		counter++;
		printf("%d. %s %d %d\n", counter, r->name,r->age,r->student_number);
		r= r->next;
	}
}

int main(){
	node * head = NULL;
	head = (node *)malloc(sizeof(node));
	strncpy(head->name, "saliha", sizeof(head->name) - 1);
	head->age = 27;
	head->student_number = 201;
	head->next = (node *)malloc(sizeof(node));
	strncpy(head->next->name, "ece", sizeof(head->next->name) - 1);
	head->next->age = 19;
	head->next->student_number = 203;
	head->next->next = NULL;
	countandlister(head);
}

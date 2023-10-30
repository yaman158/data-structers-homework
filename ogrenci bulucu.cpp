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

void studentfounder(node *r, char isim[]){
	while(r!=NULL){
		printf("%zu %zu", sizeof(r->name), sizeof(isim));
		if(r->name==isim){
			printf("%s %d %d\n",r->name,r->age,r->student_number);
		}
		r= r->next;
	}
}

int main(){
	node * head = NULL;
	head = (node *)malloc(sizeof(node));
	strcpy(head->name, "saliha", sizeof(head->name) - 1);
	head->age = 27;
	head->student_number = 201;
	head->next = (node *)malloc(sizeof(node));
	strcpy(head->next->name, "ece", sizeof(head->next->name) - 1);
	head->next->age = 19;
	head->next->student_number = 203;
	head->next->next = NULL;
	char isim[50];
	scanf("%s", isim);
	studentfounder(head, isim);
}

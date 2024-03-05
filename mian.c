#include<stdio.h>
#include<stdlib.h>
#define N 5
typedef struct queue {
	int value;
	struct queue* next;
}Link;
void enque(int date, Link* head);
int deque(Link* head);
void link_free(Link* head);
int main() 
{
	Link* head = (Link*)malloc(sizeof(Link));
	if (head) {
		head->value = -1;
		head->next = NULL;
	}
	int sum, date = 0, n = 0, k = 0;
	enque(1, head);
	enque(0, head);
	while (n < N) {
		if (date == 0) k = k + 1;
		else printf(" %d", date);
		if (k < 2) {
			sum = date;
			date = deque(head);
			sum = sum + date;
			enque(sum, head);
		}
		else {
			printf("\n");
			k = 0;
			n = n + 1;
			enque(0, head);
		}
	}
	link_free(head);
	return 0;
}
void enque(int date, Link* head) {
	Link* temp = (Link*)malloc(sizeof(Link));
	if (temp) {
		temp->value = date;
		temp->next = NULL;
		while (head->next) head = head->next;
		head->next = temp;
	}
}
int deque(Link* head) {
	int date = -100;
	if (head->next) {
		Link* temp = (Link*)malloc(sizeof(Link));
		if (temp) {
			temp = head->next;
			head->next = head->next->next;
			date = temp->value;
			free(temp);
		}
	}
	return date;
}
void link_free(Link* head) {
	Link* temp;
	while(head) {
		temp = head;
		head = head->next;
		free(temp);
	}
	printf("\nFinish!\n");
}
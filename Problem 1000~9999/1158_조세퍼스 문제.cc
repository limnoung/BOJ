#include <iostream>
using namespace std;
typedef struct node {
	int data;
	node* next;
}Node;
typedef struct list {
	int countIndex;
	Node* tail;
	Node* head;
}List;
List* InitList() {
	List* list = (List*)malloc(sizeof(List));
	list->tail = NULL;
	list->countIndex = 0;
	return list;
}
void AddNode(List* list, int position, node element) {
	Node *preNode = list->tail;
	Node *newNode = (Node *)malloc(sizeof(Node));

	newNode->data = element.data;

	if (list->countIndex == 0) {
		newNode->next = newNode;
		list->tail = newNode;
	}
	else
	{
			for (int i = 0; i < position; i++) {
				preNode = preNode->next;
			}
		newNode->next = preNode->next;
		preNode->next = newNode;
		if (position == list->countIndex) {
			list->tail = newNode;
		}
	}
	list->countIndex++;
}
void DelNode(List *list,  int position) {
	Node *preNode = list->tail;
	Node *delNode = list->tail;

	if (list->countIndex > 0) {
		for (int i = 0; i < position; i++) {
			preNode = preNode->next;
		}
		delNode = preNode->next;
		preNode->next = delNode->next;
		list->tail = preNode;
		printf("%d, ",delNode->data);
		free(delNode);
		
		list->countIndex--;
		if (position == list->countIndex) {
			list->tail = preNode;
		}
	}
}
int main() {
	List *list;
	Node node;
	int N, M;

	list = InitList();
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++) {
		node.data = i;
		AddNode(list, i-1, node);
	}
	printf("<");
	while (list->countIndex >1) {
		DelNode(list, M-1);
	}
	printf("%d>", list->tail->data);
}
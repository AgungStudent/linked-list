#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

Node *head = NULL;

void cetak() {
  Node *temp = head;
  while (temp != NULL) {
    printf("%d \n", temp->data);
    temp = temp->next;
  }
}
int main() {
  Node n1, n2, n3;
  n1.data = 10;
  n2.data = 20;
  n3.data = 30;

  head = &n1;
  n1.next = &n2;
  n2.next = &n3;
  n3.next = NULL;
	cetak();
}
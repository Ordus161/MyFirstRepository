
#include <iostream>
using namespace std;

template <typename T>

struct Node
{
	T data;
	Node<T>* next = NULL;
	Node<T>* prev = NULL;

};

template <typename T>
void AddNodeEnd(Node<T>*& head, Node<T>*& tail, T data)
{
	Node<T>* newNode = new Node <T>;
	newNode->data = data;
	if (head == NULL)
	{
		head = newNode;
		tail = newNode;
		return;
	}

	newNode->prev = tail;
	tail->next = newNode;
	tail = newNode;
}


template <typename T>
void ViewForward(Node<T>* head)
{
	Node<int>* help = head;
	while (help != NULL)
	{
		cout << help->data << "\t";
		help = help->next;
	}

}
int main()
{
	Node<int>* head = NULL;
	Node<int>* tail = NULL;
	for (int i = 0; i < 3; i++)
		AddNodeEnd(head, tail, i);

	ViewForward(head);

	//Node <int>* head = new Node<int>;
	//head->data = 0;
	//head->prev = NULL;

	//head->next = new Node<int>;
	//head->next->data = 1;
	//head->next->prev = head;

	//Node<int>*tail = new Node<int>;
	//tail->data = 2;
	//tail->prev = head->next;

	//head->next->next = tail;

	//Node<int>* help = tail;
}


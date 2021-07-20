#include "BST.h"

BinarySearchTree::BinarySearchTree(node*_root )
{
	this->root = _root;
}



void BinarySearchTree::_Add(node*& current,int data)
{
	node* newNode = new node{ data, NULL, NULL };
	if (current == NULL)
	{
		current = newNode;
		return;
	}
	if (data < current->key)
		_Add(current->left, data);
	else 
		_Add(current->right, data);

}

void BinarySearchTree:: _PreOrder(node* current)
{
	if (current == NULL)
		return;
	cout << current->key << "\t";
	this->_PreOrder(current->left);
	this->_PreOrder(current->right);
}

void BinarySearchTree::_InOrder(node* current)
{
	if (current == NULL)
		return;
	this->_InOrder(current->left);
	cout << current->key << "\t";
	this->_InOrder(current->right);
}

void BinarySearchTree::_PostOrder(node* current)
{
	
}


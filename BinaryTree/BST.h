#pragma once
#include<iostream>
using namespace std;

struct node
{
	int key;
	//string data;
	node* left = NULL;
	node* right = NULL;
};
class BinarySearchTree
{
private:
	node* root;
	void _Add(node*&,int);
	void _PreOrder(node*);
	void _InOrder(node*);
	void _PostOrder(node*);

public:
	BinarySearchTree(node* = NULL);

	void Add(int data) { this->_Add(this->root, data); }
	void PreOrder() { this->_PreOrder(this->root); }
	void InOrder() { this->_InOrder(this->root); }
	void PostOrder() { this->_PostOrder(this->root); }
	void Clear();



};

//Stack using Linked List.
//Implement Push, Pop, IsEmpty, Print function.

#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

struct StackNode{
	
	int data;
	StackNode* back;
	
};

StackNode* top = NULL;


//Push Function
StackNode* push(int x){
	
	StackNode* temp = (StackNode*) malloc(sizeof(StackNode));
	
	temp -> data = x;
	temp -> back = top; 
	top = temp;

	return top;
}

//Pop Function
StackNode* pop(){
	
	StackNode* temp = top;
	top = top -> back;
	delete temp;
	
	return top;

}

//Is empty Function 
void isEmpty(StackNode* top){
	
	if(top == NULL){
		cout<<"\n\nNo value found! Array is Empty.";
	}
	else{
		cout<<"\n\nArray is not Empty!";
	}
}

//Print Stack
void printStack(StackNode* top){

	if(top == NULL){
		return;
	}
	
	cout<< top -> data<<" ";
	
	printStack(top -> back);
}

//Main function
int main(){
	
	push(10);
	push(20);
	push(30);
	push(40);
	
	cout<<"Stack before pop : ";
	printStack(top); // print stack before pop
	
	cout<<"\n";
	pop();
	
	cout<<"Stack after pop : ";
	printStack(top); // print stack after pop
	
	isEmpty(top);
	
}

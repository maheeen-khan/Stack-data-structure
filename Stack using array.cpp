//Stack using Array
//Implement Push, Pop, IsEmpty, Print function.

#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int arr[10];
int top = -1;

//Push Function
void push(int x){
	
	if(top == 10){
		cout<<"Stack overflow!";
		return;
	}
	else{
		top++;
		arr[top] = x;	
	}

}

//Pop Function
int pop(){
	
	if(top == 0){
		cout<<"Stack Underflow!";
		return 0;
	}
	else{
		top--;
		return arr[top];
	}

}

//Is empty Function 
void isEmpty(){
	
	if(top == -1){
		cout<<"\n\nNo value found! Array is Empty.";
	}
	else{
		cout<<"\n\nArray is not Empty!";
	}
}

//Print Stack
void printStack(){
	for(int i = 0; i<= top; i++){
		cout<< arr[i] <<" ";
	}
}

//Main function
int main(){
	
	push(10);
	push(20);
	push(30);
	push(40);
	
	cout<<"Stack before pop : ";
	printStack(); // print stack before pop
	
	cout<<"\n";
	pop();
	
	cout<<"Stack after pop : ";
	printStack(); // print stack after pop
	
	isEmpty();
	
}

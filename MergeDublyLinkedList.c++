// This program is incomplete due to the lack of editor 

#include<bits/stdc++.h>

using namespace std;

struct Node{
  int data;
  Node* nextPointer;
  Node* previousPointer;
  Node* child;
};

Node* head;
int length;

void insert(int data){
   Node* temp = new Node;
   temp->data = data;
   temp->nextPointer = NULL;
   temp->previousPointer = NULL;
   if(head == NULL){
      head = temp;
  }else{
      Node* temp2 = new Node;
      temp2 = head;
      while(temp2->nextPointer != NULL){
        cout << temp2->data <<" ";
	temp2 = temp2->nextPointer;
      }
      temp->previousPointer = temp2;
      temp2->nextPointer = temp;
  }
  length++;
}

int main(){
   head = NULL;
   length = 0;
   insert(10);
   insert(20);

   cout << length << endl;
   cout << endl;
   cout <<"Head -Value "<< head->data <<" and head next "<< head->nextPointer->data <<endl;
return 0;
}
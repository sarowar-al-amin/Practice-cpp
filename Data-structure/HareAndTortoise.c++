// This program is looking for a loop in a linked list 
// If there any linked list exist any loop it will also 
// find the sequence value of the node.
// Here index value is start from 1
// Time complexity of the program is O(n)

#include<bits/stdc++.h>

using namespace std;

// Creating struct and defining it
struct HareAndTortoise
{
    /* data */
    int data;
    HareAndTortoise* pointer;
};

// Head and loop value those can
// be accessed from anywhere
// inside the program known  
// as Global variable
HareAndTortoise* head;
HareAndTortoise* loopPoint;


// Declaring and defining function
// This insert() is used to add node to the linked list
void insert(int data){
    // cout <<"\nInside insert()"<< endl;
    HareAndTortoise* temp = new HareAndTortoise;
    temp->data = data;
    temp->pointer = NULL;
    if(head == NULL){
        head = temp;
    }else
    {
        
        HareAndTortoise* find = new HareAndTortoise;
        find = head;

        while (find->pointer != NULL){
            find = find->pointer;
        }

        find->pointer = temp;

    }
    
}

// This makingLoop() is used to redirect the last node pointer
// to count-th node. That means making a loop from count-th node.
void makingLoop(int count){
    HareAndTortoise* temp = new HareAndTortoise;
    temp = head;
    int point = 1;
    while (point < count)
    {
        /* code */
        temp = temp->pointer;
        if(temp == NULL){
            // cout<<"\nLoop does not exist." << endl;
            break;
        }
        point++;
    }
    loopPoint = temp;
    temp = head;
    while (temp->pointer != NULL)
    {
        /* code */
        temp = temp->pointer;
    }

    temp->pointer = loopPoint;
    
    
}

// This checkingLoop() is used to find the starting index 
// of the loop if there any loop exist in the linked list.
int checkingLoop(){
    int result = 0;
    bool exist = true;
    HareAndTortoise* hare = new HareAndTortoise;
    HareAndTortoise* tortoise = new HareAndTortoise;

   
    hare = head;
    tortoise = head;
    while (true)
    {
        /* code */
        hare = hare->pointer;
        tortoise = tortoise->pointer;

        if(hare == NULL || hare->pointer == NULL){
            exist = false;
            break;
        }else
        {
            hare = hare->pointer;
        }


        if(tortoise == hare){
            cout <<"\n!!!Loop exist!!!"<<endl;
            break;
        }

    }




    if(exist){
        HareAndTortoise* temp = new HareAndTortoise;
        HareAndTortoise* temp2 = new HareAndTortoise;

        result++;
        temp = head;
        temp2 = tortoise;
        while (temp != temp2)
        {
            /* code */
            temp = temp->pointer;
            temp2 = temp2->pointer;
            result++;
        }
        
    }
    

    return result;
}


// This print() is used to print the entire linked list.
void print(){
    HareAndTortoise* temp = new HareAndTortoise;
    temp = head;

    while (temp != NULL)
    {
        /* code */
        cout << temp->data <<" ";
        temp = temp->pointer;
    }

    cout << endl;
    
}

// Main function starts here
int main(){

    head = NULL;
    int loop = rand() % 5 + 2;
    cout<<"\nRandom value: "<< loop<<endl;

    // Inserting node to the linked list
    insert(5);
    insert(10);
    insert(51);
    insert(110);
    insert(15);
    insert(18);
    // Printing the entire linked list before
    // creating loop
    print();

    // Creating loop at loop-th node
    makingLoop(loop);
    // Don't dare to call print() again.
    // print();
   
    // Lets check the list is there any loop exist or not.
    int result = checkingLoop();
    if(result > 0){
        cout <<"loop starts at "<< result <<"th node."<< endl;
    }else{
        cout <<"\nLoop does not exist"<<endl;
    }

    return 0;
}
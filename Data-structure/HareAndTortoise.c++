#include<bits/stdc++.h>

using namespace std;

struct HareAndTortoise
{
    /* data */
    int data;
    HareAndTortoise* pointer;
};

HareAndTortoise* head;
HareAndTortoise* loopPoint;

void insert(int data){
    cout <<"\nInside insert()"<< endl;
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


void makingLoop(int count){
    HareAndTortoise* temp = new HareAndTortoise;
    temp = head;
    int point = 0;
    while (point < count)
    {
        /* code */
        temp = temp->pointer;
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


int main(){

    head = NULL;

    insert(5);
    insert(10);
    print();
    return 0;
}
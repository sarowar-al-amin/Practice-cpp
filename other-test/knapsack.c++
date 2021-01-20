#include<stdio.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int knapsackTable[50][50];

int max(int x, int y){
    if(x > y){
        return x;
    }

    return y;
}

int knapsack(int number, int capacity, int* value, int* weight){
    int result, temp1, temp2;
    if(knapsackTable[number][capacity] > 0){
        return knapsackTable[number][capacity];
    }else if( number == 0 || capacity == 0){
        return 0;
    }else if(weight[number] > capacity){
        result = knapsack(number-1, capacity, value, weight);
    }else
    {
        temp1 = knapsack(number-1, capacity, value, weight);
        temp2 = value[number] + knapsack(number-1, capacity - weight[number], value, weight);
        result = max(temp2, temp1);
    }
    

    return result;
}

int main(){

    int number, capacity;
    printf("Enter the number : ");
    scanf("%d", &number);
    printf("\nEnter the sack capacity : ");
    scanf("%d", &capacity);

    int value[number+1], weight[number+1];
    int knapsackTable[number+1][capacity+1];
    // int selectedItem[number];

    for(int i = 1; i < number+1; i++){
        for(int j = 1; j < capacity+1; j++){
            knapsackTable[i][j] = -1;
        }
    }

    printf("\nEnter the iteam value and weight respectively: \n");
    for(int i = 1; i < number+1; i++){
        scanf("%d%d", &value[i], &weight[i]);
    }

    int answer = knapsack(number, capacity, value, weight);

    printf("\nAnswer = %d\n", answer);



    return 0;
}
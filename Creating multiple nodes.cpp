//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 17

#include <iostream>
using namespace std;

class Node{
    public : 
    int val;
    Node *next;

    // Constructor to initialize node

    Node(int data){
        val = data;
        next = NULL;
    }

};


int main(){
    // Creating 3 nodes
    Node* n1 = new Node(11);
    Node* n2 = new Node(04);
    Node* n3 = new Node(6);

    //link nodes together
    n1->next = n2; // 1 --> 2
    n2->next = n3; // 2 --> 3
    //n3-> is null

    //Print linked list
    Node *temp = n1; //Start from head
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;

    return 0;
}

/*
Sample Output: 
11 4 6 
*/


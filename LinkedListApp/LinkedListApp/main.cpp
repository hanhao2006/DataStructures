//
//  main.cpp
//  LinkedListApp
//
//  Created by Hao Han on 2021-03-13.
//  Copyright © 2021 HaoHan. All rights reserved.
//

#include <iostream>
using namespace std;


class Node{
private:
    int data;
    Node* next;
public:
    //=====Construtor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    
    // getting and setting
    int getData(){
        return this->data;
    }
    Node getNext(){
        return *this->next;
    }
    void setData(int data){
        this->data = data;
    }
    void setNext(Node *next){
        this->next = next;
    }
};


class LinkedList{
private:
    Node *head;
    int count;
public:
    //=====Construtor
    LinkedList(){
        this->head = NULL;
        this->count = 0;
    }
    
    LinkedList(Node* node){
        this->head = node;
        this->count = 1;
    }
    
    // getting and setting
    int getCount(){
        return this->count;
    }
    Node* getHead(){
        return this->head;
    }
    void setCount(int count){
        this->count = count;
    }
    void setHead(Node *head){
        this->head = head;
    }
    
    // adds the given new node at the start of the list
    // the complexity is o(1) operation
    void AddFirst(Node* node){
        node->setNext(this->head);
        this->head = node;
        this->count++;
    }
    
    //adds a new node containing the int data at the start of the list
    // the complexity is o(1) operation
    void AddFirst(int data){
        Node* node = new Node(data);
        this->AddFirst(node);
    }
    
    void AddLast(Node* node){
        if(this->head == NULL){
            this->AddFirst(node);
        }else{
            
        }
    }
};

int main(int argc, const char * argv[]) {

    
   
     return 0;
   

}

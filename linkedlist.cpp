#include <iostream>
using namespace std;
class linkedlist{
    struct Node{
        int item;
        Node*next;
    };
    Node*first;
    Node*last;
    int length;
public:
    linkedlsit(){
    first=last=Null;
    length=0
    }
    bool isempty()
    {
        return length==0;
    }
    void insertfirst(int elemnt)
    {
        Node*newNode= new Node;
        newNode->=Null;
    }
    if (length==0)
    {
        first=last=newNode;
        newNode->next=Null;
    }
    else{
        newNode->next=first;
        first=newNode;
    }
    length++
}

void insertlast(int element) {
        Node*newNode= new Node;
        newNode->=Null;
    }
    if (length==0)
    {
        first=last=newNode;
        newNode->next=Null;
    }
    else{


    }
};

int main(){}

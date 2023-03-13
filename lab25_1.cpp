#include<iostream>
using namespace std;


class Node{
    public:
    	int data;
    	Node *next;
    	~Node();
};

class List{
	public:
		Node *root;
		int size;
		void show();
		void append(int);
		void insert(int,int);
		void remove(int);
};

Node::~Node(){
    cout << data << " was deleted.\n";
}

void List::insert(int d,int idx){	
	Node *n = new Node;
	n->data = d;
	
	if(idx == 0){
		n->next = root;
		root = n;
		return;
	}
	Node *current = root;
	for(int i = 0; i < idx-1;i++){
		current = current->next;
	}
	n->next = current->next;
	current->next = n;	
	size++;
}

void List::show(){
	Node *current = root;
	cout << current->data << " ";	
	while(current->next){
		current = current->next;
		cout << current->data << " ";
	}	
}

void List::append(int d){	
	Node *n = new Node;
	n->data = d; n->next = NULL;
	if(root == NULL) root = n;
	else{
		Node *current = root;
		while(current->next){
			current = current->next;
		}
		current->next = n;
	}
	size++;
}

//Write List::remove() here

void List::remove(int d){ //d=ตำแหน่ง
    Node *n=new Node;
    n->data=d;
    if(d==0){   //1st 
        Node *temp=root;
        root=root->next;
        delete temp;
    }
    else if(d==size-1){ //last
        Node *current = root;
        Node *p;
        while(current->next)
        {
            if(current->next->next==NULL)    p=current->next;
            current=current->next;
        }
        p->next=NULL;
        delete current;
    }else{
        Node *current = root;
        for(int i=0;i<d-1;i++)
        {
            current=current->next;
        }
        Node *p=current->next;
        current->next=current->next->next;
        delete p;
    }
    size--; 
}


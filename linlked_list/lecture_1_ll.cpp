#include<iostream>
using namespace std;
class Node{
 public:
      int val;
      Node *next;

      Node(int val){
        this->next=NULL;
        this->val =val;
      }
};
//  void display(Node *head){
//     Node *temp= head;
//     while(temp!=NULL){
//         cout<<temp->val<<endl;
//         temp = temp->next;
//     }

 //}

 void display2(Node *head){
    Node *temp= head;
    if(temp==NULL) return;
        cout<<temp->val<<endl;
        display2(temp =temp->next);
    
}
     void  insertAtEnd(Node *head,int val){
   
      Node *t  =new Node(val);
      while(head->next!=NULL){
       
        
        head = head->next;
      }
      
      head->next= t;
     }

     int size(Node *head){
        int size=0;
       while(head!=NULL){
         
        size++;
         head = head->next;

       }
        return size;
      
     }



int main(){
    
   // PRINT ALL ELEMENT BY WHILE LOOP
    
   /* Node a(1);
    Node b(2);
    Node c(3);
    Node d(4);
    Node e(5);
    Node f(6);

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;

    cout<<a.val<<endl;
    cout<<b.val<<endl;
    cout<<c.val<<endl;
    cout<<d.val<<endl;
    cout<<e.val<<endl;
    cout<<f.val<<endl;


    Node temp = a;
    while(temp.next!=NULL){
        cout<<temp.val<<endl;

        temp = *(temp.next);

    }
   /*  PRINT ALL ELEMENT BY WHILE LOOP

    Node *a= new Node(1);
    Node *b= new Node(2);
    Node *c= new Node(3);
    Node *d= new Node(4);
    Node *e= new Node(5);
    Node *f= new Node(6);
    Node *g= new Node(7);

     a->next = b;
     b->next = c;
     c->next = d;
     d->next = e;
     e->next = f;
     f->next = g;

     Node *temp =a;
    int n=0;
     while(temp!= NULL){
        // cout<<temp->val<<endl;
        cout<<n;
       temp = temp->next;
       n++;
     }
    */
      
    //*************************DISPLAY METHOD*******************

    Node *a= new Node(1);
    Node *b= new Node(2);
    Node *c= new Node(3);
    Node *d= new Node(4);
    Node *e= new Node(5);
    Node *f= new Node(6);
    Node *g= new Node(7);
   
   
     a->next = b;
     b->next = c;
     c->next = d;
     d->next = e;
     e->next = f;
     f->next = g;
    //display(a);
   // display2(a);
  insertAtEnd(a,8);
  display2(a);
  insertAtEnd(a,9);
  display2(a);
  cout<<endl;

  cout<<size(a);
}
   

    
     
     
    


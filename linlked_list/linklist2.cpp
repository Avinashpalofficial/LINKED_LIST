#include<iostream>
using namespace std;
   class Node{
     public:
        int val;
        Node *next;
        Node(int val){
            this->val=val;
            this->next=NULL;
           // this->next=next;
        } 
   };
      void display(Node *head){
              
              Node *temp= head;
              while(temp!=NULL){
                   
                   cout<<temp->val<<endl;
                   temp = temp->next;           

              }
      }

      int size(Node *head){
              
              Node *temp= head;
              int s=0;
              while(temp!=NULL){
                     s++; 
                  
                   temp = temp->next;           

              }
              return s;
      }

       void display2(Node *head){
         Node *temp =head;
            if(temp==NULL)  return;

            cout<<temp->val<<endl;
           display2(temp = temp->next);

       
       }
       

//  void display3(Node *temp){
//          //Node *temp =head;
//             if(temp==NULL)  return;

//            display3( temp->next);
//             cout<<temp->val<<endl;

//        }

     void insertAtEnd(Node *head,int val){

      Node *t= new Node(val);
      while(head->next!=NULL){
         head = head->next;
      }
         head->next=t;

     }

int main(){
             
           Node *a = new Node(2);
           Node *b = new Node(6);
           Node *c = new Node(5);
           Node *d = new Node(4);
           Node *e = new Node(3);
          // Node *temp=  new Node(30);

           a->next =b;
           b->next =c;
           c->next =d;
           d->next =e;
         //   display(a);
         insertAtEnd(a,43);
         //   display(a);

          // cout<<size(a);

display2(a);
      // display3(a);
      //display4(a);
  }      
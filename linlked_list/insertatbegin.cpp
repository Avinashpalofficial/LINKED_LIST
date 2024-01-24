#include<iostream>
using namespace std;
 class Node{
    public:
      int val;
      Node *next;
       
       Node(int val){
       this->val=val;
      // this->next=next;
       this->next=NULL;

       }

 };
   class linkedlist{
        public:
          Node *head;
          Node *tail;
          int size;

          linkedlist(){
           head=tail=NULL;
           size=0;
          }

    void  insertAtEnd(int val){
           Node *temp = new Node(val);

           if(size==0) head=tail=temp;

           else{
               tail->next=temp;
               tail=temp;
           }
           size++;    

      }

       void  insertAtBegining(int val){
           Node *temp = new Node(val);

           if(size==0) head=tail=temp;

           else{
              temp->next=head;
               head=temp;
           }
           size++;    

      }
         void display(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp= temp->next;
        }
        cout<<endl;
    }
          


       
   };
int main(){
    linkedlist ll;

    ll.insertAtEnd(12);
   ll.display();
    ll.insertAtEnd(13);
    ll.display();
    
   ll.insertAtBegining(2);          
    ll.insertAtBegining(3);
    ll.insertAtBegining(4);
    ll.display();


    








}
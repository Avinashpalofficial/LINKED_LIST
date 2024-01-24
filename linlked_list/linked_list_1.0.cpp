#include<iostream>
using namespace std;
 class Node{
    public:
         int val;
         Node* next;
         Node(int val){
            this->val= val;
            this->next=NULL;
         }
 };
   class linkedlist{
    public:
     Node *head;
     Node *tail;
     int size;
     linkedlist(){
        head = tail = NULL;
        size=0;

     }     
   void insertAtEnd(int val){
       Node *temp = new Node(val);
      if(size==0) head =tail =temp;
      else{
        tail->next= temp;
        tail = temp;
      }
      size++;
   }
   void insertAtBegining(int val){
      Node *temp = new Node(val);
      if(size==0) head=tail=temp;
      else{
        temp->next =  head;
         head= temp;
      }
      size++;
   }
      void insertAtHead(int val){
         Node *temp = new Node(val);
         if(size==0) head=tail=temp;
         else{
            temp->next =head;
            head =temp;
         }
         size++;
      }
      void insertATail(int val){
         Node *temp = new Node(val);
         if(size==0) head =tail=temp;
         else{
            tail->next=temp;
            tail= temp;
         }
         size++;
      }
      void insertAtIndex(int idx,int val){
          if(idx<0 || idx>size) cout<<"invalid";
         else if(idx==0) insertAtHead(val);
         else if(idx==size) insertATail(val);
         else {
         Node *temp = head;
         Node *t =  new Node(val);
         for(int i=1;i<=idx-1;i++){
              temp = temp->next;

         }
                t->next=temp->next;
                temp->next=t; 
         }
         size++; 
                                                
      }
     int GetAtIdx(int idx){
         if(idx<0 || idx>size) {
         cout<<"invlid"<<endl;
         return -1;

         }
         else if(idx==0)  return head->val;
         else if(idx==size-1) return  tail->val;
         else{
            Node *temp = head;
            for(int i=1; i<=idx;i++){
              temp =temp->next;
            }
             
            return temp->val;
         }
         
      }
      void  DeleteAtHead(){
         if(size==0) {
         cout<<"invlaid";
         return;

         }
         
          head  =head->next ;
         
        size--;
        cout<<endl;
      }

      void deleteAtTail(){
         if(size==0){
            cout<<"invlaid";
            return;
         }
         Node *temp=head;
         while((temp->next)!=tail){
            temp = temp->next;

         }
         temp->next=NULL;
         tail=temp;
         size--;

      }
       

   void display(){
    Node *temp= head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp= temp->next;
    }
    cout<<endl;
   }
    
   
   };
int main(){
    linkedlist ll;
    ll.insertAtEnd(4);
    ll.display();
    ll.insertAtEnd(6);
    ll.display();
    ll.insertAtBegining(7);
    ll.display();
    ll.insertAtBegining(8);
    ll.display();

    ll.insertAtHead(3);
      ll.display();
     ll.insertATail(10);
      ll.display();


   ll.insertAtIndex(2,9);
   ll.display();
   cout<< ll.GetAtIdx(1)<<endl;
   ll.DeleteAtHead();
   ll.display();
   ll.deleteAtTail();
   ll.display();



}
#include<iostream>
using namespace std;
class Student {  //user define data type

public:
     string name ;
     int rno;
     float marks;
     Student(string name, int rno, float marks ){
        
        this->name=name;
        this->rno= rno;
        this->marks=marks;

    //    name =n;
    //    rno= r;

    //    marks = m;

     }


};

   void change(Student *s){
         s->name="harsh";

   }



int main(){

 Student *s = new Student("Avinash ",20,92);
    // s.name = "Avinash pal";
    // s.marks;
    // s.rno;
    cout<<s->name<<endl;
   // Student *ptr = &s;
  //(*ptr).name= "Akash";
       
      // ptr->name= "Akash";

        //cout<<s.name;

        change(s);
        cout<<s->name;
}

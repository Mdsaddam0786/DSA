// what is oops:object ek techniqe hai jiska use karke object ko real world se relate kar sake
// 2.Access Modifier:3 trh ke hote hain:by defoult private hota hai
// public
// private
// protected
// example
#include<iostream>
using namespace std;

class hero{
   //int health; jab koi property nahi hogi to ye ek bit ka size lega 
   //ek health property banaya hero class ka 

   public:
   char *name;
   int health;
 
//    parameter constructor
   // hero(int health){
   //  cout<<"this->"<< this <<endl;
   // this->health=health;
   // } 
   void print(){
    cout<<"health is "<<this->health<<endl;
    cout<<"name: "<<this->name<<" ";
    cout<<endl;

   }
   //copy cnstructor by defaulth rehta hai
//    hero(hero& temp){
//     this->health=temp.health;
//    }
   //agar ye constructor nahi banaye to ek default constructro banta hai o input ke saath
   //ye banane ke baad defalt wala delete ho jata hai khud
   //yahan ek seter banaya
   int sethealth(int h){  
    health=h;       
   }
  // yaha ek getter banaya
   int gethealth(){
    return health;
   }

 //    shadow copy and deep copy
 // deep copy
 hero(hero& temp){
    char *ch=new char[strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this->name=ch;
    cout<<"copy constructor called "<<endl;
    this->health=temp.health;

 }
 void setName(char name[]){
    strcpy(this->name,name);
 }

  

};

int main(){
    hero hero1;
   
 hero1.sethealth(12);

char name[7]="saddam";
hero1.setName(name);
hero1.print();
 hero hero2(hero1);
 hero2.print();
 








 /*
 hero r(70);
 r.print();

copy constructor
hero p(r);
p.print();*/ 





   /*  
     hero h2(10);
     h2.gethealth();
//yaha hum value set kar sakte hain setter se 
    // hero h1;
    // h1.sethealth(5);

    //yaha vlaue get kar sakte hain getter se
   cout<<h1.gethealth();
    // cout<<sizeof(h1);


    //static allocation
    hero saddam;
    saddam.sethealth(70);
    saddam.gethealth();
    // dynamic allocation

    hero *danish=new hero;
    danish->sethealth(60);
    danish->gethealth();
    */


};


#include<iostream>
using namespace std;
/*
// pillers of oops
// 1.Encapsulation
// ye ek class hai jiske andar functions and proogram ko hum wrap kar dete hain 
// fully Encapsulatede:ye private hota hai
// why:data hiding,security,code reusibility
class Student{
    string name;
    int age;
    int height;
    
    public:
    int getAge(){
        return this->age;
    }
};
int main(){

Student first;
cout<<"sab sahi chal raha hai"<<endl;

    return 0;

}*/


// Inheritance:
 type:
 single
 multiple
 multilavle
 hybrid


class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;

    }
    void setWeight(int w){
        this->weight=w;
    }

};
class Male:public Human{
    public:
    string color;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }

};



int main(){
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    cout<<object1.color<<endl;
    object1.setWeight(84);
    cout<<object1.weight<<endl;
        object1.sleep();


}

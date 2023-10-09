#include<iostream>
using namespace std;
/*
//Single level Inheritence

class Animal{
    public:
    int age;
    int weight;

    void speak(){
    
    cout<<"speaking "<<endl;

    }
};
class Dog:public Animal{
    
};


int main(){
    Dog d;
    d.speak();

}


//multi-level Inheritence

//multiple inheritence

class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"Barking "<<endl;

    }

};

class Human{
    public:
    string color;
    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }

};

//multiple Inheritence
class Hybrid:public Animal,public Human{

};

int main(){
    Hybrid obj1;
    obj1.speak();
    obj1.bark();

};

//Hierarchiacl Inheritence
class A{
    public:
    void func1(){
        cout<<"Inside functuionl 1 "<<endl;

    }
};

class B:public A{
    public:
    void func2(){
        cout<<"Inside functuionl 2 "<<endl;

    }
    
};

class C:public A{
    public:
    void func3(){
        cout<<"Inside functuionl 3 "<<endl;

    }
};

int main(){
    A object1;
    object1.func1();

    B object2;

    object2.func2();
    C object3;
    object3.func3();
}*/


//Hybrid:Combination of more than one type of inheritence
// Inheritence Ambiguity
class A{
    public:
    void func(){
        cout<<"I am A"<<endl;
    }
};
class B{
    public:
    void func(){
        cout<<"I am B"<<endl;
    }
};

class C: public A,public B{

};
int main(){
    C obj;
// scope resolution operator use karke ambiguity khatam kar sakte hain
    obj.A::func();
    return 0;
}

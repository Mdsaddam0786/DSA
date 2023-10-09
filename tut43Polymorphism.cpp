#include<iostream>
using namespace std;

//POLYMORPHISM:Ek thing multiple form me exist kare
// type:2
//  1.Copile(static)-etype:function overloading,operator overloading
//  2.Run-time(Dynamic polymorphism):

//Copile time function overloading
/*class A{
        public:
        void sayHello(){
            cout<<"Hello saddaam "<<endl;
        }

        int sayHello(char name){
            cout<<"Hello saddaam "<<endl;
            return 1;
        }
        void sayHello(string name){
            cout<<"Hello saddaam "<<endl;
        }
    };

    



int main(){
    A obj;
    obj.sayHello();
    return 0;

    

}

//operator overloading
class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator + (B &obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<"output"<<value2-value1<<endl;
        cout<<"hello ";
    }

    void operator()(){

        cout<<" mai bracket hu "<<this->a<<endl;
    }
    
};

int main(){
    B obj1, obj2;
    obj1.a=4;
    obj2.a=7;

    obj1 + obj2;
    obj1();

}*/

//Run-time polymorphism

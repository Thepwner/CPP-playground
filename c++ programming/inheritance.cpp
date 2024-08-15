
// hybrid
// multiple inheritance
// single inheritance

//Bjarne strouscoup - phd
/*
#include <iostream>

using namespace std;

class Bird{
    //access specifier
    private:
        int beak;

    protected:
        int beaks = 3 ;

    public:
        int weight;
        string color;
        int speed;
        int wing_span;
       
        void fly(){
            cout << "FLy FLy Fly" << endl;
        }

        void eat(){
            cout << "I eat bean" << endl;
        }
};

class Eagle : protected Bird {
    protected:
        int beaks = 3 ;
        int weight;
        string color;
        int speed;
        int wing_span;
       
        void fly(){
            cout << "FLy FLy Fly" << endl;
        }

        void eat(){
            cout << "I eat bean" << endl;
        }

    public:
        int claw_size;
        int flying_height;

        //default constructor
        Eagle(){
            
        }  

        //parameterized constructor  
        Eagle(int c, int f_h, int w, int s, string co , int b){
            claw_size = c;
            flying_height = f_h;
            weight = w;
            speed = s;
            color = co;
            beaks = b;
        }

        void eat(){
            cout << "I eat meat" << endl;
        }

        void beak_length(){
            cout << beaks << endl;
        }
};

class SubEagle: public Eagle{
    protected:
        int beaks = 3 ;
        int weight;
        string color;
        int speed;
        int wing_span;
       
        void fly(){
            cout << "FLy FLy Fly" << endl;
        }

        void eat(){
            cout << "I eat bean" << endl;
        }

    public:
        int claw_size;
        int flying_height;

        //default constructor
        // Eagle(){
            
        // }  

        //parameterized constructor  
        // Eagle(int c, int f_h, int w, int s, string co , int b){
        //     claw_size = c;
        //     flying_height = f_h;
        //     weight = w;
        //     speed = s;
        //     color = co;
        //     beaks = b;
        // }

        void eat(){
            cout << "I eat meat" << endl;
        }

        void beak_length(){
            cout << beaks << endl;
        }

        string continent ;


};

class Mom{
    public:
        string color_m;
        int height_m;
};

class Dad{
    public:
        string color_d;
        int height_d;
};

class Son: public Dad, public Mom{
    public:
        int height = (height_d+ height_m)/2;
};   


/*
    pytorch
        import pytorch 
        class Neural_Network

        class Neural(Neural_Network){
            function weight(){
                
            }   
        }

*/
/*
int main(){
    Eagle e1(4, 100, 40 , 50, "blue", 3);
    cout << e1.speed << endl;
    e1.beak_length();
    e1.fly();
    return 0;
}
*/
// C++ program to demonstrate the working of public inheritance
/*
#include <iostream>
using namespace std;

class Base {
   private:
    int pvt = 1;

   protected:
    int prot = 2;

   public:
    int pub = 3;

    // function to access private member
    int getPVT() {
        return pvt;
    }
};

class PublicDerived : public Base {
   public:
    // function to access protected member from Base
    int getProt() {
        return prot;
    }
};

int main() {
    PublicDerived object1;
    cout << "Private = " << object1.getPVT() << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.pub << endl;
    return 0;
}
*/


//Namespace 

#include <iostream>
#include <array>


// using namespace std;
using std::cout;
using std::endl;
using std::cin;


namespace Room1{
    int length;
}

namespace Room2{
    int length;
}

void count(){
    std::cout << " i have made cout" << std::endl;
}

// void distance(){

// }

using namespace Room1;
//:: Scope resolution operator
int main(){
    length = 10;
    Room2::length = 20;
    std::cout << "Print x" << std::endl;
    count();
}
/*
#include<iostream>

// Storage class
// Global variable  Local Variable Static variable

int glob = 10;

int count (int a){
    a = 11;
    glob = 11;
    return 0;
}

void timer(){
    static int time = 0;
    time++;
    std::cout << time <<std::endl;
}

int main () {
    //LOcal scope
    int a = 10;
    count(a);
    
    timer();
    timer();
    timer();

    // std::cout << a;
    // std::cout << glob ;
}
*/
/*
#include <iostream>

using namespace std;

enum Week { Sun , Mon , Tue, Wednes , Thurs};
            // 0 1 2 3 4 5
int main(){
    Week week1 = Mon;
    cout << week1 << endl;
}
*/

#include <iostream>
using namespace std;
/*
float volume(  float length,float height, float width){
    return height * length * width ;
}

float  area(float length, float width){
    return length  *  width ;
}

int main (){
    double height = 5, length = 8 , width = 2 ;
    cout << volume(length, height,width)<<endl;
    cout << area(length, width)<<endl;  
}
*/

//Constuctor
//Data Encapsulation
class Room{
    private:
        double length;
        double breadth;
        double height;

    public:
        Room(double l , double b , double h){
            length = l;
            breadth = b;
            height = h;
        }

        double volume(){
            return length * breadth * height;
        }

        double area(){
            return length * breadth;
        }

        void set(double l , double b, double h){
            length = l;
            breadth = b;
            height = h;
        }

        double get_height(){
            return height;
        }
};

/*
    class Bird:
        def __init__(self, height, breadth):
            self.jheig
*/
/*
class Pipe{
    public:
        int height;
        int width;
        int x_pos;
        int y_pos;

        void move_pipe(){
            x_pos--;
        }

        void calculate_collision(){

        }
};
*/

int main(){
    Room room1(8,5,2);
    // room1.length = 8;
    // room1.breadth = 2;
    // room1.height = 5;

    cout << room1.volume() << endl;
    cout << room1.area();

    Room room2(6,7,8);
    cout << "This is second " << endl;
    
    
    return 0;
}


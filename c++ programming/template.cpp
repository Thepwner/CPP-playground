#include<iostream>
#include <algorithm>
#include <vector>
#include <list>


//STL --> Standard Template Library 

//vector


/*
//Template
template <class T>

void add(T f_number, T s_number){
    using namespace std;
    cout << f_number + s_number << endl;
}

template <class W>

void swap( W *X, W *Y){
    W temp = 0;
    temp = *X;
    *X = *Y;
    *Y = temp;
}

// void add(float f_number, float s_number){
//     using namespace std;
//     cout << f_number + s_number << endl;
// }

// void add(double f_number, double s_number){
//     using namespace std;
//     cout << f_number + s_number << endl;
// }

int main(){
    add(3.4f, 4.5f);
    add(6,7);
    add(3.98,8.9);
    add('c','d');

    // int x = 10;
    // int y = 3;
    float x = 10.3;
    float y = 9.4;
    std::cout << "X & Y is " << x << " " << y << std::endl;
    swap(&x, &y);
    std::cout << "X & Y is " << x << " " << y << std::endl;
    
    reT>
    }
*/

using namespace std;
/*
template <class T>
class Calculator{
    private:
        T num1;
        T num2;

    public:
        Calculator(T n1, T n2){
            num1 = n1;
            num2 = n2;
        }      

        T add(){
            return (num1 + num2);
        }

};

int main(){
    Calculator <int> calc1(5,6);
    cout << calc1.add() << endl;

    Calculator <float> calc2(6.5,7.4);
    cout << calc2.add() << endl;
}

*/
void printVec(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout<< v[i]<<endl; 
    }
}

int main(){
    std::vector <int> v;
    v.push_back(10);
    v.push_back(12);
    v.push_back(45);

    printVec(v);

    v.pop_back();
    printVec(v);

    //Inserting value
    std::vector<int> :: iterator  itr = v.begin();
    itr = itr + 1;
    v.insert(itr, 7);
    cout << "\n" << endl;
    printVec(v);

}
#include <iostream>

using namespace std;

int area(int a){
    return a * a;
}

// int volume( int a){
//     return a * a * a;
// }


// int volume ( int a, int b){
//     return a * a * a + b * b * b; 
// }

//class
// constructor destructor 
// public friend private
// function

int main(){
    std::cout << "Hello this is my first program in c++" << std::endl;
    //Data Types
    //int(4) long() short(2) float double char , bool
    // unsigned signed
    // bool flag = true;
    // bool prime = false;
    // unsigned int num =434343;
    
    //if - else (conditional)
    // int a = 1;
    // char test = 'n';

    // if( test == 'y' || test == 'Y'){
    //     std::cout << " The test is true" << std::endl;
    // }
    // int day = 6;
    // switch(day){
    //     case 1:
    //         cout << "sunday" << endl;
    //         break;
    //     case 2:
    //         cout << "monday" << endl;
    //         break;
    //     case 3:
    //         cout << "tuesday" <<endl;
    //         break;
    //     default:
    //         cout << " number is invalid" << endl;
    //         break;
    // }

    //Loop
    // for( int i = 0; i < 10 ;i++ ){
    //     cout << i << endl;
    // }

    // int i = 0;
    // while(i < 4){
    //     cout << i << endl;
    //     i++;
    // }

    // int arr[] = {1,2,3,4,6,5};

    // for(int i = 0; i < 6; i++){
    //     cout << arr[i] << endl;
    // }

    // for( int a : arr){
    //     cout<< a << endl;
    // }

    //function overloading
    // cout << volume(3) << endl;
    // cout << volume(3,4) << endl;


    // cin taking inputs
    // int t;

    // array
    int n = 2;
    int arr[n];
    // for ( int data : arr){
    //     cin >> data;
    // }
    for(int i = 0 ; i < n; i++){
        cin >> arr[i]; 
    }
    // arr[2] ={2,3}
    for ( int out_data : arr)
        cout << area(out_data)<<endl;
    // < > <>
    // int a = 4, b = 5;
    // if(a <=> b){        
    // }
    
}

#include <iostream>

using namespace std;

void swap(int a, int b);
void swapa(int *a, int *b);
void swapb(int &a, int &b);

int main(){

    int a = 100;
    int b = 200;

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    swap(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    swapa(&a, &b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    swapb(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    return 0;
}

void swap(int a, int b){

    int temp;
    temp = a;
    a = b;
    b = temp;
    return;
}
void swapa(int *a, int *b){
    
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
    return;

}
void swapb(int &a, int &b){

    int temp;

    temp = a;
    a = b;
    b = temp;

    return;
}
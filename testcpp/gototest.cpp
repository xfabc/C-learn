#include <iostream>

using namespace std;

int main(){

    int a = 10;

    LOOP:do{
        if(a == 16){
            a = a + 1;
            goto LOOP;
        }
        cout << "a的值是：" << a << endl;
        a = a + 1;
    }while(a < 20);

    return 0;
}
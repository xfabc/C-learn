#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;

    do
    {
        if(a == 15){
            a = a +1;
            continue;
        }
        cout << "a的值是：" << a << endl;
        a = a + 1;
    } while (a < 20);
    
    return 0;
}

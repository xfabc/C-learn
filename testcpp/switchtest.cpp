#include <iostream>

using namespace std;

int main(){
    int day = 4;
    switch (day)
    {
    case 1:
        std::cout << "Monday" << std::endl;
        break;
    
    default:
        std::cout <<"Invalid day" <<std::endl;
        break;
    }

    return 0;
}
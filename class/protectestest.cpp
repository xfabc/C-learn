/*
protected（受保护）成员在派生类（即子类）中是可访问的。
*/

#include <iostream>

using namespace std;

class Box{
    protected:
        double width;
};

// 派生子类
class SmallBox:Box{
    public:
        void setSmallWidth(double wid);
        double getSmallWidth(void);
};

//子类成员函数
void SmallBox::setSmallWidth(double wid){

    width = wid;
}

double SmallBox::getSmallWidth(){
    return width;
}

int main(){

    SmallBox box;

    box.setSmallWidth(5.00);

    cout << "width of box = " << box.getSmallWidth() << endl;

    return 0;
}
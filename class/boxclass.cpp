#include <iostream>

using namespace std;

class Box
{
    public:
        //定义公有属性
        double length;
        double breadth;
        double height;

        //声明成员函数
        double get(void);  //获得体积
        void set(double len, double bre, double hei);  //设置属性值
};

double Box::get(void)
{
    return length*breadth*height;
}

void Box::set(double len, double bre, double hei)
{
    length = len;
    breadth = bre;
    height = hei;
}

int main(){

    Box box1;
    Box box2;
    Box box3;

    double volume;   //存储体积

    box1.length = 10;
    box1.breadth = 12;
    box1.height = 13;

    cout << "box1 的体积 = " << box1.get() << endl;

    box2.set(10, 12, 13);
    cout << "box3 的体积 = " << box2.get() << endl;

    box3.length = 12;
    box3.breadth = 13;
    box3.height = 10;
    cout << "box3 的体积 = " << box3.get() << endl;

}

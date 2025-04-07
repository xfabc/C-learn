/*
析构函数的名称与类的名称是完全相同的，只是在前面加了个波浪号（~）作为前缀，
它不会返回任何值，也不能带有任何参数。
析构函数有助于在跳出程序（比如关闭文件、释放内存等）前释放资源。
*/

#include <iostream>

using namespace std;

class XiCreatFun
{
private:
    double length;
public:
    void setLength(double len);
    XiCreatFun();
    ~XiCreatFun();
};

XiCreatFun::XiCreatFun(){
    cout << "Object Creat" << endl;
}
void XiCreatFun::setLength(double len)
{
    length = len;
}

XiCreatFun::~XiCreatFun()
{
    cout << "Object deleted" << endl;
}

int main(){

    XiCreatFun xicreatfun;

    xicreatfun.setLength(10.0);


    return 0;
}

#include <iostream>

using namespace std;

class Line{
    public:
        void setLength(double len);
        double getLength(void);
        Line();
    private:
        double length;
};

Line::Line(void){
    cout << "Object is being created" << endl;
}

void Line::setLength(double len){
    length = len;
}

double Line::getLength(void){
    return length;
}

int main(){
    Line line;

    line.setLength(6.6);
    cout << "line`s length = " << line.getLength() << endl;

    return 0;
}
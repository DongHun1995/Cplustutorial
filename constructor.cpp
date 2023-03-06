#include <iostream>
using namespace std;

// 클래스 선언
class Circle
{
public:
    int radius;
    Circle();
    Circle(int r);
    double getArea();
};

// 생성자 정의
Circle::Circle()
{
    radius = 1;
    cout << "반지름" << radius << "원 생성" << endl;
}

Circle::Circle(int r)
{
    radius = r;
    cout << "반지름" << radius << "원 생성" << endl;
}

// 클래스 정의
double Circle::getArea()
{
    return 3.14 * radius * radius;
}

int main()
{
    Circle donut;
    double area = donut.getArea();
    cout << "donut의 면적은 " << area << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "pizza 면적은" << area << endl;
}

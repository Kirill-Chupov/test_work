#include "geometry.h"


Circle::Circle(Point center, double radius)
    : center_{ center }
    , radius_{ radius } {
}

void Circle::Draw() const {
    std::cout << "Draw: Circle" << std::endl;
}

Triangle::Triangle(Point a, Point b, Point c)
    : a_{ a }
    , b_{ b }
    , c_{ c } {
}

void Triangle::Draw() const {
    std::cout << "Draw: Triangle" << std::endl;
}

Rectangle::Rectangle(double width, double height)
    : width_{ width }
    , height_{ height } {
}

void Rectangle::Draw() const {
    std::cout << "Draw: Rectangle" << std::endl;
}
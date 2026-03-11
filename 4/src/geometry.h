#pragma
#include <iostream>
#include <string>
#include <boost/archive/polymorphic_iarchive.hpp>
#include <boost/archive/polymorphic_binary_oarchive.hpp>
#include <boost/serialization/export.hpp>



struct Point {
	double x = 0;
	double y = 0;
};

class Shape {
public:
	virtual ~Shape() = default;
	virtual void Draw() const = 0;
};

class Circle : public Shape {
public:
	Circle(Point center, double radius);

	void Draw() const override;

private:
	Point center_;
	double radius_;
};

class Triangle : public Shape {
public:
	Triangle(Point a, Point b, Point c);

	void Draw() const override;

private:
	Point a_;
	Point b_;
	Point c_;
};

class Rectangle : public Shape {
public:
	Rectangle(double width, double height);

	void Draw() const override ;

private:
	double width_;
	double height_;
};

namespace boost {
    namespace serialization {
        template<class Archive>
        void serialize(Archive& ar, Point& p, [[maybe_unused]] const unsigned int version) {
            ar & p.x;
            ar & p.y;
        }

        template<class Archive>
        void serialize(Archive& ar, Circle& circle, [[maybe_unused]] const unsigned int version){
            //Реализовать сериализации через DTO объекты
        }

        template<class Archive>
        void serialize(Archive& ar, Triangle& triangle, [[maybe_unused]] const unsigned int version){
            //Реализовать сериализации через DTO объекты
        }

        template<class Archive>
        void serialize(Archive& ar, Rectangle& rectangle, [[maybe_unused]] const unsigned int version){
            //Реализовать сериализации через DTO объекты
        }
    } // namespace serialization
} // namespace boost
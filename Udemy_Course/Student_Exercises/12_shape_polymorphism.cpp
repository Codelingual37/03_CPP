#include <iostream>
using namespace std;

class Shape
{
    public:
        virtual double    area() = 0;
};

class Rectangle : public Shape
{
    private:
        int length = 1;
        int height = 1;
    public:
        Rectangle()
        {
            this->length = length;
            this->height = height;
        }
        Rectangle(int l, int h)
        {
            setDimensions(l, h);
        }
        void    setDimensions(int l, int h)
        {
            length = l;
            height = h;
        }
        double     area()
        {
            int area;

            area = length * height;
            return (area);
        }
};

class Circle : public Shape
{
    private:
        int radius = 1;
    public:
        Circle()
        {
            this->radius = radius;
        }
        Circle(int r)
        {
            setRadius(r);
        }
        void    setRadius(int r)
        {
            radius = r;
        }
        double    area()
        {
            int area;

            area = 3.14 * radius * radius;
            return (area);
        }
};

int main()
{
    int length;
    int height;
    int radius;
    Shape *shape;

    cout<<"Please enter the length and height of the rectagle: ";
    cin>>length>>height;
    shape = new Rectangle(length, height);
    cout<<"The area of the rectangle is: "<<shape->area()<<endl;
    cout<<"Please enter the radius of the circle: ";
    cin>>radius;
    shape = new Circle(radius);
    cout<<"The area of the circle is: "<<shape->area()<<endl;
}
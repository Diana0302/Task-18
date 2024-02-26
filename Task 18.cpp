#include <iostream>
template<typename T>
class Shape {
public:
    virtual double Surface() {
        return 1;
    }

    ~Shape() {}
};

template <typename T>

class Circle : public Shape <T>{
private:
    T a;

public:
    Circle(T r) {
        a = r;
    }

    double Surface()  override {
        return 3.14 * a * a;
    }
};
template <typename T>
class Rectangle : public Shape<T> {
private:
    T length;
    T width;

public:
    Rectangle(T l, T w)
    {
        length = l;
        width = w;
    }

    T Surface()  override {
        return length * width;
    }
};

template<typename T>
void print(Shape<T>* ptr) {
    std::cout << "Area:  " << ptr->Surface() << std::endl;
}

int main()
{
    int a;
    std::cout << "Enter the int radius: ";
    std::cin >> a;
    int b;
    std::cout << "Enter rectangle's first side(for int):  ";
    std::cin >> b;
    int c;
    std::cout << "Enter rectangle's second side(for int):  ";
    std::cin >> c;
    Shape<int>* ptr = new Circle<int>(a);
    std::cout << "Circle's shape is : ";
    print(ptr);
    delete ptr;
    ptr = nullptr;
    double a1;
    std::cout << "Enter the double radius: ";
    std::cin >> a1;
    double b1;
    std::cout << "Enter rectangle's first side(for double): ";
    std::cin >> b1;
    double c1;
    std::cout << "Enter rectangle's second side(for double): ";
    std::cin >> c1;
    Shape<double>* ptr1 = new Rectangle<double>(b, c);
    std::cout << "Rectangle's shape is:  ";
    print(ptr1);
    delete ptr1;
    ptr1 = nullptr;
    return 0;
}
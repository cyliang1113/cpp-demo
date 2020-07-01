//
// Created by Youliang.Chen on 2020/7/1.
//

#include "demo02.h"
#include <iostream>

/**
 * 形状
 */
class Shape{
public:
    virtual void getArea(){ //虚函数 动态绑定 常规的多态实现
        std::cout << "Shape Area" << std::endl;
    }

    void getColor(){ //非虚函数 静态绑定 没法多态
        std::cout << "Shape Color" << std::endl;
    }
};

/**
 * 正方形
 */
class Square : public Shape{
public:
    void getArea(){
        std::cout << "Square Area" << std::endl;
    }

    void getColor(){
        std::cout << "Square Color" << std::endl;
    }
};


class Circle : public Shape{
public:
    void getArea(){
        std::cout << "Circle Area" << std::endl;
    }

    void getColor(){
        std::cout << "Circle Color" << std::endl;
    }
};

/**
 * 多态
 */
void duotai_demo01(){
    Shape shape0;
    Square square;
    Circle circle;
    Shape *shape1 = &square;
    Shape *shape2 = &circle;
    shape0.getArea();
    shape0.getColor();
    shape1->getArea();
    shape1->getColor();
    shape2->getArea();
    shape2->getColor();
}






















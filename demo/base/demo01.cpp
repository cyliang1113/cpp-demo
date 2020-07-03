//
// Created by Youliang.Chen on 2020/6/30.
//

#include "demo01.h"
#include <iostream>
#include <string>

void demo_reference() {
    int a = 100;
    int &b = a; // 引用 变量的另一个名字, 操作引用等同于操作变量
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "a addr: " << &a << std::endl;
    std::cout << "b addr: " << &b << std::endl;
    std::string bb = "111";
}
int demo_reference_02_a = 111;

int &demo_reference_02_get_value() {
//    int a = 100;
    int &b = demo_reference_02_a;
    std::cout << "b: " << b << std::endl;
    printf("b addr: %p\n", &b);
    return b;
}

void demo_reference_02(){
    int x = demo_reference_02_get_value();
    int &y = demo_reference_02_get_value();
    std::cout << "x: " << x << std::endl;
    printf("x addr: %p\n", &x);
    printf("y addr: %p\n", &y);
}


void demo_reference_03(){
    int a = 12;
    std::cout << "a: " << a << std::endl;
    const int &b = a;
    std::cout << "b: " << b << std::endl;
    a = 23;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

}
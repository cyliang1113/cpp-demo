//
// Created by Youliang.Chen on 2020/6/30.
//

#include "demo01.h"
#include <iostream>
#include <string>

void demo_reference() {
    int a = 100;
    int &b = a; // 引用
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "a addr: " << &a << std::endl;
    std::cout << "b addr: " << &b << std::endl;
    std::string bb = "111";
}

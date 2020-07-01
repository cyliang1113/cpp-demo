//
// Created by Youliang.Chen on 2020/7/1.
//

#include "demo03.h"
#include <iostream>

namespace ns_new_demo{
    class Person{
    public:
        Person(){
            name = "Tom";
        }

        ~Person() {
            std::cout << "~Person" << std::endl;
        }

        char *name;

    };
}

using namespace ns_new_demo;

void new_demo(){

    Person *person = new Person(); //会调用构造方法, 会初始化了值

    Person *person2 = (Person *) malloc(sizeof(Person)); //只分配了内存空间

    Person *person3 = new Person();

    std::cout << "person addr: " << person << std::endl;
    std::cout << "person2 addr: " << person2 << std::endl;
    std::cout << "person3 addr: " << person3 << std::endl;

    printf("person name: %s\n", person->name);
    printf("person2 name: %s\n", person2->name);

    int arr[2] = {1, 9}; //栈中
    int *arr2 = new int[2]; //堆中
    std::cout << "arr addr: " << arr << std::endl;
    std::cout << "arr2 addr: " << arr2 << std::endl;

}


void delete_demo(){
    Person *person = new Person(); //会调用构造方法, 会初始化了值
    Person *person2 = (Person *) malloc(sizeof(Person)); //只分配了内存空间
    std::cout << "person addr: " << person << std::endl;
    std::cout << "person2 addr: " << person2 << std::endl;
    printf("person name: %s\n", person->name);
    printf("person2 name: %s\n", person2->name);

    delete person; //调用析构方法
    free(person2);

    std::cout << "person addr: " << person << std::endl;
    std::cout << "person2 addr: " << person2 << std::endl;
    printf("person name: %s\n", person->name);
    printf("person2 name: %s\n", person2->name);

    person->name = "JJ";
    person2->name = "KK";

    std::cout << "person addr: " << person << std::endl;
    std::cout << "person2 addr: " << person2 << std::endl;
    printf("person name: %s\n", person->name);
    printf("person2 name: %s\n", person2->name);

}
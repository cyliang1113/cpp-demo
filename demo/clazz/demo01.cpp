//
// Created by Youliang.Chen on 2020/6/30.
//

#include "demo01.h"

#include <iostream>

namespace ns_constructor_demo{
    class Person{
    private:
        int age;

    public:
        char *name;
        int height;

    public:
        Person(){};

        Person(int age_v, char *name_v) {
            age = age_v;
            name = name_v;
        };
        Person(int age_v, char *name_v, int height_v) {
            age = age_v;
            name = name_v;
            height = height_v;
        };
        ~Person() {
            std::cout << "~Person()"  << std::endl;
        }

        int getAge(){
            return age;
        }

        int setAge(int age_v){
            age = age_v;
        }

//        friend void printName(Person person);

    };
}

using namespace ns_constructor_demo;


/**
 * 构造方法
 */
void constructor_demo() {
    Person person;
    person.name = "Tom";
    person.setAge(25);
    std::cout << "person name: " << person.name << std::endl;
    std::cout << "person age: " << person.getAge() << std::endl;
    std::cout << "person getAge(): " << person.getAge() << std::endl;
    person.setAge(66);
    std::cout << "person getAge(): " << person.getAge() << std::endl;


    Person person2(33, "Jack");
    std::cout << "person2 name: " << person2.name << std::endl;
    std::cout << "person2 getAge(): " << person2.getAge() << std::endl;
}

/**
 * 拷贝构造
 */
void copy_constructor_demo() {
    char *name = "Jack";
    printf("name addr: %p\n", name);
    Person person2(33, name, 175);
    std::cout << "person2 name: " << person2.name << std::endl;
    printf("person2 name addr: %p\n", person2.name);
    std::cout << "person2 height: " << person2.height << std::endl;
    printf("person2 height addr: %p\n", &person2.height);

    Person person3(person2); //拷贝构造
    std::cout << "person3 name: " << person3.name << std::endl;
    printf("person3 name addr: %p\n", person3.name);
    std::cout << "person3 height: " << person3.height << std::endl;
    std::cout << "person3 height addr: " << &person3.height << std::endl;
}


void class_test03() {
    char *name = "Jack";
    printf("name addr: %p\n", name);
    int aaa = 1000;
    printf("aaa addr: %p\n", &aaa);
    Person person(33, name, 175); //在栈中
    std::cout << "person addr: " << &person << std::endl;
}




#ifndef ROBOT_HPP
#define ROBOT_HPP

#include <iostream>
using namespace std;

class Robot {
public:
    Robot(string name, int version_number);

    void say_hi();
    void init_hardware();
    void print_info();

private:
    string name;
    int version_number;
    double temperature;
};

#endif
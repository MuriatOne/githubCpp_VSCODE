
#include <iostream>
#include "robot.hpp"

int main()
{
    Robot robot1("R2D2", 4);
    Robot robot2("C3PO", 42);

    robot1.print_info();
    robot2.print_info();
    return 0;
}
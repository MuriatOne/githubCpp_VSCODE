#include "robot.hpp"

Robot::Robot(string name1, int version_number1)
{
    this->name = name1;
    this->version_number = version_number1;
    this->temperature = 25.7;
}

void Robot::say_hi()
{
    cout << "Bonjour, je m'appelle " << name << endl;
}

void Robot::init_hardware()
{
    cout << "Initialisation de l'electronique" << endl;
}

void Robot::print_info()
{
    say_hi();
    cout << "Numero de version: " << version_number << endl;
    cout << "Temperature: " << temperature << endl;
}
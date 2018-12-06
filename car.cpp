#include "car.h"
#include <stdbool.h>

struct ImplementationCar
{
  enum CarType car_type;
  enum Color car_color;
  bool is_avaible;
  int speed;
  double acceleration_rate;
  double fill_level;
};

void init()
{

}
enum CarType get_type(Car car)
{
  return JEEP;
}

Car get_car(CarType car_type)
{
  return 0;
}

int get_speed(Car car)
{
  return 0;
}

enum Color get_color(Car car)
{
  return BLUE;
}

double get_fill_level(Car car)
{
  return 0;
}

double get_acceleration_rate(Car car)
{
  return 0;
}

void set_acceleration_rate(Car car, double acceleration_rate)
{

}

void accelerate(Car car)
{

}

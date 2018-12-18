#include "car.h"
#include <stdbool.h>

#define MAX_CARS 6
struct CarImplementation
{
  enum Color color;
  enum Type type;
  double speed;
  int max_speed;
  double fill_level;
  double acceleration_rate;
  double lowest_acceleration_rate;
  double highest_acceleration_rate;
  bool is_available;

};

struct CarImplementation aixam{RED,AIXAM,0,45,16.0,0.0,-8.0,1.0,true};
struct CarImplementation jeep1{SILVER,JEEP,0,196,80.0,0.0,-8.0,3.14,true};
struct CarImplementation jeep2{BLACK,JEEP,0,196,80.0,0.0,-8.0,3.14,true};
struct CarImplementation fiat_multipla1{GREEN,FIAT_MULTIPLA,0,170,65.0,0.0,-8.0,2.26,true};
struct CarImplementation fiat_multipla2{BLUE,FIAT_MULTIPLA,0,170,65.0,0.0,-8.0,2.26,true};
struct CarImplementation fiat_multipla3{ORANGE,FIAT_MULTIPLA,0,170,65.0,0.0,-8.0,2.26,true};

Car car_park[MAX_CARS] = {&aixam, &jeep1, &jeep2, &fiat_multipla1, &fiat_multipla2, &fiat_multipla3};
void init()
{
  for (int i = 0; i < MAX_CARS; i++)
  {
    car_park[i]->acceleration_rate = 0;
    car_park[i]->is_available = true;
    car_park[i]->speed = 0;

  }
}
Car get_car(enum Type type)
{
  for (int i = 0; i < MAX_CARS; i++)
  {
    if (car_park[i]->type==type&&car_park[i]->is_available==true)
    {
      car_park[i]->is_available = false;
      return car_park[i];
    }
  }
  return 0;
}
int get_speed(Car car){
  if (car->speed - (int)car->speed > 0.5)
  {
    car->speed ++;
  }
  return car->speed;
}
enum Color get_color(Car car)
{
  return car->color;
}
double get_fill_level(Car car)
{
  return car->fill_level;
}
enum Type get_type(Car car)
{
  return car->type;
}
double get_acceleration_rate(Car car)
{
  return car->acceleration_rate;
}
void accelerate(Car car)
{
  double speed = car->acceleration_rate * 3.6;
  if (car->max_speed >= speed + car->speed)
  {
    car->speed += speed;
  }
  else
  {
    car->speed = car->max_speed;
  }
}
void set_acceleration_rate(Car car,double acceleration_rate)
{
  if (acceleration_rate > car->highest_acceleration_rate)
  {
    car->acceleration_rate = car->highest_acceleration_rate;
  }
  else if (acceleration_rate < car->lowest_acceleration_rate)
  {
    car->acceleration_rate = car->lowest_acceleration_rate;
  }
  else
  {
    car->acceleration_rate = acceleration_rate;
  }
}

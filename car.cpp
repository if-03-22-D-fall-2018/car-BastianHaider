#include "car.h"
#include <stdbool.h>

#define NUMBER_OF_CARS 6
struct ImplementationCar
{
  enum CarType car_type;
  enum Color car_color;
  bool is_avaible;
  int max_speed;
  double fill_level;
  double acceleration_rate;
  int speed;
  double lowest_acceleration_rate;
  double highest_acceleration_rate;
};
struct ImplementationCar aixam1={AIXAM,RED,false,45,16.0,0.0,0,-8.0,1.0};
struct ImplementationCar fiat_multipla1={FIAT_MULTIPLA,BLACK,false,170,65.0,0.0,0,-8.0,2.26};
struct ImplementationCar jeep1={JEEP,SILVER,false,196,80.0,0.0,0,-8.0,3.14};
struct ImplementationCar aixam2={AIXAM,ORANGE,false,45,16.0,0.0,0,-8.0,1.0};
struct ImplementationCar fiat_multipla2={FIAT_MULTIPLA,GREEN,false,170,65.0,0.0,0,-8.0,2.26};
struct ImplementationCar jeep2={JEEP,BLACK,false,196,80.0,0.0,0,-8.0,3.14};

Car car_park[]={&aixam1,&fiat_multipla1,&jeep1,&aixam2,&fiat_multipla2,&jeep2};

void init()
{
  
}
enum CarType get_type(Car car)
{
  return car->car_type;
}

Car get_car(CarType car_type)
{
  return 0;
}

int get_speed(Car car)
{
  return car->speed;
}

enum Color get_color(Car car)
{
  return car->car_color;
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

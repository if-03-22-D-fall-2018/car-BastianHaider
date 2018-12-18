#include "car.h"
#include <stdbool.h>

#define NUMBER_OF_CARS 6
struct ImplementationCar
{
  enum CarType car_type;
  int max_speed;
  enum Color car_color;
  double fill_level;
  double acceleration_rate;
  double speed;
  bool is_available;
};
struct ImplementationCar aixam1 { AIXAM, 45, RED, 16.0, 0.0, 0.0, true};
struct ImplementationCar aixam2 { AIXAM, 45, ORANGE, 16.0, 0.0, 0.0, true};
struct ImplementationCar fiat_mutipla1 { FIAT_MULTIPLA, 170, GREEN, 65.0, 0.0, 0.0, true };
struct ImplementationCar fiat_mutipla2 { FIAT_MULTIPLA, 170, BLUE, 65.0, 0.0, 0.0, true };
struct ImplementationCar jeep1 { JEEP, 196, SILVER, 80.0, 0.0, 0.0, true };
struct ImplementationCar jeep2 { JEEP, 196, BLACK, 80.0, 0.0, 0.0, true }

static Car car_park[]={&aixam1,&aixam2,&fiat_mutipla1,&fiat_mutipla2,&jeep1,&jeep2};

void init()
{
  for (int i = 0; i < NUMBER_OF_CARS; i++)
 {
   car_park[i]->is_available=true;
   car_park[i]->acceleration_rate=0;
   car_park[i]->speed=0;
 }
}
enum CarType get_type(Car car)
{
  return car->car_type;
}

Car get_car(enum CarType type){
    for (int i = 0; i < NUMBER_OF_CARS; i++) {
    if((car_park[i]->car_data.type==type)&&(!car_park[i]->is_rented))
    {
        car_park[i]->is_rented = true;
        return car_park[i];
    }
  }
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
  return car->fill_level;
}

double get_acceleration_rate(Car car)
{
  return car->acceleration_rate;
}

void set_acceleration_rate(Car car, double acceleration_rate)
{

}

void accelerate(Car car)
{
  double temp = get_acceleration_rate(car) * 3.6;
  if (temp+get_speed(car)<= car->max_speed)
  {
    car->speed+=temp;
  }
  else
  {
    car->speed=car->max_speed;
  }
}

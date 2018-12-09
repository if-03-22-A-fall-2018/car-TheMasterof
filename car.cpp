#include "car.h"
#include <math.h>
#include <stdio.h>
#include <stdbool.h>

struct CarImplementation jeep1 = {JEEP, SILVER, 0, 0, 80, false};
struct CarImplementation jeep2 = {JEEP, BLACK, 0, 0, 80, false};
struct CarImplementation aixam = {AIXAM, RED, 0, 0, 16, false};
struct CarImplementation multipla1 = {FIAT_MULTIPLA, GREEN, 0, 0, 65, false};
struct CarImplementation multipla2 = {FIAT_MULTIPLA, BLUE, 0, 0, 65, false};
struct CarImplementation multipla3 = {FIAT_MULTIPLA, ORANGE, 0, 0, 65, false};
void init(){

}
Car get_car(CarType car){
  return 0;
}
enum CarType get_type(Car car){
  return JEEP;
}
enum Color get_color(Car car){
  return RED;
}
double get_fill_level(Car car){
  double test;
  return test;
}
int get_acceleration_rate(Car car){
  int test;
  return test;
}
void set_acceleration_rate(Car car, double rate){

}
void accelerate(Car car){

}
double get_speed(Car car){
  double test;
  return test;
}

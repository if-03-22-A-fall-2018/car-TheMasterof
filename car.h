/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			P. Bauer
* Due Date:		January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H

enum car_type{AIXAM, FIAT_MULTIPLA, JEEP };
enum car_color{RED, GREEN, SILVER, };

struct Carimplementation{
  enum car_type type;
  enum car_color color;
  double fill_level;
  double acceleration_rate;
  int speed;
};

typedef struct Carimplementation* Car;

enum  get_car(car_type)
enum car_type get_type(Car car);
enum car_color get_color(Car car);
double get_fill_level(Car car);
void accelerate(Car car);
double set_acceleration_rate(Car car, double acceleration);
int get_speed(Car car);
#endif

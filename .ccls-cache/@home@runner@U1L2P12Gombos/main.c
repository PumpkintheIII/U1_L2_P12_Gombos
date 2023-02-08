/*
  UB C Programming Unit 1 Lesson 2 Program 12
  Area and Circumference of a Circle
  Max Gombos
*/
#include <stdio.h> //import input and output functions

int main(void) { //define main function
  float radius, circumference, area; //initiailize variable as float
  float pi; //initiailize variable as float

  pi = 3.14159; //set pi var to pi

  printf("Radius: "); //ask user for radius
  scanf("%f", &radius); //accepts user input and formats as float

  area = pi * (radius * radius); //find area of circle
  circumference = 2 * (pi * radius); //find circumference

  printf("Area: %0.2f", area); //output area
  printf("\nCircumference: %0.2f", circumference); //output
  
  return 0;
}
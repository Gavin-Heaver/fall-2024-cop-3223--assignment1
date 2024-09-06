// fracturing.c
// Author: Gavin Heaver
// Date: 9/6/24
// Class: COP 3223, Professor Parra
// Purpose: This program is practice in using various functions to divide the work and give each function it's own purpose. 
//          This will be accomplished by calculating various mathematical properties, like distance and perimeter. 
// Input: 10 coordinate point, 2 points per function, 20 values in total
// Output: The same 10 coordinate points input, plus the desired outcome of the functions

#include <stdio.h>
#include <math.h>

//PI preprocessor directive
#define PI 3.14159

//This function will request the coordinates
double coordinates(){
    //Declare variables
    double x1;
    double y1;
    double x2;
    double y2;
    double diameter;

    //Request the first x coordinate
    printf("What is the X coordinate of the first point: ");
    scanf("%lf", & x1);

    //Request the first y coordinate
    printf("What is the Y coordinate of the first point: ");
    scanf(" %lf", & y1);

    //Request the second x coordinate
    printf("What is the X coordinate of the second point: ");
    scanf(" %lf", & x2);

    //Request the second y coordinate
    printf("What is the Y coordinate of the second point: ");
    scanf(" %lf", & y2);

    //Calculate distance
    diameter = sqrt(pow(x2 - x1,2)+pow(y2 - y1,2));

    //Print the 2 coordinates
    printf("x1 = %lf; y1 = %lf\n", x1, y1);
    printf("x2 = %lf; y2 = %lf\n", x2, y2);

    return diameter;
}

// This function will calculate the distance between 2 input points
double calculateDistance(){
    //Declare variables
    double distance;

    //Call coordiantes and assign value to distance
    distance = coordinates();

    //Print the distance between points
    printf("The distance between the two points is %lf\n", distance);
    
    //return distance
    return distance;
}

// This function will calculate the perimeter based on points
double calculatePerimeter(){
    //Declare variables
    double perimeter;
    double radius;

    //Call coordinates and assign value to radius
    radius = coordinates() / 2;

    //Calculate the perimeter
    perimeter = 2 * PI * radius;

    //Print the perimeter based on the calculation of the points
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);

    //Return
    return 1.7;
}

// This function will calculate the area based on the points
double calculateArea(){
    //Declare variables
    double area;
    double radius;

    //Call coordinates and assign value to radius
    radius = coordinates() / 2;

    area = PI * pow(radius, 2);

    //Print the area of the city based on the points given
    printf("The area of the city encompassed by your request is %lf\n", area);
}

// This function will calculate the width between points
double calculateWidth(){
    //Declare variables
    double width;

    //Call coordinates and set it to width
    width = coordinates();

    //Print the width of the city based on the points given
    printf("The width of the city encompassed by your request is %lf\n", width);
}

// This function will calculate the height based on the points given
double calculateHeight(){
    //Declare variables
    double height;

    //Call coordinates and set it to height
    height = coordinates();

    //Print the heightof the city based on the points given
    printf("The height of the city encompassed by your request is %lf\n", height);
}

// Primary function
int main(int argc, char **argv){
    
    // Call all functions to the main function
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}
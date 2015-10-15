//Name : Angel Gonzalez
//Date : 10/15/15
//Description: Following the guidelines below

/*1. Write and test the following function to convert feet to inches. The prototype for this function is:
a. double feetToInches(double val);
b. void  feetToInches(double&  val);

2. Write and test the following function to calculate area. The prototype for this function is:
a. double computeRectangle(double valA, double valB);
b. void computerArea (double valA, double valB, double& valC);

3. Write and test the following function to calculate area, perimeter. The prototype for this function is:
a. void computerArea (double valA, double valB, double& valArea, double& valPerimeter);

4. Write and test the following function that returns the average, sum of the four parameters that are passed to it. The prototype for this function is:  
a. void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF);

5. Write and test a function that the calculates area, perimeter of a circle.  The function receives one value, radius of type double, and returns the correct values;
a. void calcAreaPerimeter(double radius, double& area, double$ perimeter);

6. Write and test a function that the calculates area of a rectangle.  The function receives two values, length and width and returns the value;
a. double calcArea(double length, double width);*/

#include <iostream>
#include <cassert>

using namespace std;

void feetToInches(double&  val);
void computerArea (double valA, double valB, double& valC);
void computerArea (double valA, double valB, double& valArea, double& valPerimeter);
void stats(double valA, double valB, double valC, double valD, double& valE, double& valF);
void calcAreaPerimeter(double radius, double& area, double& perimeter);
int main()
{

    return 0;
}

void feetToInches(double&  val)
{
    
    val = val * 12;

    return;

}
void computerArea (double valA, double valB, double& valC)
{

    valC = valA * valB;
    
    return;
}
void computerArea (double valA, double valB, double& valArea, double& valPerimeter)
{

    valArea = valA * valB;
    
    valPerimeter = valA + valA + valB + valB;

    return;
}
void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF)
{

    valE = (valA + valB + valC + valD) / 4; //gets the average
    
    valF = valA + valB + valC + valD; //gets the perimeter

    return;
}
void calcAreaPerimeter(double radius, double& area, double& perimeter)
{

    area = radius * radius * 3.14;
    
    perimeter = 2 * radius * 3.14;

    return;
}
double calcArea(double length, double width)
{

    double area;
    
    area = length * width;

    return area;

}

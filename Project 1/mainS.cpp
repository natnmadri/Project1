//
//  main.cpp
//  Project 1
//
//  Created by Nathalie Madrigal on 9/8/18.
//  Copyright © 2018 SMCC Software. All rights reserved.
// Area Project
//
/* The purpose of this project is to write a program that defines a Shape class with a constructor that gives value to x(width) and y(height). Create two child classes (Triangle and Rectangle) that calculate the area of the shape (named area). In the main, define two variables (Triangle and Rectangle) and then call the area() function to width of 10 and height of 20.  */

#include <iostream>

using namespace std;

//parent class definition
class Shape{

//variable declaration
protected:
    int width , height;
    
public:
    void set_data (int x, int y){
        width = x;
        height = y;
    }
        
};

//child(sub) class defintion
class Triangle: public Shape{
    
public:
    int area (){
        return (width * height / 2);
    }
    
};

//child(sub) class defintion
class Rectangle: public Shape{
    
public: int area (){
        return (width * height);
    }
};

int main() {
    
    Triangle tri;
    Rectangle rec;
    

    tri.set_data(10, 20);
    rec.set_data(10, 20);
    
    cout << "the area of the triangle, given the width and height is " << tri.area() << "cm sqr " << endl;
    
    
    cout << "the area of the rectangle, given the width and height is " << rec.area() << "cm sqr "  << endl;
    return 0;
}




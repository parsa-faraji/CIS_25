//
//  Point.cpp
//  classActivity26
//
//  Created by Parsa Faraji on 11/1/24.
//

#include "Point.h"

// overloaded == operator
bool operator==(const Point& point1, const Point& point2){
    return (point1.x == point2.x) && (point1.y == point2.y);
}

// overloaded << opeartor for output
ostream& operator<<(ostream& stream, const Point& point){
    return stream << "(" << point.x << ", " << point.y << ")";
}

//
//  Point.h
//  classActivity26
//
//  Created by Parsa Faraji on 11/1/24.
//

#ifndef Point_h
#define Point_h
#include <iostream>
using namespace std;

struct Point {
    // attributes
    int x;
    int y;
    
    bool operator==(const Point& point) {
        return (x == point.x) && (y == point.y)
    }
    
    ostream& operator<<(ostream& stream, const Point& point){
        stream << "(" << point.x << ", " << point.y << ")";
        return stream;
    }
}

#endif /* Point_h */

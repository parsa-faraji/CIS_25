//
//  Point.h
//  classActivity26
//
//  Created by Parsa Faraji on 11/1/24.
//

#ifndef Point_h
#define Point_h
#include <ostream>
using namespace std;

struct Point {
    // attributes
    int x;
    int y;

};

// overloaded == operator
bool operator==(const Point& point1,const Point& point2);

// overloaded << opeartor for output
ostream& operator<<(ostream& stream, const Point& point);


#endif /* Point_h */

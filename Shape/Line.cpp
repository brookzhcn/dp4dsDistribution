// File: Shape/Line.cpp

#include "Line.hpp"
#include "../Utilities/Utilities.hpp"

Line::Line(double length) {  
    if(length < 0.0) {
        cerr << "Line precondition violated: length cannot be negative." << endl;
        throw -1;
    }
    _length = length;
}

double Line::area() {  
    return 0.0;
}

double Line::perimeter() {  
    return _length;
}

void Line::scale(double factor) {  
    cerr << "scale: Exercise for the student." << endl;
    throw -1;
}

void Line::display(ostream &os) {
    os << "Line\n" << "Length: " << _length << endl;
}

void Line::promptAndSetDimensions() {
    _length = promptDoubleGE("Length?", 0.0);
}


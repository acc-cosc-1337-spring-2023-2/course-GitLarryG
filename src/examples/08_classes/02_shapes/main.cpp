//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/

using std::vector;
using std::unique_ptr; using std::make_unique;

int main() 
{
	vector<unique_ptr<Shape>> shapes;
	shapes.push_back(make_unique<Circle>());
	shapes.push_back(make_unique<Line>());

	shape[0]->draw();
	shape[1]->draw();

}

// using std:: vector;
// using std:: unique_ptr; using std:: make_unique;

// int main()	
// {

// 	Shape*shape;
// 	Circle circle;

// 	shape = &circle;
// 	shape->draw();

// 	Line line;

// 	shape = &line;
// 	shape->draw();

// 	Shape shape;

// 	shape = &line;
// 	shape->draw();

// 	return 0;
// }
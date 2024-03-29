/**
 * SVG Circle
 **/

#ifndef RECT_H
#define RECT_H

#include "svg.h"
#include <iostream>
#include <string>

using namespace std;

class Rect : public SVG {

public:
  // operator<< equivalent to write the object out
  ostream &write(ostream &out) const override;

  // operator>> equivalent to read the object contents
  istream &read(istream &input) override;

private:
  // coordinates for the top-left corner of the rectangle
  int x{0}, y{0};

  // dimensions of the rectangle
  int width{0}, height{0};

  // color of retangle
  string color{"black"};
};

#endif

#include <iostream>

#include "rect.h"

void Rect::SetDimension(double width, double height) {
  this->width = width;
  this->height = height;
}

void Rect::Print() {
  std::cout << "Rect width " << width << ", height " << height << "\n";
}

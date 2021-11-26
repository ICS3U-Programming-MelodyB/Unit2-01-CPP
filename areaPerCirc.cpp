// Copyright (c) 2021 Melody Berhane All rights reserved.
// .
// Created by: Melody Berhane
// Created on: Nov 25, 2021
// This program calculates and displays the area
// perimeter of a circle with radius 15 mm.
#include <iostream>
#include <cmath>

int main() {
  std::cout << "For a circle that has a radius\n";
  std::cout << "of 15mm:\n";
  std::cout << "\n";
  std::cout << "Area = " << M_PI * pow(15, 2)  << " cm^2\n";
  std::cout << "Perimeter = " << 2*M_PI*15 << " cm\n";
}

#include "Puzzle.h"
#include "Rod.h"
#include "Disk.h"
#include <vector>

#include <iostream>

Puzzle::Puzzle(unsigned diskCount) {
  diskCount_ = diskCount;
  // create 3 
  for (int i = 0; i < 3; i++) {
    Rod rod;
    rods_.push_back(rod);
  }
  //place blocks on the first rod
  for (int i = 0; i < diskCount; i++) {
    Disk disk(i+1);
    rods_[0].addToTop(disk);
  }
}


void Puzzle::printState() {
  unsigned maxDiameter = diskCount_ * 2; // diskCount_ = radius of largest disk.
  
  // add new line for readability 
  std::cout << std::endl;
  
  // prints the rods and disks one layer at a time
  for (int heightIndex = 0; heightIndex < diskCount_; heightIndex++){
    
    // at each layer print a disk or empty space for each rod
    for (int rodIndex = 0; rodIndex < rods_.size(); rodIndex++) {
      
      // print space to add distance between rods
      std::cout << "   ";
      
      unsigned diskDiameter; 
      if (rods_[rodIndex].diskCount() > heightIndex)
        diskDiameter = rods_[rodIndex].radiusAt(heightIndex) * 2;
      else diskDiameter = 0;

      unsigned spaces = maxDiameter - diskDiameter; //mulitplied by 2 so all widths are even number for centering purposes;
      
      // print half of the spaces before disk
      for(int i = 0; i < spaces/2; i++) {
        std::cout << ' ';
      }
      // print disk
      for(int i = 0; i < diskDiameter; i++) {
        std::cout << '=';
      }
      // print half of the spaces after disk
      for(int i = 0; i < spaces/2; i++) {
        std::cout << ' ';
      }
    }
    // end line to move to next layer
    std::cout << std::endl;
  }
  std::cout << std::endl;
}

unsigned Puzzle::getDiskCount()
{
  return diskCount_;
}

// solves puzzle and prints each step
void Puzzle::solve(){

}



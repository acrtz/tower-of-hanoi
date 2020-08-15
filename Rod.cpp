#include "Rod.h"

void Rod::addToTop(const Disk &disk){
  disks_.push_back(disk);
}

Disk Rod::removeFromTop(){
  Disk disk = disks_[disks_.size()-1];
  disks_.pop_back();
  return disk;
}

unsigned Rod::diskCount(){
  return disks_.size();
}

Disk & Rod::viewTopDisk(){
  return disks_[disks_.size()-1];
}

void Rod::printDisks(){

}

unsigned Rod::radiusAt(unsigned height) {
  return disks_[height].getRadius();
}
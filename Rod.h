#pragma once

#include <vector>
#include "Disk.h"

class Rod {
  public:
    void addToTop(const Disk &disk);
    Disk removeFromTop();
    unsigned diskCount();
    Disk & viewTopDisk();
    void printDisks();
    unsigned radiusAt(unsigned height);


  private:
    std::vector<Disk> disks_;
};
#pragma once

#include "Rod.h"
#include <vector>

class Puzzle
{
  public:
    // constructor
    Puzzle(unsigned diskCount);
    // solves puzzle and prints each step
    void solve();
    //
    void printState();

    unsigned getDiskCount();

  private:
    std::vector<Rod> rods_;
    unsigned diskCount_;
};
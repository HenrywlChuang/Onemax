#ifndef __ES_H_INCLUDED__
#define __ES_H_INCLUDED__

#include <iostream>
#include "lib.h"

using namespace std;

class ES
{
  public:
    ES(
        int name_algo,
        int num_population,
        int num_evaluation,
        int num_run
    );
    ~ES() {}
    
    void main();
  
  private://parameters
  
    int name_algo;
    int num_population;
    int num_evaluation;
    int num_run;

    v1i population_vec;
    int global_one;  // how many one in the vector
    int current_best;
    string way_method;

    v1d average_best;

    // measurement
    double searching_secs;

  private://functions

    void transition();
};
#endif
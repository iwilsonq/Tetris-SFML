//
//  Random.hpp
//  Tetras
//
//  Created by Ian Wilson on 12/30/15.
//  Copyright (c) 2015 APM. All rights reserved.
//

#ifndef Tetras_Random_hpp
#define Tetras_Random_hpp

#include <cstdlib>
#include <ctime>
#include <random>

extern std::default_random_engine generator;

inline void rand_init()
{
    srand(time(NULL));
    
};

inline float random(float min,float max)
{
    return (rand()/float(RAND_MAX))*(max-min) + min;
}

inline int random(int min,int max)
{
    return rand()%(max-min+1) + min;
}

#endif

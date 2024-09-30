// Financial_Engineering.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// I want to include all the files I have created so far
#include <iostream>

#include "BoxMuller.h"
#include "NormalGenerator.h"
#include "NumericMatrix.h"


#include "TerribleRandGenerator.h"
#include "UniformGenerator.h"

int main()
{
    // Based on rand()
    TerribleRandGenerator myTerrible;
    myTerrible.init(0);
    NormalGenerator* myNormal = new BoxMuller(myTerrible);
    return 0; // Ensure main returns an integer
}
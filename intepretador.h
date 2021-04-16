#ifndef INTEPRETADOR_H_INCLUDED
#define INTEPRETADOR_H_INCLUDED

#include <vector>
#include <string>
#include "figurageometrica.h"
using namespace std;

class Interpretador{
    int dimx;

    int dimy;

    int dimz;

    float r;

    float g;

    float b;

    float a;


public:

    Interpretador();

    std::vector<FiguraGeometrica *>parse(std::string filename);

    int getDimx();

    int getDimy();

    int getDimz();

};


#endif // INTEPRETADOR_H_INCLUDED

#ifndef CUTELLIPSOID_H_INCLUDED
#define CUTELLIPSOID_H_INCLUDED

#include "figurageometrica.h"
#include "sculptor.h"
#include <cmath>

class Cutellipsoid: public FiguraGeometrica{
protected:
        int xcenter;

        int ycenter;


        int zcenter;

        int rx;

        int ry;


        int rz;


public:
    Cutellipsoid(int _xcenter, int _ycenter, int _zcenter, int _rx, int _ry, int _rz);


    virtual ~Cutellipsoid();



    void draw(Sculptor &t);
};
#endif // CUTELLIPSOID_H_INCLUDED

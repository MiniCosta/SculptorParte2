#ifndef CUTVOXEL_H_INCLUDED
#define CUTVOXEL_H_INCLUDED

#include "figurageometrica.h"
#include <cmath>
#include "sculptor.h"


class cutvoxel: public FiguraGeometrica{
protected:

        int x;

        int y;

        int z;

public:
    cutvoxel(int _x, int _y, int _z);


    virtual ~cutvoxel();


    void draw(Sculptor &t);
};
#endif // CUTVOXEL_H_INCLUDED

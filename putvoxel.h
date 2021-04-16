#ifndef PUTVOXEL_H_INCLUDED
#define PUTVOXEL_H_INCLUDED

#include "figurageometrica.h"
#include "sculptor.h"


class putvoxel: public FiguraGeometrica{
protected:


    int x;

    int y;

    int z;

        float r;


        float g;

        float b;

        float a;

public:
    putvoxel(int _x, int _y, int _z, float _r, float _g, float _b, float _a);

    virtual ~putvoxel();

    void draw(Sculptor &t);
};

#endif // PUTVOXEL_H_INCLUDED

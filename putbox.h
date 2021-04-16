#ifndef PUTBOX_H_INCLUDED
#define PUTBOX_H_INCLUDED

#include "figurageometrica.h"
#include "sculptor.h"

class PutBox: public FiguraGeometrica {
protected:


        int x0;


        int x1;


        int y0;


        int y1;

        int z0;

        int z1;

        float r;

        float g;

        float b;

        float a;

public:
    PutBox(int _x0, int _x1, int _y0, int _y1, int _z0, int _z1, float _r, float _g, float _b, float _a);

    virtual ~PutBox();

    void draw(Sculptor &t);
};


#endif // PUTBOX_H_INCLUDED

#ifndef PUTSPHERE_H_INCLUDED
#define PUTSPHERE_H_INCLUDED

#include "figurageometrica.h"
#include "sculptor.h"
#include <cmath>

class putsphere: public FiguraGeometrica{
protected:

    int xcenter;

    int ycenter;

    int zcenter;

    int radius;

        float r;

        float g;

        float b;

        float a;


public:
    putsphere(int _xcenter, int _ycenter, int _zcenter, int _radius, float r, float g, float b, float a);


    virtual ~putsphere();


    void draw(Sculptor &t);
};

#endif // PUTSPHERE_H_INCLUDED

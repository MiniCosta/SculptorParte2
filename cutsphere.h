#ifndef CUTSPHERE_H_INCLUDED
#define CUTSPHERE_H_INCLUDED

#include "figurageometrica.h"
#include "sculptor.h"
#include <cmath>


class cutsphere: public FiguraGeometrica{
protected:

        int xcenter;


        int ycenter;


        int zcenter;


        int radius;

public:
    cutsphere(int _xcenter, int _ycenter, int _zcenter, int _radius);


    virtual ~cutsphere();



    void draw(Sculptor &t);
};

#endif // CUTSPHERE_H_INCLUDED

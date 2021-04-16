#include "cutvoxel.h"

cutvoxel::cutvoxel(int x1, int y1, int z1){
    x=x1; y=y1; z=z1;
}

cutvoxel::~cutvoxel(){

}

void cutvoxel::draw(Sculptor &t){

    t.cutVoxel(x,y,z);


}

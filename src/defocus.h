#include <iostream>
#include <math.h>

#define PI 3.1415926
using namespace std;
typedef unsigned char uchar;

void defocusEstimation(float* I_rgb,float* I, float* edge, float*, float std, float lamda, float maxBlur, int width, int height,int blur);
void g1x(float* g, int* x, int* y, float std, int w);
void g1y(float* g, int* x, int* y, float std, int w);
void filter(float* gim, float* g , float* I, int width, int height, int w);
void sparseScale(float* I, int maxBlur, size_t size) ;

template <class T>
void imageInfo( T*, size_t );
void writeDiff( const float*, size_t, size_t,char *);
void write( const float*, size_t, size_t,char *);

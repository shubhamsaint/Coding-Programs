#include <iostream>
#include<math.h>
using namespace std;
#define pi 3.14
struct POINTFLOAT
{
    float x,y;

};
int GetAngleABC( POINTFLOAT a, POINTFLOAT b, POINTFLOAT c )
{
    POINTFLOAT ab = { b.x - a.x, b.y - a.y };
    POINTFLOAT cb = { b.x - c.x, b.y - c.y };

    float dot = (ab.x * cb.x + ab.y * cb.y); // dot product
    float cross = (ab.x * cb.y - ab.y * cb.x); // cross product
    int val = (b.y - a.y) * (c.x - b.x) -
              (b.x - a.x) * (c.y - b.y);

    if (val == 0) return 0;  // colinear

    float alpha = atan2(cross, dot);

    if( (int) floor(alpha * 180. / pi + 0.5)==90){return val;}
    else return 0;
}

int main()
{
  POINTFLOAT a[10000];

  int n;
  float x,y;
  cin>>n;

  dor(int i=0;i<n;i++)
  {
    cin>>x>>y;
    a[i]={x,y};

  }

  for(i=0;i<n;i++)
  {

  }

  return 0;
}

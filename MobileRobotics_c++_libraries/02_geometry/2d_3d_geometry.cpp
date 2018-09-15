/*
 * 2d_3d_geometry.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */
#include <mrpt/poses/CPoint3D.h>
#include <mrpt/poses/CPoint2D.h>

#include <mrpt/poses/CPose2D.h>
#include <mrpt/poses/CPose3D.h>
#include <mrpt/poses/CPose3DQuat.h>




#include <mrpt/system/CTicTac.h>
#include <iostream>


using namespace mrpt;
using namespace mrpt::poses;
using namespace mrpt::system;
using namespace std;


int main()
{
  std::cout << "======================" << '\n';

  try
  {
    //CPoint2D: (x,y)
    //This class represents a 2D point (z coordinates defaults to 0):
    CPoint2D   p1( 3.0f, 2.0f );

    std::cout << "Point in 2d \n p1:"<<p1 << '\n';

    // Constructor: CPoint3D (double x=0, double y=0, double z=0)
    CPoint3D    p2( 3.0, 2.0, 1.0 );
    std::cout << "Point in 3d \n p2:"<<p2 << '\n';

    // Constructor:  CPose2D (double x=0,double y=0, double phi=0)
    CPose2D     p3( 1.0, 0.0, DEG2RAD( 45.0 ) );
    std::cout << "Pose in 3d \n p3:"<<p3 << '\n';

    /* CPose3D: (x,y,z,yaw,pitch,roll)*/
    // Constructor:  CPose3D (double x=0, double y=0, double z=0, double yaw=0, float double =0, float double =0)
    CPose3D     p4( 1.0, 2.0, 3.0, DEG2RAD( 45.0 ), DEG2RAD( -90.0 ), DEG2RAD( 180.0 ) );
    std::cout << "Pose yaw pitch and roll \n p4:"<<p4 << '\n';


    /*CPose3DQuat: 3D translation + quaternion (x,y,z, qr,qx,qy,qz)*/
    // Constructor:
    //CPose3DQuat p5 = CPose3D( 1.0, 2.0, 3.0, DEG2RAD( 45.0 ), DEG2RAD( -90.0 ), DEG2RAD( 180.0 ) );
    //CPose3DQuat p6(x,y,z, CQuaternionDouble(1,0,0,0));

    //std::cout << "quaternion \n p6:"<<p6 << '\n';


    // 
    // CPose3D  p(0,0,0, DEG2RAD(20),DEG2RAD(45),DEG2RAD(-80));
    // CQuaternionDouble q;
    // p.getAsQuaternion(q);   // Transform a 3D-pose into a quaternion.
    //



    return 0;
  }
  catch (exception& e)
  {
    cerr << "EXCEPCTION: " << e.what() << endl;
    return -1;
  }
  catch (...)
  {
  cerr << "Untyped excepcion!!";
  return -1;
  }
}

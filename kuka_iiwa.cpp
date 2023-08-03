#include <kdl/chain.hpp>
#include "kuka_iiwa.h"
namespace KDL{

Chain KukaIiwa7_DH(){
    
    Chain KukaIiwa7_DH;
	
	//joint 0
	//KukaIiwa7_DH.addSegment(Segment(Joint(Joint::None),
	//			  Frame::DH_Craig1989(0.0, 0.0, 0.0, 0.0)
	//			  ));
	//joint 1
	KukaIiwa7_DH.addSegment(Segment(Joint(Joint::RotZ),
				  Frame::DH(0.0, -1.5707963, 0.34, 0.0)));
				   
	//joint 2 
	KukaIiwa7_DH.addSegment(Segment(Joint(Joint::RotZ),
				  Frame::DH(0.0, 1.5707963, 0.0, 0.0)));
				  
	//joint 3
	KukaIiwa7_DH.addSegment(Segment(Joint(Joint::RotZ),
				  Frame::DH(0.0, 1.5707963, 0.4, 0.0)));
				  
	//joint 4
	KukaIiwa7_DH.addSegment(Segment(Joint(Joint::RotZ),
				  Frame::DH(0.0, -1.5707963, 0.0, 0.0)));
				  
	//joint 5
	KukaIiwa7_DH.addSegment(Segment(Joint(Joint::RotZ),
				  Frame::DH(0.0, -1.5707963, 0.4, 0.0)));
				  
	//joint 6
	KukaIiwa7_DH.addSegment(Segment(Joint(Joint::RotZ),
				  Frame::DH(0.0, 1.5707963, 0.0, 0.0)));
	//joint 7
	KukaIiwa7_DH.addSegment(Segment(Joint(Joint::RotZ),
				  Frame::DH(0.0, 0.0, 0.126, 0.0)));
												   
        return KukaIiwa7_DH;
    }
}
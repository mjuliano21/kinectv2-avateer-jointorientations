#pragma once
#define FACTOR 5
#include"RigJoint.h"

using namespace std;

class KinectUtility
{
public:
	static const float lengthFromSpineBaseToSpineMid;
	static const float lengthFromSpineMidToSpineShoulder;
	static const float lengthFromSpineMidToHipRight;
	static const float lengthFromHipRightToKneeRight;
	static const float lengthFromKneeRightToAnkleRight;
	static const float lengthFromAnkleToFoot;
	static const float lengthFromShoulderToNeck;
	static const float lengthFromNeckToHead;
	static const float lengthFromSpineShoulderToShoulder;
	static const float lengthFromShoulderToElbow;
	static const float lengthFromElbowToWrist;
	static const float lengthFromWristToHand;
	static const float lengthFromHandToThumb;
	static const float lengthFromHandToTip;

	static shared_ptr<RigJoint>	CreateBoneHierarchy();
	static void TraverseBoneHierarchy(shared_ptr<RigJoint>& node, 
				function<void(shared_ptr<RigJoint>&)> f);
};


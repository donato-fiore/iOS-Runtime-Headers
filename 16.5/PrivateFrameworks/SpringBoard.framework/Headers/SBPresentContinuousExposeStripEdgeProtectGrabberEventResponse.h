// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPRESENTCONTINUOUSEXPOSESTRIPEDGEPROTECTGRABBEREVENTRESPONSE_H
#define SBPRESENTCONTINUOUSEXPOSESTRIPEDGEPROTECTGRABBEREVENTRESPONSE_H



#import "SBSwitcherModifierEventResponse.h"

@interface SBPresentContinuousExposeStripEdgeProtectGrabberEventResponse : SBSwitcherModifierEventResponse

@property (nonatomic, getter=isInitialPresentation) BOOL initialPresentation; // ivar: _initialPresentation


-(NSInteger)type;
-(id)initForInitialPresentation:(BOOL)arg0 ;


@end


#endif
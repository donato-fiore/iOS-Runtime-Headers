// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISCROLLDYNAMICSIOSMAC_H
#define _UISCROLLDYNAMICSIOSMAC_H

@class UIScrollDynamics;



@interface _UIScrollDynamicsiOSMac : UIScrollDynamics {
    CGFloat _durationUntilStop;
    CGFloat _durationUntilStopIgnoringRubberbanding;
    CGSize _absDisplacementVectorIgnoringRubberbanding;
    CGFloat _linearDisplacementIgnoringRubberbanding;
    CGPoint _destinationIgnoringRubberbanding;
    CGFloat _durationUntilRubberband;
    CGPoint _initialRubberbandingOrigin;
    CGVector _initialRubberbandingVelocity;
    NSUInteger _rubberBandingAxis;
    CGFloat _decelerationRate;
}




-(BOOL)isRubberBandingAfterDuration:(CGFloat)arg0 ;
-(CGFloat)durationUntilStop;
-(CGFloat)speedAfterDuration:(CGFloat)arg0 ;
-(id)init;
-(struct CGPoint )positionAfterDuration:(CGFloat)arg0 ;
-(struct CGVector )velocityAfterDuration:(CGFloat)arg0 ;
-(void)calculateDecelerationTarget;
-(void)calculateToReachDecelerationTarget;


@end


#endif
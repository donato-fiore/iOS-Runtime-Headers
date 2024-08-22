// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIEVENTSESSIONTOUCHEVENTANALYZER_H
#define UIEVENTSESSIONTOUCHEVENTANALYZER_H


#import <Foundation/Foundation.h>


@interface UIEventSessionTouchEventAnalyzer : NSObject



+(CGFloat)squaredDistanceBetweenPoint:(struct CGPoint )arg0 andPoint:(struct CGPoint )arg1 ;
-(NSInteger)determineWindowSectionWithLocationInWindow:(struct CGPoint )arg0 withWindowBounds:(struct CGRect )arg1 ;
-(id)checkifGestureComplete:(id)arg0 ;
-(id)completeGesture:(id)arg0 ;
-(id)didPointerClickWithTrackpadFingerDownCount:(NSInteger)arg0 withLocationInWindow:(struct CGPoint )arg1 withWindowBounds:(struct CGRect )arg2 ;
-(id)didPointerHoverWithTrackpadFingerDownCount:(NSInteger)arg0 withLocationInWindow:(struct CGPoint )arg1 withWindowBounds:(struct CGRect )arg2 ;
-(id)didTouchWithID:(id)arg0 withPhase:(NSInteger)arg1 withType:(NSInteger)arg2 withLocationInWindow:(struct CGPoint )arg3 withWindowBounds:(struct CGRect )arg4 withTrackpadFingerDownCount:(NSInteger)arg5 ;
-(id)init;


@end


#endif
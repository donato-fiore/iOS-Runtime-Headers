// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCREENEDGEPANGESTURERECOGNIZER_H
#define SBSCREENEDGEPANGESTURERECOGNIZER_H

@class UIScreenEdgePanGestureRecognizer;
@protocol SBSystemGestureRecognizerDelegate;



@interface SBScreenEdgePanGestureRecognizer : UIScreenEdgePanGestureRecognizer

@property (weak, nonatomic) NSObject<SBSystemGestureRecognizerDelegate> *delegate;
@property (nonatomic) CGFloat grabberActiveZoneWidth; // ivar: _grabberActiveZoneWidth


-(BOOL)isLocationWithinGrabberActiveZone;
-(NSInteger)_touchInterfaceOrientation;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 type:(NSInteger)arg2 options:(NSUInteger)arg3 ;
-(void)sb_commonInitScreenEdgePanGestureRecognizer;


@end


#endif
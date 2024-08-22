// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKPULSEANIMATIONCONTROLLER_H
#define TSKPULSEANIMATIONCONTROLLER_H

@protocol TSKPulseAnimationControllerProtocol;


#import "TSKHighlightController.h"

@interface TSKPulseAnimationController : TSKHighlightController {
    id<TSKPulseAnimationControllerProtocol> *_delegate;
}


@property (nonatomic) BOOL autohide; // ivar: _autohide
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL pulsating; // ivar: _pulsating
@property (nonatomic) CGFloat pulseOffset; // ivar: _pulseOffset


-(BOOL)drawRoundedRect;
-(id)initWithDelegate:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;
-(void)disconnect;
-(void)reset;
-(void)startAnimating;
-(void)stop;


@end


#endif
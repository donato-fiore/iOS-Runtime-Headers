// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TITYPINGASSERTION_H
#define TITYPINGASSERTION_H

@class NSMutableSet, PSPointerClientController, NSTimer;

#import <Foundation/Foundation.h>


@interface TITypingAssertion : NSObject {
    BOOL _active;
    NSMutableSet *_restingPathIndices;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) PSPointerClientController *pointerClientController; // ivar: _pointerClientController
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer


+(id)sharedTypingAssertion;
-(id)__restingPathIndices;
-(id)init;
-(void)_sbsSetTypingActive:(BOOL)arg0 ;
-(void)dealloc;
-(void)restResetTouches;
-(void)restTouchEndWithPathIndex:(NSInteger)arg0 ;
-(void)restTouchStartWithPathIndex:(NSInteger)arg0 ;
-(void)timerFired:(id)arg0 ;
-(void)touchWithDuration:(CGFloat)arg0 reason:(NSInteger)arg1 ;
-(void)touchWithReason:(NSInteger)arg0 ;


@end


#endif
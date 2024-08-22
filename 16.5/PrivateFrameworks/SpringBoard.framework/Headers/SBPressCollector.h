// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPRESSCOLLECTOR_H
#define SBPRESSCOLLECTOR_H

@class BSAbsoluteMachTimer, NSMutableArray;
@protocol SBPressCollectorDelegate;

#import <Foundation/Foundation.h>

#import "SBPressTuple.h"

@interface SBPressCollector : NSObject {
    BSAbsoluteMachTimer *_hardEndTimer;
    NSMutableArray *_currentSequence;
    SBPressTuple *_currentTuple;
    CGFloat _lastHandledDownEvent;
    CGFloat _lastHandledUpEvent;
}


@property (weak, nonatomic) NSObject<SBPressCollectorDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat maxPressDownDuration; // ivar: _maxPressDownDuration
@property (nonatomic) CGFloat maxPressUpDuration; // ivar: _maxPressUpDuration


+(CGFloat)currentTimeStamp;
-(id)init;
-(void)_end;
-(void)_fireEndTimerWithDelay:(CGFloat)arg0 isButtonDown:(BOOL)arg1 ;
-(void)_handlePressDownWithTimeStamp:(CGFloat)arg0 ;
-(void)_handlePressUpWithTimeStamp:(CGFloat)arg0 ;
-(void)_reset;
-(void)_resetTimersIfNecessary;
-(void)dealloc;
-(void)endCurrentSequence;
-(void)registerPressDownWithTimeStamp:(CGFloat)arg0 ;
-(void)registerPressUpWithTimeStamp:(CGFloat)arg0 ;


@end


#endif
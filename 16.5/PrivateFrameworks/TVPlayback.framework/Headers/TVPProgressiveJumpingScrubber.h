// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVPPROGRESSIVEJUMPINGSCRUBBER_H
#define TVPPROGRESSIVEJUMPINGSCRUBBER_H

@class NSTimer;

#import <Foundation/Foundation.h>

#import "TVPPlayer.h"

@interface TVPProgressiveJumpingScrubber : NSObject

@property (nonatomic) CGFloat nextSkipAdjustTime; // ivar: _nextSkipAdjustTime
@property (weak, nonatomic) TVPPlayer *player; // ivar: _player
@property (nonatomic) CGFloat rate; // ivar: _rate
@property (nonatomic) CGFloat skipAdjustPeriod; // ivar: _skipAdjustPeriod
@property (nonatomic) CGFloat skipAdjustTime; // ivar: _skipAdjustTime
@property (nonatomic) NSUInteger skipCount; // ivar: _skipCount
@property (retain, nonatomic) NSTimer *skipTimer; // ivar: _skipTimer


-(CGFloat)_nextTimeToAdvanceFromTime:(CGFloat)arg0 ;
-(void)_skipTimerFired:(id)arg0 ;
-(void)cancelScrub;
-(void)startScrubWithRate:(CGFloat)arg0 ;


@end


#endif
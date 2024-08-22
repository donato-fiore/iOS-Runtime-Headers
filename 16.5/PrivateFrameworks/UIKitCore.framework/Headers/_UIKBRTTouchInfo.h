// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKBRTTOUCHINFO_H
#define _UIKBRTTOUCHINFO_H

@class UIKBRTObject;
@protocol OS_dispatch_queue;


#import "_UIKBRTTouchInfo.h"
#import "_UIKBRTTimerBlock.h"

@interface _UIKBRTTouchInfo : UIKBRTObject

@property (readonly, nonatomic) CGFloat currentTimestamp; // ivar: _currentTimestamp
@property (readonly, nonatomic) CGPoint currentTouchPoint; // ivar: _currentTouchPoint
@property (nonatomic) char currentTouchState; // ivar: _currentTouchState
@property (readonly, nonatomic) CGFloat currentZGradient; // ivar: _currentZGradient
@property (readonly, nonatomic) CGFloat maximumRadius; // ivar: _maximumRadius
@property (readonly, nonatomic) _UIKBRTTouchInfo *nextTouch;
@property (readonly, nonatomic) CGFloat originalTimestamp; // ivar: _originalTimestamp
@property (readonly, nonatomic) CGPoint originalTouchPoint; // ivar: _originalTouchPoint
@property (readonly, nonatomic) CGFloat originalZGradient; // ivar: _originalZGradient
@property (nonatomic) char preRuleTouchState; // ivar: _preRuleTouchState
@property (readonly, nonatomic) _UIKBRTTouchInfo *previousTouch;
@property (readonly, nonatomic) _UIKBRTTimerBlock *timer; // ivar: _timer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *timerQueue; // ivar: _timerQueue
@property (readonly, nonatomic) id *touchIdentifier; // ivar: _touchIdentifier


+(id)createTouchInfoForTouch:(id)arg0 withIdentifier:(id)arg1 canLogTouch:(BOOL)arg2 ;
+(id)touchDict;
+(id)touchInfoForTouch:(id)arg0 withIdentifier:(id)arg1 ;
+(void)setTouchInfo:(id)arg0 forIdentifier:(id)arg1 ;
-(BOOL)willChangeTouchInfo:(id)arg0 toState:(char)arg1 ;
-(id)initWithTouch:(id)arg0 withIdentifier:(id)arg1 canLogTouch:(BOOL)arg2 ;
-(id)setOfTouchesToIgnoreWhenSettingTouchInfo:(id)arg0 toState:(char)arg1 ;
-(void)cleanup;
-(void)dealloc;
-(void)fireTimerNow;
-(void)invalidateTimer;
-(void)updateTouch:(id)arg0 ;


@end


#endif
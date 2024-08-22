// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFDEVICEBLOCKTIMER_H
#define SBFDEVICEBLOCKTIMER_H

@class NSString, NSTimer;
@protocol SBFBlockStatusProvider;

#import <Foundation/Foundation.h>


@interface SBFDeviceBlockTimer : NSObject

@property (retain, nonatomic, setter=_setBlockStatusProvider:) NSObject<SBFBlockStatusProvider> *blockStatusProvider; // ivar: _blockStatusProvider
@property (nonatomic, getter=_isEnabled, setter=_setEnabled:) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (copy, nonatomic) NSString *primaryActionButtonText; // ivar: _primaryActionButtonText
@property (copy, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (copy, nonatomic) NSString *timeoutText; // ivar: _timeoutText
@property (retain, nonatomic, setter=_setTimer:) NSTimer *timer; // ivar: _timer
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText
@property (nonatomic, getter=isUserRequestedEraseEnabled) BOOL userRequestedEraseEnabled; // ivar: _userRequestedEraseEnabled


-(id)initWithDeviceBlockStatusProvider:(id)arg0 ;
-(void)_clearTimer;
-(void)_scheduleTimerIfNecessaryAndUpdateState;
-(void)dealloc;
-(void)invalidate;
-(void)start;


@end


#endif
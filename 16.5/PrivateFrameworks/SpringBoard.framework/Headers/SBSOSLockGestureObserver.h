// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSOSLOCKGESTUREOBSERVER_H
#define SBSOSLOCKGESTUREOBSERVER_H

@class BSAction, NSString;
@protocol SBPressSequenceRecognizerDelegate, SBSOSLockGestureObserverDelegate;

#import <Foundation/Foundation.h>

#import "SBPressSequenceRecognizer.h"
#import "SBPressSequenceValidator.h"
#import "SBPressSequenceSettings.h"
#import "SBPressSequenceObserver.h"

@interface SBSOSLockGestureObserver : NSObject <SBPressSequenceRecognizerDelegate>

 {
    SBPressSequenceRecognizer *_recognizer;
    SBPressSequenceValidator *_validator;
    SBPressSequenceSettings *_settings;
    BOOL _lastKnownActiveState;
    BSAction *_triggerAction;
}


@property (readonly, nonatomic) NSInteger configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSOSLockGestureObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isGestureLoggingEnabled) BOOL gestureLoggingEnabled; // ivar: _gestureLoggingEnabled
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isSOSEnabled, setter=setSOSEnabled:) BOOL sosEnabled; // ivar: _sosEnabled
@property (retain, nonatomic) SBPressSequenceObserver *sosLockPressSequenceObserver; // ivar: _sosLockPressSequenceObserver
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger triggerMechanism;


-(CGFloat)_intervalThatSucceeds;
-(CGFloat)_watchdogInterval;
-(NSUInteger)_numberOfPressesThatActivate;
-(NSUInteger)_numberOfPressesThatTrigger;
-(id)_validator;
-(id)init;
-(id)initWithConfiguration:(NSInteger)arg0 ;
-(void)_configure;
-(void)_configureSettings;
-(void)_noteTriggerActionRecievedResponse;
-(void)_noteTriggerDidBecomeActive;
-(void)_noteTriggerDidBecomeInactive;
-(void)_setRecognizer:(id)arg0 ;
-(void)noteDidBeginSOSWithUUID:(id)arg0 ;
-(void)pressSequenceRecognizer:(id)arg0 didBeginPressDownAtIndex:(NSUInteger)arg1 ;
-(void)pressSequenceRecognizerDidCompleteSequence:(id)arg0 ;
-(void)pressSequenceRecognizerDidFail:(id)arg0 ;
-(void)registerPressDownWithTimestamp:(CGFloat)arg0 ;
-(void)registerPressUpWithTimestamp:(CGFloat)arg0 ;
-(void)resetWithNewConfiguration:(NSInteger)arg0 ;


@end


#endif
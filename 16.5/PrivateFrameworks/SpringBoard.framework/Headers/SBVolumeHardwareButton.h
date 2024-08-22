// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBVOLUMEHARDWAREBUTTON_H
#define SBVOLUMEHARDWAREBUTTON_H

@class UIGestureRecognizer, NSString, NSHashTable;
@protocol UIGestureRecognizerDelegate, SBPressPrecedenceArbiter;

#import <Foundation/Foundation.h>

#import "SBPressGestureRecognizer.h"
#import "SBVolumeHardwareButtonActions.h"
#import "SBPressSequenceObserver.h"

@interface SBVolumeHardwareButton : NSObject <UIGestureRecognizerDelegate, SBPressPrecedenceArbiter>

 {
    NSUInteger _volumeUpAggdStartTime;
    NSUInteger _volumeDownAggdStartTime;
    NSInteger _homeButtonType;
    SBPressGestureRecognizer *_volumeIncreaseButtonPressGestureRecognizer;
    SBPressGestureRecognizer *_volumeDecreaseButtonPressGestureRecognizer;
    UIGestureRecognizer *_screenshotGestureRecognizer;
    UIGestureRecognizer *_shutdownGestureRecognizer;
}


@property (readonly, nonatomic) SBVolumeHardwareButtonActions *buttonActions; // ivar: _buttonActions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBPressSequenceObserver *volumeDecreaseSequenceObserver; // ivar: _volumeDecreaseSequenceObserver
@property (readonly, nonatomic) SBPressSequenceObserver *volumeIncreaseSequenceObserver; // ivar: _volumeIncreaseSequenceObserver
@property (weak, nonatomic) NSHashTable *volumePressBandits; // ivar: _volumePressBandits


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithScreenshotGestureRecognizer:(id)arg0 shutdownGestureRecognizer:(id)arg1 homeButtonType:(NSInteger)arg2 ;
-(id)preemptablePressGestureRecognizers;
-(void)_aggdLogVolumeDecreaseButtonDown:(BOOL)arg0 ;
-(void)_aggdLogVolumeIncreaseButtonDown:(BOOL)arg0 ;
-(void)_createGestureRecognizers;
-(void)_logVolumeButtonWithObserver:(id)arg0 down:(BOOL)arg1 ;
-(void)addVolumePressBandit:(id)arg0 ;
-(void)cancelVolumePress;
-(void)removeVolumePressBandit:(id)arg0 ;
-(void)volumeDecreasePress:(id)arg0 ;
-(void)volumeIncreasePress:(id)arg0 ;


@end


#endif
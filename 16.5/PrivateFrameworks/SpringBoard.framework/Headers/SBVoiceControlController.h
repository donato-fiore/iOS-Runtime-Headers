// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBVOICECONTROLCONTROLLER_H
#define SBVOICECONTROLCONTROLLER_H

@class NSArray, SiriLongPressButtonSource, NSString;
@protocol SBVoiceControlTransientOverlayViewControllerDelegate, SiriAssertion;

#import <Foundation/Foundation.h>

#import "SBVoiceControlTransientOverlayViewController.h"

@interface SBVoiceControlController : NSObject <SBVoiceControlTransientOverlayViewControllerDelegate>

 {
    BOOL _delayedAssistantActivationPending;
    BOOL _headsetDownDelayedActionPerformed;
    NSArray *_nextRecognitionAudioInputPaths;
    SBVoiceControlTransientOverlayViewController *_transientOverlayViewController;
    SiriLongPressButtonSource *_siriHeadsetDeviceSource;
    id<SiriAssertion> *_siriPreheatAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_shouldEnterVoiceControl;
-(BOOL)handleHeadsetButtonUp;
-(BOOL)handleHeadsetButtonUpNotInCall;
-(BOOL)handleHomeButtonHeld;
-(BOOL)isVisible;
-(id)_newVoiceControlTransientOverlayViewControllerWithSource:(id)arg0 ;
-(id)init;
-(id)siriBluetoothDeviceSource:(id)arg0 ;
-(void)_assistantActivationSettingsDidChange:(id)arg0 ;
-(void)_cancelDelayedHeadsetAction;
-(void)_performDelayedHeadsetActionForAssistant;
-(void)_performDelayedHeadsetActionForVoiceControl;
-(void)_prepareDelayedHeadsetAction;
-(void)_spokenLanguageDidChange:(id)arg0 ;
-(void)_updateNextRecognitionAudioInputPaths:(id)arg0 ;
-(void)bluetoothDeviceEndedVoiceControl:(id)arg0 ;
-(void)bluetoothDeviceInitiatedVoiceControl:(id)arg0 ;
-(void)configureVoiceControl;
-(void)dismissTransientOverlay;
-(void)handleHeadsetButtonDownWithClickCount:(NSUInteger)arg0 ;
-(void)headsetAvailabilityChanged;
-(void)voiceControlTransientOverlayViewControllerDidDisappear:(id)arg0 ;
-(void)voiceControlTransientOverlayViewControllerRequestsDismissal:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLALERTSYSTEMSOUNDCONTROLLER_H
#define TLALERTSYSTEMSOUNDCONTROLLER_H

@class NSMapTable, NSString;
@protocol TLBacklightObserver, TLAlertPlaybackBackEndController;

#import <Foundation/Foundation.h>

#import "TLAudioQueue.h"

@interface TLAlertSystemSoundController : NSObject <TLBacklightObserver, TLAlertPlaybackBackEndController>

 {
    TLAudioQueue *_audioQueue;
    os_unfair_lock_s _lock;
    NSMapTable *_alertSystemSoundContexts;
    NSInteger _backlightStatus;
    NSUInteger _backlightObservationRequestsCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_descriptionForAlertComponentsSuppressionFlags:(unsigned int)arg0 ;
+(id)_optionsForSystemSoundAlert:(id)arg0 withSound:(id)arg1 ;
+(id)_soundForAlert:(id)arg0 toneIdentifierForDeemphasizingAlert:(id)arg1 ;
+(id)_toneIdentifierForDeemphasizingAlert:(id)arg0 ;
+(id)_vibrationPatternForAlert:(id)arg0 withSound:(id)arg1 ;
+(unsigned int)_componentSuppressionFlagsForAlert:(id)arg0 ;
+(unsigned int)_soundBehaviorForAlert:(id)arg0 withSound:(id)arg1 ;
-(BOOL)stopPlayingAlerts:(id)arg0 withOptions:(id)arg1 playbackCompletionType:(NSInteger)arg2 ;
-(id)_playTaskDescriptorForAlert:(id)arg0 withSound:(id)arg1 alertSystemSoundContext:(id)arg2 ;
-(id)_prepareForPreemptingAlertsBeforeBeginningPlaybackOfAlert:(id)arg0 withSound:(id)arg1 playbackCompletionType:(NSInteger)arg2 ;
-(id)_prepareForStoppingAlerts:(id)arg0 withOptions:(id)arg1 playbackCompletionType:(NSInteger)arg2 ;
-(id)init;
-(struct ? )_considerDeferringPlayingAlertForBacklightStatusResolution:(id)arg0 alertSystemSoundContext:(id)arg1 ;
-(void)_beginRequiringBacklightObservationForAlert:(id)arg0 alertSystemSoundContext:(id)arg1 ;
-(void)_didCompletePlaybackForAlert:(id)arg0 ;
-(void)_endRequiringBacklightObservationForAlert:(id)arg0 alertSystemSoundContext:(id)arg1 ;
-(void)_playAlert:(id)arg0 alertSystemSoundContext:(id)arg1 toneIdentifierForDeemphasizingAlert:(id)arg2 backlightStatusResolutionDeferralContext:(struct ? )arg3 ;
-(void)_preheatForAlert:(id)arg0 backlightStatus:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)_processDeemphasizableAlertChangesForBackglightStatus:(NSInteger)arg0 stopTasksDescriptorForDeemphasizedAlerts:(id)arg1 deemphasizableAlertBeginPlayingContexts:(id)arg2 ;
-(void)_processPlayTaskDescriptors:(id)arg0 ;
-(void)_processPlaybackCompletionContexts:(id)arg0 ;
-(void)_processStopTasksDescriptor:(id)arg0 ;
-(void)_removeAlert:(id)arg0 alertSystemSoundContext:(id)arg1 didFailToPrepareSound:(BOOL)arg2 appendingPlaybackCompletionContextToArray:(id)arg3 ;
-(void)backlightStatusDidChange:(NSInteger)arg0 ;
-(void)dealloc;
-(void)playAlert:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)preheatForAlert:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLALERTQUEUEPLAYERSTATEDESCRIPTOR_H
#define TLALERTQUEUEPLAYERSTATEDESCRIPTOR_H


#import <Foundation/Foundation.h>

#import "TLAlert.h"

@interface TLAlertQueuePlayerStateDescriptor : NSObject {
    BOOL _hasInvokedCompletionHandlerForPlayingAlert;
}


@property (nonatomic, getter=isAlertActivationAssertionAcquired) BOOL alertActivationAssertionAcquired; // ivar: _isAlertActivationAssertionAcquired
@property (retain, nonatomic) TLAlert *alertForAudioEnvironmentSetup; // ivar: _alertForAudioEnvironmentSetup
@property (readonly, nonatomic) TLAlert *playingAlert; // ivar: _playingAlert
@property (readonly, nonatomic) id *playingAlertCompletionHandler; // ivar: _playingAlertCompletionHandler


-(id)_descriptionForDebugging:(BOOL)arg0 ;
-(id)_initForRelinquishingActivationAssertionWithAlertForAudioEnvironmentSetup:(id)arg0 previousStateDescriptor:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)initForAcquiringActivationAssertionWithAlertForAudioEnvironmentSetup:(id)arg0 previousStateDescriptor:(id)arg1 ;
// -(id)initWithPlayingAlert:(id)arg0 completionHandler:(id)arg1 previousStateDescriptor:(unk)arg2  ;
-(id)stateDescriptorByRelinquishingActivationAssertion;
-(id)stateDescriptorForCompletedPlayback;
-(void)_transferPlayingAlertAndCompletionHandlerFromPreviousStateDescriptor:(id)arg0 ;
-(void)invokePlayingAlertCompletionHandlerWithPlaybackCompletionType:(NSInteger)arg0 error:(id)arg1 ;


@end


#endif
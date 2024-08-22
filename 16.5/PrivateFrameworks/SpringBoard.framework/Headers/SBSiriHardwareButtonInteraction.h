// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSIRIHARDWAREBUTTONINTERACTION_H
#define SBSIRIHARDWAREBUTTONINTERACTION_H

@class NSString, SiriLongPressButtonSource;
@protocol SiriLongPressButtonSourceDelegate, SBHardwareButtonInteraction, SiriAssertion;


#import "SBHardwareButtonGestureParametersProviderBase.h"

@interface SBSiriHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SiriLongPressButtonSourceDelegate, SBHardwareButtonInteraction>



@property (nonatomic) CGFloat activationInterval; // ivar: _activationInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initialPressDownTime; // ivar: _initialPressDownTime
@property (retain, nonatomic) SiriLongPressButtonSource *siriActivationSource; // ivar: _siriActivationSource
@property (retain, nonatomic) NSObject<SiriAssertion> *siriButtonDownAssertion; // ivar: _siriButtonDownAssertion
@property (nonatomic) NSInteger siriButtonIdentifier; // ivar: _siriButtonIdentifier
@property (retain, nonatomic) NSObject<SiriAssertion> *siriPreheatAssertion; // ivar: _siriPreheatAssertion
@property (readonly) Class superclass;


+(BOOL)dismissSiriTransientOverlayOnSinglePressUp:(NSInteger)arg0 ;
+(id)hardwareButtonInteractionForHomeButton;
+(id)hardwareButtonInteractionForLockButton;
+(id)hardwareButtonInteractionForVoiceCommandButton;
-(BOOL)consumeInitialPressDown;
-(BOOL)consumeLongPress;
-(BOOL)consumeSinglePressUp;
-(id)hardwareButtonGestureParameters;
-(id)initWithSiriButton:(NSInteger)arg0 ;
-(void)_cancelAllSiriActions;
-(void)_cancelPreheating;
-(void)_preheatSiriForPresentationAfterInterval:(CGFloat)arg0 ;
-(void)_siriHomeButtonPrefsDidChange:(id)arg0 ;
-(void)configurationDidUpdateOnLongPressSource:(id)arg0 ;
-(void)observeFinalPressUp;
-(void)observeLongPressCanceled;


@end


#endif
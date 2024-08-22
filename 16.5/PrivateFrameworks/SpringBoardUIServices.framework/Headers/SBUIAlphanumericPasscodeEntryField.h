// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUIALPHANUMERICPASSCODEENTRYFIELD_H
#define SBUIALPHANUMERICPASSCODEENTRYFIELD_H

@class UIView, UITextInputTraits;


#import "SBUIPasscodeEntryField.h"

@interface SBUIAlphanumericPasscodeEntryField : SBUIPasscodeEntryField {
    UIView *_springView;
    UIView *_springViewParent;
}


@property (readonly, weak, nonatomic) UITextInputTraits *textInputTraits;


-(id)initWithDefaultSizeAndLightStyle:(BOOL)arg0 ;
-(struct CGSize )_viewSize;
-(void)_autofillForBiometricAuthenticationWithCompletion:(id)arg0 ;
-(void)_resetForFailedPasscode:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)notePasscodeFieldTextDidChange;


@end


#endif
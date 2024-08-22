// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUILONGNUMERICPASSCODEENTRYFIELD_H
#define SBUILONGNUMERICPASSCODEENTRYFIELD_H

@class UIView, UIButton, UILabel;


#import "SBUINumericPasscodeEntryFieldBase.h"

@interface SBUILongNumericPasscodeEntryField : SBUINumericPasscodeEntryFieldBase {
    BOOL _firstResponder;
    UIView *_springView;
    UIView *_springViewParent;
}


@property (readonly, nonatomic) UIButton *okButton; // ivar: _okButton
@property (readonly, nonatomic) UILabel *promptLabel; // ivar: _promptLabel
@property (nonatomic) BOOL showsOkButton; // ivar: _showsOkButton
@property (nonatomic) BOOL showsPromptLabel; // ivar: _showsPromptLabel


+(BOOL)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;
+(BOOL)_usesTextFieldForFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithDefaultSizeAndLightStyle:(BOOL)arg0 ;
-(struct CGSize )_viewSize;
-(void)_autofillForBiometricAuthenticationWithCompletion:(id)arg0 ;
-(void)_getPasscodeFieldSize:(struct CGSize *)arg0 okButtonSize:(struct CGSize *)arg1 ;
-(void)_handleKeyUIEvent:(id)arg0 ;
-(void)_resetForFailedPasscode:(BOOL)arg0 ;
-(void)layoutSubviews;


@end


#endif
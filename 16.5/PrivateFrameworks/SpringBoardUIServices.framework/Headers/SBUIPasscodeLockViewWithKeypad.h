// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUIPASSCODELOCKVIEWWITHKEYPAD_H
#define SBUIPASSCODELOCKVIEWWITHKEYPAD_H

@class NSString, UILabel;
@protocol SBUIPasscodeLockNumberPadDelegate, SBUIPasscodeEntryFieldDelegate;


#import "SBUIPasscodeLockViewBase.h"
#import "SBUIPasscodeLockNumberPad.h"

@interface SBUIPasscodeLockViewWithKeypad : SBUIPasscodeLockViewBase <SBUIPasscodeLockNumberPadDelegate, SBUIPasscodeEntryFieldDelegate>

 {
    SBUIPasscodeLockNumberPad *_numberPad;
    BOOL _useLightStyle;
    BOOL _hasPerformedLayoutOnce;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *lastCharacterBeforeBackspace; // ivar: _lastCharacterBeforeBackspace
@property (retain, nonatomic) UILabel *statusSubtitleView; // ivar: _statusSubtitleView
@property (retain, nonatomic) UILabel *statusTitleView; // ivar: _statusTitleView
@property (readonly) Class superclass;
@property (nonatomic, getter=_undoInputOnTouchCancellation, setter=_setUndoInputOnTouchCancellation:) BOOL undoInputOnTouchCancellation; // ivar: _undoInputOnTouchCancellation


-(BOOL)_includesStatusView;
-(BOOL)_usesLightStyle;
-(BOOL)passcodeEntryField:(id)arg0 shouldInsertText:(id)arg1 ;
-(CGFloat)_entryFieldBottomYDistanceFromNumberPadTopButton;
-(CGFloat)_offsetForCenteringTitleAndEntryFieldFrame:(struct CGRect )arg0 withTopYvalue:(CGFloat)arg1 bottomYvalue:(CGFloat)arg2 ;
-(CGFloat)_statusTitleWidth;
-(id)_newEntryField;
-(id)_newStatusSubtitleView;
-(id)_newStatusTitleView;
-(id)_numberPad;
-(id)_numericEntryFieldIfExists;
-(id)init;
-(id)initWithLightStyle:(BOOL)arg0 ;
-(id)passcode;
-(struct CGRect )_defaultEntryFieldPosition;
-(void)_layoutEntryField;
-(void)_layoutStatusView;
-(void)_noteBackspaceHit;
-(void)_noteKeyUp:(id)arg0 ;
-(void)_noteStringEntered:(id)arg0 eligibleForPlayingSounds:(BOOL)arg1 ;
-(void)_notifyDelegatePasscodeCancelled;
-(void)_notifyDelegatePasscodeEntered;
-(void)_setHasInput:(BOOL)arg0 ;
-(void)_toggleForStatusField;
-(void)_updateFonts;
-(void)dealloc;
-(void)layoutSubviews;
-(void)passcodeEntryFieldDidAcceptEntry:(id)arg0 ;
-(void)passcodeEntryFieldDidCancelEntry:(id)arg0 ;
-(void)passcodeEntryFieldTextDidChange:(id)arg0 ;
-(void)passcodeLockNumberPad:(id)arg0 keyCancelled:(id)arg1 ;
-(void)passcodeLockNumberPad:(id)arg0 keyDown:(id)arg1 ;
-(void)passcodeLockNumberPad:(id)arg0 keyUp:(id)arg1 ;
-(void)passcodeLockNumberPadBackspaceButtonHit:(id)arg0 ;
-(void)passcodeLockNumberPadCancelButtonHit:(id)arg0 ;
-(void)passcodeLockNumberPadEmergencyCallButtonHit:(id)arg0 ;
-(void)reset;
-(void)resetForFailedPasscode;
-(void)setKeypadVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setShowsCancelButton:(BOOL)arg0 ;
-(void)setShowsEmergencyCallButton:(BOOL)arg0 ;
-(void)setShowsStatusField:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateForTransitionToPasscodeView:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateStatusText:(id)arg0 subtitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)willTransitionToPasscodeView;


@end


#endif
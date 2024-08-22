// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSETPINVIEWCONTROLLER_H
#define TPSETPINVIEWCONTROLLER_H

@class UIViewController, UIView, NSString, UILabel;
@protocol TPSimpleNumberPadDelegate, TPSetPINViewControllerDelegate;


#import "TPSimpleNumberPad.h"
#import "TPPasscodeView.h"

@interface TPSetPINViewController : UIViewController <TPSimpleNumberPadDelegate>



@property BOOL confirmPIN; // ivar: _confirmPIN
@property (retain) UIView *customBackgroundView; // ivar: _customBackgroundView
@property NSObject<TPSetPINViewControllerDelegate> *delegate; // ivar: _delegate
@property int initialState; // ivar: _initialState
@property unsigned int maxPINLength; // ivar: _maxPINLength
@property unsigned int minPINLength; // ivar: _minPINLength
@property (retain) TPSimpleNumberPad *numberPad; // ivar: _numberPad
@property (retain) NSString *oldPIN; // ivar: _oldPIN
@property (retain) TPPasscodeView *passcodeView; // ivar: _passcodeView
@property (retain, nonatomic) NSString *promptTextForConfirmingNewPIN; // ivar: _promptTextForConfirmingNewPIN
@property (retain, nonatomic) NSString *promptTextForNewPIN; // ivar: _promptTextForNewPIN
@property (retain, nonatomic) NSString *promptTextForOldPIN; // ivar: _promptTextForOldPIN
@property (retain, nonatomic) NSString *promptTextForSavingPIN; // ivar: _promptTextForSavingPIN
@property (nonatomic) int state; // ivar: _state
@property (retain) UILabel *statusLabel; // ivar: _statusLabel
@property (retain) NSString *unconfirmedPIN; // ivar: _unconfirmedPIN


-(BOOL)wantsFullScreenLayout;
-(id)_initForMinLength:(unsigned int)arg0 maxLength:(unsigned int)arg1 confirmPIN:(BOOL)arg2 ;
-(id)init;
-(id)initForChangePINWithMinLength:(unsigned int)arg0 maxLength:(unsigned int)arg1 confirmPIN:(BOOL)arg2 ;
-(id)initForNewPINWithMinLength:(unsigned int)arg0 maxLength:(unsigned int)arg1 confirmPIN:(BOOL)arg2 ;
-(void)_cancelButtonTapped;
-(void)_doneButtonTapped;
-(void)_updateDeleteAllowed;
-(void)_updateNavBarButtons;
-(void)_updateStatusLabel;
-(void)_updateUIForStateChange;
-(void)dealloc;
-(void)loadView;
-(void)resetWithErrorPrompt:(id)arg0 ;
-(void)resetWithErrorPrompt:(id)arg0 title:(id)arg1 ;
-(void)simpleNumberPad:(id)arg0 buttonPressedWithCharacter:(id)arg1 ;
-(void)simpleNumberPadDeletePressed:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTUITURNONSIRIVIEW_H
#define VTUITURNONSIRIVIEW_H

@class NSArray, UIView, UIButton, NSString;
@protocol UITextViewDelegate, VTUITurnOnSiriViewDelegate;


#import "VTUIEnrollmentBaseView.h"

@interface VTUITurnOnSiriView : VTUIEnrollmentBaseView <UITextViewDelegate>

 {
    NSArray *_siriLanguages;
    UIView *_footerView;
}


@property (readonly, nonatomic) UIButton *continueButton; // ivar: _continueButton
@property (readonly, nonatomic) NSArray *continueButtons; // ivar: _continueButtons
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIButton *laterButton; // ivar: _laterButton
@property (weak, nonatomic) NSObject<VTUITurnOnSiriViewDelegate> *stateViewDelegate; // ivar: _stateViewDelegate
@property (readonly) Class superclass;


-(BOOL)showPrivacyTextView;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)footerView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)languageSelectionOfContinueButton:(id)arg0 ;
-(void)_setupContent;
-(void)_setupTurnOnSiriUI;
-(void)layoutSubviews;
-(void)prepareForLastTimeShown;


@end


#endif
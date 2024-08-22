// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRKEYBOARDVIEW_H
#define TVRKEYBOARDVIEW_H

@class UIView, TVRCKeyboardAttributes, RTIInputSystemSourceSession, NSString, UIButton, UIVisualEffectView, UINavigationBar;
@protocol UITextFieldDelegate, RTIInputSystemPayloadDelegate, TVRKeyboardViewDelegate;


#import "_TVRTextField.h"

@interface TVRKeyboardView : UIView <UITextFieldDelegate, RTIInputSystemPayloadDelegate>



@property (retain, nonatomic) TVRCKeyboardAttributes *attributes; // ivar: _attributes
@property (retain, nonatomic) RTIInputSystemSourceSession *currentSourceSession; // ivar: _currentSourceSession
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVRKeyboardViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIButton *dictationButton; // ivar: _dictationButton
@property (retain, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UINavigationBar *navigationBar; // ivar: _navigationBar
@property (retain, nonatomic) UIView *separator; // ivar: _separator
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) _TVRTextField *textField; // ivar: _textField
@property (retain, nonatomic) UIView *textFieldWrapper; // ivar: _textFieldWrapper
@property (copy, nonatomic) NSString *title;


-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_cancelButton:(id)arg0 ;
-(void)_dictationButtonReleased:(id)arg0 ;
-(void)_dictationButtonTapped:(id)arg0 ;
-(void)_textDidChange:(id)arg0 ;
-(void)enableDictationButton:(BOOL)arg0 ;
-(void)handleTextActionPayload:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIFULLSCREENREDEEMCAMERAVIEW_H
#define SKUIFULLSCREENREDEEMCAMERAVIEW_H

@class UIView, _UIBackdropView, NSString, UIImage;
@protocol UITextFieldDelegate, SKUIRedeemCameraViewDelegate;


#import "SKUIRedeemTextField.h"

@interface SKUIFullscreenRedeemCameraView : UIView <UITextFieldDelegate>

 {
    UIView *_overlay;
    UIView *_redeemerView;
    SKUIRedeemTextField *_textField;
    _UIBackdropView *_textFieldSafeAreaBackdrop;
    CGRect _keyboardRect;
    BOOL _enabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIRedeemCameraViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;


-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)_newTextFieldWithClientContext:(id)arg0 ;
-(id)initWithClientContext:(id)arg0 ;
-(void)_hideKeyboard;
-(void)_pauseRedeemer;
-(void)_resumeRedeemer;
-(void)_tapGestureAction:(id)arg0 ;
-(void)dealloc;
-(void)keyboardDidHide:(id)arg0 ;
-(void)keyboardDidShow:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)layoutSubviews;
-(void)showKeyboard;
-(void)start;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)textFieldTextDidChange:(id)arg0 ;


@end


#endif
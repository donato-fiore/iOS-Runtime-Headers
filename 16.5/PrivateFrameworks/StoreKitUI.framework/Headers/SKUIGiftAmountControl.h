// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIGIFTAMOUNTCONTROL_H
#define SKUIGIFTAMOUNTCONTROL_H

@class UIControl, NSMutableArray, UIView, UITextField, NSString;
@protocol UITextFieldDelegate;


#import "SKUIGiftConfiguration.h"

@interface SKUIGiftAmountControl : UIControl <UITextFieldDelegate>

 {
    NSMutableArray *_amountButtons;
    UIView *_customAmountBackgroundView;
    UITextField *_customAmountField;
    SKUIGiftConfiguration *_giftConfiguration;
    NSInteger _selectedAmount;
    NSInteger _trackingAmount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger selectedAmount;
@property (readonly, nonatomic) NSString *selectedAmountString;
@property (readonly) Class superclass;


-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithGiftConfiguration:(id)arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_layoutForPad;
-(void)_layoutForPhone;
-(void)_reloadSelectedButton;
-(void)_textFieldDidBeginEditing:(id)arg0 ;
-(void)_textFieldDidChange:(id)arg0 ;
-(void)_textFieldDidEndEditing:(id)arg0 ;
-(void)_updateButtonsWithTouch:(id)arg0 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)dealloc;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUITEXTFIELDSETTINGDESCRIPTIONVIEW_H
#define SKUITEXTFIELDSETTINGDESCRIPTIONVIEW_H

@class UILabel, UITextField, NSString;
@protocol UITextFieldDelegate;


#import "SKUIFieldSettingDescriptionView.h"
#import "SKUIInputViewElement.h"
#import "SKUIFieldSettingDescription.h"

@interface SKUITextFieldSettingDescriptionView : SKUIFieldSettingDescriptionView <UITextFieldDelegate>

 {
    CGFloat _aggregateLabelWidth;
    SKUIInputViewElement *_inputViewElement;
    UILabel *_label;
    SKUIFieldSettingDescription *_settingDescription;
    UITextField *_textField;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForSettingDescription:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(struct CGSize )preferredSizeForSettingDescription:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 settingDescription:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForSettingDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)_currentControllerValue;
-(void)_addInputWithElement:(id)arg0 ;
-(void)_addLabelWithElement:(id)arg0 ;
-(void)_addTextInputWithElement:(id)arg0 ;
-(void)_alignView:(id)arg0 withBaselineLabel:(id)arg1 font:(id)arg2 offsetX:(CGFloat)arg3 fitWidth:(CGFloat)arg4 ;
-(void)_arrangeTextField:(id)arg0 andLabel:(id)arg1 ;
-(void)_fillLayoutWithView:(id)arg0 labelForBaselinePosition:(id)arg1 ;
-(void)_updateTextFieldValue:(id)arg0 ;
-(void)beginEdits;
-(void)commitEdits;
-(void)layoutSubviews;
-(void)reloadWithSettingDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif
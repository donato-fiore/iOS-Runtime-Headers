// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISUBMITFIELDSETTINGDESCRIPTIONVIEW_H
#define SKUISUBMITFIELDSETTINGDESCRIPTIONVIEW_H

@class UILabel;


#import "SKUIFieldSettingDescriptionView.h"
#import "SKUIInputViewElement.h"
#import "SKUIFieldSettingDescription.h"

@interface SKUISubmitFieldSettingDescriptionView : SKUIFieldSettingDescriptionView {
    CGFloat _aggregateLabelWidth;
    SKUIInputViewElement *_inputViewElement;
    UILabel *_label;
    SKUIFieldSettingDescription *_settingDescription;
}




+(BOOL)prefetchResourcesForSettingDescription:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(struct CGSize )preferredSizeForSettingDescription:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 settingDescription:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForSettingDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(id)_currentControllerValue;
-(void)_addInputWithElement:(id)arg0 ;
-(void)_addSubmitInputWithElement:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadWithSettingDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)tintColorDidChange;


@end


#endif
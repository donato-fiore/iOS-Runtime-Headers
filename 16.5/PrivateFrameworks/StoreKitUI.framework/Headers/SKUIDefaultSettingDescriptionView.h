// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIDEFAULTSETTINGDESCRIPTIONVIEW_H
#define SKUIDEFAULTSETTINGDESCRIPTIONVIEW_H

@class UIView;


#import "SKUISettingDescriptionView.h"
#import "SKUIViewReuseView.h"

@interface SKUIDefaultSettingDescriptionView : SKUISettingDescriptionView {
    BOOL _hasDisclosureChevron;
    UIEdgeInsets _padding;
    UIView *_viewElementView;
    SKUIViewReuseView *_viewReuseView;
}




+(BOOL)prefetchResourcesForSettingDescription:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(struct CGSize )preferredSizeForSettingDescription:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 settingDescription:(id)arg1 context:(id)arg2 ;
+(struct UIEdgeInsets )_paddingForStyle:(id)arg0 ;
+(void)requestLayoutForSettingDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)hasDisclosureChevron;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(void)layoutSubviews;
-(void)reloadWithSettingDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif
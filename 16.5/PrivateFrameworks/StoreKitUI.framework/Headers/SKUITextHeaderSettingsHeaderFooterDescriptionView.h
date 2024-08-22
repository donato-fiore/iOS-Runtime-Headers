// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUITEXTHEADERSETTINGSHEADERFOOTERDESCRIPTIONVIEW_H
#define SKUITEXTHEADERSETTINGSHEADERFOOTERDESCRIPTIONVIEW_H

@class UILabel;


#import "SKUISettingsHeaderFooterDescriptionView.h"
#import "SKUIViewElement.h"

@interface SKUITextHeaderSettingsHeaderFooterDescriptionView : SKUISettingsHeaderFooterDescriptionView {
    UILabel *_label;
    SKUIViewElement *_viewElement;
}




+(BOOL)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(id)_concatenateTextFromLabelElements:(id)arg0 ;
+(id)_labelElementsFromViewElement:(id)arg0 ;
+(id)_labelWithLabelElements:(id)arg0 ;
+(struct CGSize )preferredSizeForSettingsHeaderFooterDescription:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 settingsHeaderFooterDescription:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForSettingsHeaderFooterDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(void)layoutSubviews;
-(void)reloadWithSettingsHeaderFooterDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;


@end


#endif
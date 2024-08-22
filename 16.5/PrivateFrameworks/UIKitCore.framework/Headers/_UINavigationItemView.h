// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UINAVIGATIONITEMVIEW_H
#define _UINAVIGATIONITEMVIEW_H



#import "UIView.h"
#import "UINavigationItem.h"
#import "UILabel.h"

@interface _UINavigationItemView : UIView {
    UINavigationItem *_item;
    CGSize _titleSize;
    UIView *_topCrossView;
    UIView *_bottomCrossView;
    BOOL _isCrossFading;
    BOOL _customFontSet;
    UILabel *_label;
}


@property (nonatomic, setter=_setFadingInFromCustomAlpha:) BOOL _isFadingInFromCustomAlpha; // ivar: __isFadingInFromCustomAlpha


-(BOOL)titleAutoresizesToFit;
-(CGFloat)_titleYAdjustmentCustomization;
-(id)_currentTextColorForBarStyle:(NSInteger)arg0 ;
-(id)_currentTextShadowColorForBarStyle:(NSInteger)arg0 ;
-(id)_defaultFont;
-(id)description;
-(id)font;
-(id)initWithNavigationItem:(id)arg0 ;
-(id)navigationItem;
-(id)title;
-(struct CGRect )_labelFrame;
-(struct CGSize )_currentTextShadowOffsetForBarStyle:(NSInteger)arg0 ;
-(struct CGSize )_titleSize;
-(void)_cleanUpCrossView;
-(void)_crossFadeHiddingButton:(BOOL)arg0 ;
-(void)_prepareCrossViewsForNewSize:(struct CGSize )arg0 ;
-(void)_resetTitleSize;
-(void)_setFont:(id)arg0 ;
-(void)_setLineBreakMode:(NSInteger)arg0 ;
-(void)_updateLabel;
-(void)_updateLabelColor;
-(void)_updateLabelContents;
-(void)layoutSubviews;
-(void)setFont:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setTitleAutoresizesToFit:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif
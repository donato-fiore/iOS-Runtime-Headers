// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCINTEGERINDICATORBADGE_H
#define NCINTEGERINDICATORBADGE_H

@class UIView, UILabel, MTVisualStylingProvider, BSUIFontProvider, NSString, NSArray;
@protocol NCIntegerIndicatorBadging, PLContentSizeCategoryAdjusting, MTVisualStylingRequiring;


#import "NCBadgedIconView.h"

@interface NCIntegerIndicatorBadge : UIView <NCIntegerIndicatorBadging, PLContentSizeCategoryAdjusting, MTVisualStylingRequiring>

 {
    UIView *_countBackgroundView;
    UILabel *_countLabel;
    MTVisualStylingProvider *_strokeStylingProvider;
    BSUIFontProvider *_fontProvider;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (nonatomic) NSUInteger badgeCount; // ivar: _badgeCount
@property (nonatomic) NSUInteger badgeLocation; // ivar: _badgeLocation
@property (readonly, nonatomic) NSInteger badgeType;
@property (weak, nonatomic) NCBadgedIconView *badgedIconView; // ivar: _badgedIconView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;


-(BOOL)adjustForContentSizeCategoryChange;
-(id)_fontProvider;
-(id)initWithBadgeCount:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureCountBackgroundViewIfNecessary;
-(void)_configureCountLabelIfNecessary;
-(void)_updateTextAttributesForCountLabel;
-(void)_updateVisualStylingOfView:(id)arg0 style:(NSInteger)arg1 visualStylingProvider:(id)arg2 outgoingProvider:(id)arg3 ;
-(void)_visualStylingProviderDidChange:(id)arg0 forCategory:(NSInteger)arg1 outgoingProvider:(id)arg2 ;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITABBARAPPEARANCE_H
#define UITABBARAPPEARANCE_H



#import "UIBarAppearance.h"
#import "_UITabBarLayoutData.h"
#import "UIVibrancyEffect.h"
#import "UITabBarItemAppearance.h"
#import "UIImage.h"
#import "UIColor.h"

@interface UITabBarAppearance : UIBarAppearance {
    _UITabBarLayoutData *_layoutData;
}


@property (copy, nonatomic, setter=_setSelectedItemVibrancyEffect:) UIVibrancyEffect *_selectedItemVibrancyEffect;
@property (copy, nonatomic) UITabBarItemAppearance *compactInlineLayoutAppearance; // ivar: _compactInlineLayoutAppearance
@property (copy, nonatomic) UITabBarItemAppearance *inlineLayoutAppearance; // ivar: _inlineLayoutAppearance
@property (retain, nonatomic) UIImage *selectionIndicatorImage;
@property (copy, nonatomic) UIColor *selectionIndicatorTintColor;
@property (nonatomic) NSInteger stackedItemPositioning;
@property (nonatomic) CGFloat stackedItemSpacing;
@property (nonatomic) CGFloat stackedItemWidth;
@property (copy, nonatomic) UITabBarItemAppearance *stackedLayoutAppearance; // ivar: _stackedLayoutAppearance


+(BOOL)supportsSecureCoding;
-(BOOL)_checkEqualTo:(id)arg0 ;
-(NSUInteger)_hashInto:(NSUInteger)arg0 ;
-(id)_compactInlineTabButtonAppearanceData;
-(id)_dataForItemStyle:(NSInteger)arg0 ;
-(id)_inlineTabButtonAppearanceData;
-(id)_stackedTabButtonAppearanceData;
-(id)_tabLayoutAppearanceData;
-(void)_completeInit;
-(void)_copyFromAppearance:(id)arg0 ;
-(void)_decodeFromCoder:(id)arg0 ;
-(void)_describeInto:(id)arg0 ;
-(void)_setupDefaults;
-(void)_tabBarItemDataChanged:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
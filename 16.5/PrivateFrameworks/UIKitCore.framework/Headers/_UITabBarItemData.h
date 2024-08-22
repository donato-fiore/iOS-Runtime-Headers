// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITABBARITEMDATA_H
#define _UITABBARITEMDATA_H

@class UIBarAppearanceData;


#import "UIImageSymbolConfiguration.h"

@interface _UITabBarItemData : UIBarAppearanceData {
    NSInteger _style;
    NSDictionary" _titleTextAttributes;
    NSDictionary" _badgeTextAttributes;
    UIColor" _iconColor;
    UIColor" _badgeBackgroundColor;
    UIOffset _titlePositionAdjustment;
    UIOffset _badgePositionAdjustment;
    UIOffset _badgeTitlePositionAdjustment;
    ? _stateFlags;
}


@property (readonly, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;


+(id)decodeFromCoder:(id)arg0 prefix:(id)arg1 ;
+(id)standardItemDataForStyle:(NSInteger)arg0 ;
-(BOOL)checkEqualTo:(id)arg0 ;
-(BOOL)titleTextAttributesSpecifyColorForState:(NSInteger)arg0 ;
-(NSInteger)hashInto:(NSInteger)arg0 ;
-(id)_fallbackBadgeTitleColorForState:(NSInteger)arg0 ;
-(id)_fallbackBadgeTitleFontForState:(NSInteger)arg0 compatibleWithTraitCollection:(id)arg1 ;
-(id)_fallbackTitleColorForState:(NSInteger)arg0 ;
-(id)_fallbackTitleFontForState:(NSInteger)arg0 compatibleWithTraitCollection:(id)arg1 ;
-(id)badgeBackgroundColorForState:(NSInteger)arg0 ;
-(id)badgeTextAttributesForState:(NSInteger)arg0 ;
-(id)badgeTextAttributesForState:(NSInteger)arg0 compatibleWithTraitCollection:(id)arg1 ;
-(id)iconColorForState:(NSInteger)arg0 ;
-(id)replicate;
-(id)titleTextAttributesForState:(NSInteger)arg0 ;
-(id)titleTextAttributesForState:(NSInteger)arg0 compatibleWithTraitCollection:(id)arg1 ;
-(struct UIOffset )badgePositionAdjustmentForState:(NSInteger)arg0 ;
-(struct UIOffset )badgeTitlePositionAdjustmentForState:(NSInteger)arg0 ;
-(struct UIOffset )titlePositionAdjustmentForState:(NSInteger)arg0 ;
-(void)_decodeBadgeBackgroundColorFromCoder:(id)arg0 prefix:(id)arg1 ;
-(void)_decodeBadgePositionAdjustmentsFromCoder:(id)arg0 prefix:(id)arg1 ;
-(void)_decodeBadgeTextAttributesFromCoder:(id)arg0 prefix:(id)arg1 ;
-(void)_decodeBadgeTitlePositionAdjustmentsFromCoder:(id)arg0 prefix:(id)arg1 ;
-(void)_decodeIconColorFromCoder:(id)arg0 prefix:(id)arg1 ;
-(void)_decodeTitlePositionAdjustmentsFromCoder:(id)arg0 prefix:(id)arg1 ;
-(void)_decodeTitleTextAttributesFromCoder:(id)arg0 prefix:(id)arg1 ;
-(void)describeInto:(id)arg0 ;
-(void)encodeToCoder:(id)arg0 prefix:(id)arg1 ;
-(void)setBadgeBackgroundColor:(id)arg0 forState:(NSInteger)arg1 ;
-(void)setBadgePositionAdjustment:(struct UIOffset )arg0 forState:(NSInteger)arg1 ;
-(void)setBadgeTextAttributes:(id)arg0 forState:(NSInteger)arg1 ;
-(void)setBadgeTitlePositionAdjustment:(struct UIOffset )arg0 forState:(NSInteger)arg1 ;
-(void)setIconColor:(id)arg0 forState:(NSInteger)arg1 ;
-(void)setTitlePositionAdjustment:(struct UIOffset )arg0 forState:(NSInteger)arg1 ;
-(void)setTitleTextAttributes:(id)arg0 forState:(NSInteger)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UILISTSEPARATORCONFIGURATION_H
#define UILISTSEPARATORCONFIGURATION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIVisualEffect.h"
#import "UIColor.h"

@interface UIListSeparatorConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic, getter=_ignoreBottomSeparatorInsetsFromCell, setter=_setIgnoreBottomSeparatorInsetsFromCell:) BOOL _ignoreBottomSeparatorInsetsFromCell; // ivar: _ignoreBottomSeparatorInsetsFromCell
@property (nonatomic, getter=_ignoreTopSeparatorInsetsFromCell, setter=_setIgnoreTopSeparatorInsetsFromCell:) BOOL _ignoreTopSeparatorInsetsFromCell; // ivar: _ignoreTopSeparatorInsetsFromCell
@property (copy, nonatomic, getter=_visualEffect, setter=_setVisualEffect:) UIVisualEffect *_visualEffect;
@property (nonatomic) NSDirectionalEdgeInsets bottomSeparatorInsets; // ivar: _bottomSeparatorInsets
@property (nonatomic) NSInteger bottomSeparatorVisibility; // ivar: _bottomSeparatorVisibility
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) UIColor *multipleSelectionColor; // ivar: _multipleSelectionColor
@property (nonatomic) NSDirectionalEdgeInsets topSeparatorInsets; // ivar: _topSeparatorInsets
@property (nonatomic) NSInteger topSeparatorVisibility; // ivar: _topSeparatorVisibility
@property (copy, nonatomic) UIVisualEffect *visualEffect; // ivar: _visualEffect


+(BOOL)supportsSecureCoding;
+(id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearanceGrouped;
+(id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearanceInsetGrouped;
+(id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearancePlain;
+(id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearanceSidebar;
+(id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearanceSidebarPlain;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)__copyWithSubclass:(Class)arg0 inZone:(struct _NSZone *)arg1 ;
-(id)_multiselectSeparatorColorForListAppearance:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithListAppearance:(NSInteger)arg0 ;
-(struct NSDirectionalEdgeInsets )_insets;
-(void)_replaceAutomaticValuesWithValuesFromConfiguration:(id)arg0 ;
-(void)_setInsets:(struct NSDirectionalEdgeInsets )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
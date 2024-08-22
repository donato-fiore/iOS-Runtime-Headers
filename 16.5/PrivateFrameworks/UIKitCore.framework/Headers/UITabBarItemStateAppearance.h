// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITABBARITEMSTATEAPPEARANCE_H
#define UITABBARITEMSTATEAPPEARANCE_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "UITabBarItemAppearance.h"
#import "_UITabBarItemData.h"
#import "UIColor.h"

@interface UITabBarItemStateAppearance : NSObject {
    UITabBarItemAppearance *_owner;
    NSInteger _state;
}


@property (retain, nonatomic, setter=_setData:) _UITabBarItemData *_data; // ivar: _data
@property (copy, nonatomic) UIColor *badgeBackgroundColor;
@property (nonatomic) UIOffset badgePositionAdjustment;
@property (copy, nonatomic) NSDictionary *badgeTextAttributes;
@property (nonatomic) UIOffset badgeTitlePositionAdjustment;
@property (copy, nonatomic) UIColor *iconColor;
@property (copy, nonatomic) NSArray *itemEffects; // ivar: _itemEffects
@property (nonatomic) UIOffset titlePositionAdjustment;
@property (copy, nonatomic) NSDictionary *titleTextAttributes;


-(id)_initWithOwner:(id)arg0 data:(id)arg1 state:(NSInteger)arg2 ;
-(id)init;
-(void)_clearOwner;
-(void)_writeToStorage:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITABBARITEMAPPEARANCE_H
#define UITABBARITEMAPPEARANCE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_UITabBarItemData.h"
#import "UITabBarAppearance.h"
#import "UITabBarItemStateAppearance.h"

@interface UITabBarItemAppearance : NSObject <NSCopying, NSSecureCoding>

 {
    UITabBarItemStateAppearance" _states;
}


@property (retain, nonatomic, setter=_setData:) _UITabBarItemData *_data; // ivar: _data
@property (weak, nonatomic, setter=_setOwningAppearance:) UITabBarAppearance *_owningAppearance; // ivar: _owningAppearance
@property (readonly, nonatomic) UITabBarItemStateAppearance *disabled;
@property (readonly, nonatomic) UITabBarItemStateAppearance *focused;
@property (readonly, nonatomic) UITabBarItemStateAppearance *highlighted;
@property (readonly, nonatomic) UITabBarItemStateAppearance *normal;
@property (readonly, nonatomic) UITabBarItemStateAppearance *selected;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithTabBarItemData:(id)arg0 ;
-(id)_proxyForState:(NSInteger)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)initWithTabBarItemAppearance:(id)arg0 ;
-(void)_describeInto:(id)arg0 ;
-(void)_updateDataTo:(id)arg0 ;
-(void)_writeToStorage:(id)arg0 ;
-(void)configureWithDefaultForStyle:(NSInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
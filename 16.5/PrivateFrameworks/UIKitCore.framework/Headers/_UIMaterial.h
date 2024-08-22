// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIMATERIAL_H
#define _UIMATERIAL_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _UIMaterial : NSObject

@property (readonly, nonatomic) NSArray *backgroundEffects; // ivar: _backgroundEffects
@property (readonly, nonatomic) NSArray *contentEffects; // ivar: _contentEffects
@property (readonly, nonatomic, getter=isVibrant) BOOL vibrant; // ivar: _vibrant


+(id)materialForSystemColorName:(id)arg0 ;
+(id)materialMapping;
+(id)vibrancyEffectWithA:(CGFloat)arg0 B:(CGFloat)arg1 C:(CGFloat)arg2 D:(CGFloat)arg3 E:(CGFloat)arg4 F:(CGFloat)arg5 ;
-(id)description;
-(id)initWithBlur:(NSInteger)arg0 ;
-(id)initWithVibrancy:(NSInteger)arg0 ;
-(id)initWithVibrantVisualEffect:(id)arg0 ;
-(id)initWithVisualEffect:(id)arg0 ;


@end


#endif
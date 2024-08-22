// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISEGMENTEDCONTROLCACHEKEY_H
#define _UISEGMENTEDCONTROLCACHEKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UISegmentedControlCacheKey : NSObject <NSCopying>

 {
    CGSize _size;
    CGFloat _cornerRadius;
    CGFloat _scale;
    NSUInteger _state;
    *CGColor _primaryColor;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCacheKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCornerRadius:(CGFloat)arg0 capSize:(struct CGSize )arg1 scale:(CGFloat)arg2 state:(NSUInteger)arg3 primaryColor:(struct CGColor *)arg4 ;
-(id)initWithSize:(int)arg0 scale:(CGFloat)arg1 primaryColor:(struct CGColor *)arg2 background:(BOOL)arg3 ;
-(void)dealloc;


@end


#endif
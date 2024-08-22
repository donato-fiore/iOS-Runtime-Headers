// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISHADOWVIEWIMAGECACHEKEY_H
#define _UISHADOWVIEWIMAGECACHEKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIShadowViewImageCacheKey : NSObject <NSCopying>

 {
    CGFloat _scale;
    CGFloat _size;
    NSUInteger _options;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCacheKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSize:(CGFloat)arg0 scale:(CGFloat)arg1 options:(NSUInteger)arg2 ;


@end


#endif
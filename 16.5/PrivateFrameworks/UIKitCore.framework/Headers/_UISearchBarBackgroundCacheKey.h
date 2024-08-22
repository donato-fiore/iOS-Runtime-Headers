// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISEARCHBARBACKGROUNDCACHEKEY_H
#define _UISEARCHBARBACKGROUNDCACHEKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UISearchBarBackgroundCacheKey : NSObject <NSCopying>

 {
    NSInteger _barPosition;
    BOOL _usesContiguousBarBackground;
    CGFloat _scale;
    CGFloat _alpha;
    CGFloat _height;
    CGFloat _statusBarHeight;
    *CGColor _backgroundColor;
    *CGColor _strokeColor;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCacheKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBarPosition:(NSInteger)arg0 usesContiguousBarBackground:(BOOL)arg1 scale:(CGFloat)arg2 alpha:(CGFloat)arg3 height:(CGFloat)arg4 statusBarHeight:(CGFloat)arg5 backgroundColor:(struct CGColor *)arg6 strokeColor:(struct CGColor *)arg7 ;
-(void)dealloc;


@end


#endif
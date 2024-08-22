// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTFIELDBACKGROUNDCACHEKEY_H
#define _UITEXTFIELDBACKGROUNDCACHEKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UITextFieldBackgroundCacheKey : NSObject <NSCopying>

 {
    NSString *_className;
    CGFloat _scale;
    CGFloat _cornerRadius;
    CGFloat _lineWidth;
    *CGColor _strokeColor;
    *CGColor _fillColor;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCacheKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithClassName:(id)arg0 scale:(CGFloat)arg1 cornerRadius:(CGFloat)arg2 lineWidth:(CGFloat)arg3 strokeColor:(struct CGColor *)arg4 fillColor:(struct CGColor *)arg5 ;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSHADOW_H
#define NSSHADOW_H

@class NSColor;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSShadow : NSObject <NSCopying, NSSecureCoding>

 {
    NSUInteger _shadowFlags;
    CGSize _shadowOffset;
    CGFloat _shadowBlurRadius;
    NSColor *_shadowColor;
}


@property (nonatomic) CGFloat shadowBlurRadius;
@property (retain, nonatomic) id *shadowColor;
@property (nonatomic) CGSize shadowOffset;


+(BOOL)supportsSecureCoding;
+(id)defaultShadowColor;
+(id)shadow;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithShadow:(id)arg0 ;
-(void)applyToGraphicsContext:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
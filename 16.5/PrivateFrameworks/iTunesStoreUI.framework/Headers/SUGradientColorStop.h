// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUGRADIENTCOLORSTOP_H
#define SUGRADIENTCOLORSTOP_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SUGradientColorStop : NSObject <NSSecureCoding>

 {
    CGFloat _r;
    CGFloat _g;
    CGFloat _b;
    CGFloat _a;
    CGFloat _offset;
    *CGColor _rawColor;
}


@property (readonly, nonatomic) CGFloat offset;


+(BOOL)supportsSecureCoding;
-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColor:(struct CGColor *)arg0 offset:(CGFloat)arg1 ;
-(struct CGColor *)copyCGColor;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
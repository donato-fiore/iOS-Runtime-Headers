// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EQKITBOX_H
#define EQKITBOX_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EQKitBox : NSObject <NSCopying>



@property (readonly, nonatomic) *CGColor color;
@property (readonly, nonatomic) CGFloat depth;
@property (readonly, nonatomic) CGFloat height;
@property (readonly, nonatomic) CGFloat layoutDepth;
@property (readonly, nonatomic) CGFloat layoutHeight;
@property (readonly, nonatomic) CGFloat layoutVSize;
@property (readonly, nonatomic) CGFloat opticalAlignWidth;
@property (readonly, nonatomic) CGFloat vsize;
@property (readonly, nonatomic) CGFloat width;


-(BOOL)appendOpticalAlignToSpec:(*void)arg0 offset:(struct CGPoint )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)p_getTransform:(struct CGAffineTransform *)arg0 fromDescendant:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(struct CGAffineTransform )transformFromDescendant:(id)arg0 ;
-(struct CGRect )erasableBounds;
-(void)renderIntoContext:(struct CGContext *)arg0 offset:(struct CGPoint )arg1 ;


@end


#endif
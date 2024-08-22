// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EQKITRULE_H
#define EQKITRULE_H



#import "EQKitBox.h"

@interface EQKitRule : EQKitBox

@property (readonly, nonatomic) *CGColor color; // ivar: mCGColor
@property (readonly, nonatomic) CGFloat depth; // ivar: mDepth
@property (readonly, nonatomic) CGFloat height; // ivar: mHeight
@property (readonly, nonatomic) CGFloat width; // ivar: mWidth


-(BOOL)appendOpticalAlignToSpec:(*void)arg0 offset:(struct CGPoint )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithHeight:(CGFloat)arg0 depth:(CGFloat)arg1 width:(CGFloat)arg2 cgColor:(struct CGColor *)arg3 ;
-(void)dealloc;
-(void)renderIntoContext:(struct CGContext *)arg0 offset:(struct CGPoint )arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EQKITSTRINGBOX_H
#define EQKITSTRINGBOX_H

@class NSAttributedString;


#import "EQKitBox.h"

@interface EQKitStringBox : EQKitBox {
    *__CTLine mLine;
    CGFloat mHeight;
    CGFloat mDepth;
    CGFloat mWidth;
    CGRect mErasableBounds;
    BOOL mDimensionsValid;
}


@property (readonly, nonatomic) NSAttributedString *attributedString; // ivar: mAttributedString
@property (readonly, nonatomic) *CGColor color; // ivar: mCGColor
@property (readonly, nonatomic) CGFloat depth;
@property (readonly, nonatomic) CGFloat height;
@property (readonly, nonatomic) *__CTLine line;
@property (readonly, nonatomic) CGFloat width;


-(BOOL)appendOpticalAlignToSpec:(*void)arg0 offset:(struct CGPoint )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)positionOfCharacterAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAttributedString:(id)arg0 cgColor:(struct CGColor *)arg1 ;
-(struct CGRect )erasableBounds;
-(void)dealloc;
-(void)p_cacheDimensions;
-(void)renderIntoContext:(struct CGContext *)arg0 offset:(struct CGPoint )arg1 ;


@end


#endif
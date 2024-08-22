// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUCLIPCORNERSIMAGEMODIFIER_H
#define SUCLIPCORNERSIMAGEMODIFIER_H



#import "SUImageModifier.h"

@interface SUClipCornersImageModifier : SUImageModifier

@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) int corners; // ivar: _corners


-(BOOL)isEqual:(id)arg0 ;
-(struct CGPath *)_copyClippingPathForRect:(struct CGRect )arg0 ;
-(void)drawAfterImageForContext:(struct CGContext *)arg0 imageFrame:(struct CGRect )arg1 finalSize:(struct CGSize )arg2 ;
-(void)drawBeforeImageForContext:(struct CGContext *)arg0 imageFrame:(struct CGRect )arg1 finalSize:(struct CGSize )arg2 ;


@end


#endif
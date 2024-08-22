// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONLABELIMAGE_H
#define SBICONLABELIMAGE_H

@class UIImage;


#import "SBIconLabelImageParameters.h"

@interface SBIconLabelImage : UIImage {
    UIEdgeInsets _alignmentRectInsets;
    CGFloat _baselineOffsetFromBottom;
}


@property (readonly, copy, nonatomic) SBIconLabelImageParameters *parameters; // ivar: _parameters


+(BOOL)attributedText:(id)arg0 fitsInRect:(struct CGRect )arg1 textRect:(struct CGRect *)arg2 ;
+(BOOL)needsLegibilityImageForParameters:(id)arg0 ;
+(CGFloat)legibilityStrengthForLegibilityStyle:(NSInteger)arg0 ;
+(id)imageWithParameters:(id)arg0 ;
+(id)imageWithParameters:(id)arg0 pool:(id)arg1 ;
+(struct CGSize )_maxLegibilityImageSizeForLabelSize:(struct CGSize )arg0 ;
+(void)applyKerning:(CGFloat)arg0 whitespaceKerning:(CGFloat)arg1 toAttributedString:(id)arg2 ;
-(BOOL)hasBaseline;
-(CGFloat)baselineOffsetFromBottom;
-(id)_initWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 orientation:(NSInteger)arg2 parameters:(id)arg3 alignmentRectInsets:(struct UIEdgeInsets )arg4 baselineOffsetFromBottom:(CGFloat)arg5 ;
-(id)description;
-(struct UIEdgeInsets )alignmentRectInsets;


@end


#endif
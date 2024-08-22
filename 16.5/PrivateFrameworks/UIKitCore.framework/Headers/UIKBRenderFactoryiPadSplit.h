// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBRENDERFACTORYIPADSPLIT_H
#define UIKBRENDERFACTORYIPADSPLIT_H



#import "UIKBRenderFactoryiPad.h"

@interface UIKBRenderFactoryiPadSplit : UIKBRenderFactoryiPad



-(BOOL)supportsInputTraits:(id)arg0 forKeyplane:(id)arg1 ;
-(CGFloat)_row4ControlSegmentWidthLeft;
-(CGFloat)defaultPathWeight;
-(CGFloat)dynamicBottomRowMultiplier;
-(CGFloat)keyCornerRadius;
-(CGFloat)keyInsetBottom;
-(CGFloat)skinnyKeyThreshold;
-(CGFloat)symbolFrameInset;
-(CGFloat)symbolImageControlKeyFontSize;
-(CGFloat)variantAnnotationTextFontSize;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)backgroundTraitsForKeyplane:(id)arg0 ;
-(id)multitapCompleteKeyImageName;
-(id)muttitapReverseKeyImageName;
-(id)variantGeometriesForGeometry:(id)arg0 variantCount:(NSUInteger)arg1 rowLimit:(NSInteger)arg2 annotationIndex:(NSUInteger)arg3 ;
-(struct CGPoint )deleteKeyOffset;
-(struct CGPoint )dismissKeyOffset;
-(struct CGPoint )internationalKeyOffset;
-(struct CGPoint )shiftKeyOffset;
-(struct CGPoint )variantAnnotationTextOffset;
-(struct UIEdgeInsets )dynamicInsets;
-(void)_customizeGeometry:(id)arg0 forKey:(id)arg1 contents:(id)arg2 ;
-(void)_customizeSymbolStyle:(id)arg0 forKey:(id)arg1 contents:(id)arg2 ;
-(void)_customizeTraits:(id)arg0 forPopupForKey:(id)arg1 withRenderingContext:(id)arg2 keycapsFontName:(id)arg3 ;


@end


#endif
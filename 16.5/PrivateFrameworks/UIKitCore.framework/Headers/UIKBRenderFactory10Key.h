// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBRENDERFACTORY10KEY_H
#define UIKBRENDERFACTORY10KEY_H



#import "UIKBRenderFactory.h"

@interface UIKBRenderFactory10Key : UIKBRenderFactory



+(BOOL)_isActiveKeyplaneSwitchKey:(id)arg0 ;
-(BOOL)shouldShowBottomRowEdge;
-(BOOL)shouldShowTopRowEdge;
-(BOOL)useRoundCorner;
-(CGFloat)capitalAbcSymbolSize;
-(CGFloat)interkeyGapsCenterXOfKeyplaneFrame:(struct CGRect )arg0 ;
-(CGFloat)keyCornerRadius;
-(CGFloat)numberPadKeyPrimarySymbolSize;
-(CGFloat)symbolImageControlKeyFontSize;
-(NSInteger)assetIdiom;
-(NSInteger)lightHighQualityEnabledBlendForm;
-(NSUInteger)edgesAdjustedForTranslucentGapsForGeometry:(id)arg0 key:(id)arg1 onKeyplane:(id)arg2 ;
-(NSUInteger)roundCornersForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)_preferredScriptFontForRendering:(int)arg0 ;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)activeControlKeyTraits;
-(id)controlKeyBackgroundColorName;
-(id)controlKeyDividerColorName;
-(id)controlKeyForegroundColorName;
-(id)controlKeyTraits;
-(id)defaultKeyDividerColorName;
-(id)displayContentsForKey:(id)arg0 ;
-(id)shiftedControlKeyTraits;
-(id)shiftedWhiteControlKeyTraits;
-(struct CGPoint )abcKeyTextOffset;
-(struct CGPoint )dictationKeyTextOffset;
-(struct CGPoint )globeKeyTextOffset;
-(struct CGPoint )longVowelSignKeyTextOffset;
-(struct CGPoint )numberPadKeyPrimaryTextOffset;
-(struct CGPoint )numberPadKeySecondaryTextOffset;
-(struct CGPoint )numberPadVBarSecondaryTextOffset;
-(struct CGPoint )symbolImageControlKeyOffset;
-(struct UIEdgeInsets )topEdgeAdjustmentInsets;
-(void)modifyTraitsForDetachedInputSwitcher:(id)arg0 withKey:(id)arg1 ;
-(void)populateFlickGuide:(id)arg0 forKey:(id)arg1 from:(id)arg2 ;
-(void)setupColumnLayoutSegmentsWithControlWidth:(CGFloat)arg0 ;


@end


#endif
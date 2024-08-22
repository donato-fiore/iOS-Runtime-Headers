// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBRENDERFACTORY_MONOLITH_H
#define UIKBRENDERFACTORY_MONOLITH_H



#import "UIKBRenderFactory.h"

@interface UIKBRenderFactory_Monolith : UIKBRenderFactory



-(BOOL)forceVariantsInsideKeyplane;
-(CGFloat)controlKeyFontSize;
-(CGFloat)controlKeyFontWeight;
-(CGFloat)controlKeyRectCornerRadius;
-(CGFloat)deleteKeyFontSize;
-(CGFloat)keyRectCornerRadius;
-(CGFloat)letterKeyFontSize;
-(CGFloat)letterKeyFontWeight;
-(CGFloat)letterKeySecondaryFontSize;
-(CGFloat)letterKeyTwoLineFontSize;
-(CGFloat)letterKeyTwoLineFontWeight;
-(CGFloat)shadowOpacity;
-(CGFloat)shadowRadius;
-(CGFloat)shadowVerticalOffset;
-(CGFloat)tldKeyFontSize;
-(CGFloat)tldKeyFontWeight;
-(CGFloat)variantKeyFocusIncrease;
-(CGFloat)variantKeyFocusRectRadius;
-(CGFloat)variantKeyHeight;
-(CGFloat)variantKeyWidth;
-(CGFloat)variantPlatterCornerRadius;
-(NSInteger)assetIdiom;
-(id)_activeTraitsForControlKey:(id)arg0 ;
-(id)_activeTraitsForKey:(id)arg0 ;
-(id)_activeTraitsForLetterKey:(id)arg0 ;
-(id)_disabledTraitsForControlKey:(id)arg0 ;
-(id)_disabledTraitsForKey:(id)arg0 ;
-(id)_disabledTraitsForLetterKey:(id)arg0 ;
-(id)_enabledTraitsForControlKey:(id)arg0 ;
-(id)_enabledTraitsForKey:(id)arg0 ;
-(id)_enabledTraitsForLetterKey:(id)arg0 ;
-(id)_highlightedTraitsForControlKey:(id)arg0 ;
-(id)_highlightedTraitsForKey:(id)arg0 ;
-(id)_highlightedTraitsForLetterKey:(id)arg0 ;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)_variantTraitsForControlKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)_variantTraitsForLetterKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)activeTextColor;
-(id)backgroundTraitsForKeyplane:(id)arg0 ;
-(id)disabledTextColor;
-(id)displayContentsForKey:(id)arg0 ;
-(id)enabledTextColor;
-(id)highlightedTextColor;
-(id)highlightedVariantBackgroundColor;
-(id)highlightedVariantTextColor;
-(id)keyplaneSwitcherBackgroundColor;
-(id)keyplaneSwitcherDividerColor;
-(id)shadowColorString;
-(id)variantPlatterBackgroundColor;
-(id)variantTextColor;
-(struct CGPoint )_secondaryTextOffsetForKey:(id)arg0 ;
-(struct CGPoint )_textOffsetForKey:(id)arg0 ;
-(struct CGSize )letterKeyFocusIncreaseSize;
-(void)configureCornersOnGeometry:(id)arg0 forKey:(id)arg1 ;
-(void)configureGeometry:(id)arg0 forControlKey:(id)arg1 ;
-(void)configureSymbolStyle:(id)arg0 forControlKey:(id)arg1 ;
-(void)configureSymbolStyles:(id)arg0 forLetterKey:(id)arg1 ;
-(void)lowQualityTraits:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBRENDERFACTORY_MONOLITHLINEARSLIM_H
#define UIKBRENDERFACTORY_MONOLITHLINEARSLIM_H

@class MonolithLinear;



@interface UIKBRenderFactory_MonolithLinearSlim : MonolithLinear



-(CGFloat)variantPlatterHeight;
-(id)_enabledTraitsForControlKey:(id)arg0 ;
-(id)_highlightedTraitsForControlKey:(id)arg0 ;
-(id)_variantTraitsForControlKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)highlightedVariantLayeredBackgroundColor;
-(id)highlightedVariantPillBackgroundColor;
-(id)variantPillBackgroundColor;
-(id)variantTextColor;
-(struct CGPoint )_textOffsetForKey:(id)arg0 ;
-(void)configureCornersOnGeometry:(id)arg0 forKey:(id)arg1 ;
-(void)configureGeometry:(id)arg0 forControlKey:(id)arg1 ;
-(void)configureSymbolStyle:(id)arg0 forControlKey:(id)arg1 ;


@end


#endif
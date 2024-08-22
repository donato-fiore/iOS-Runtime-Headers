// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBRENDERFACTORY_MONOLITHLINEAR_H
#define UIKBRENDERFACTORY_MONOLITHLINEAR_H

@class Monolith;



@interface UIKBRenderFactory_MonolithLinear : Monolith



-(BOOL)forceVariantsInsideKeyplane;
-(CGFloat)pillControlKeyFontSize;
-(CGFloat)pillControlKeyHeight;
-(CGFloat)tldKeyFontSize;
-(CGFloat)tldKeyFontWeight;
-(id)_enabledTraitsForControlKey:(id)arg0 ;
-(id)_highlightedTraitsForControlKey:(id)arg0 ;
-(id)pillControlKeyPillBackgroundColor;
-(struct CGSize )pillControlKeyFocusIncreaseSize;
-(void)configureGeometry:(id)arg0 forControlKey:(id)arg1 ;
-(void)configureSymbolStyle:(id)arg0 forControlKey:(id)arg1 ;


@end


#endif
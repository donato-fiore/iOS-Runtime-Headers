// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBRENDERFACTORY_H
#define UIKBRENDERFACTORY_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "UIKBRenderConfig.h"
#import "UIKBRenderingContext.h"

@interface UIKBRenderFactory : NSObject {
    BOOL _suppressSegmentTraits;
}


@property (nonatomic) BOOL allowsPaddles; // ivar: _allowsPaddles
@property (readonly, nonatomic) NSInteger assetIdiom;
@property (readonly, nonatomic) BOOL boldTextEnabled; // ivar: _boldTextEnabled
@property (nonatomic) BOOL drawsOneHandedAffordance; // ivar: _drawsOneHandedAffordance
@property (readonly, nonatomic) CGFloat dynamicBottomRowMultiplier;
@property (nonatomic) BOOL dynamicFactory; // ivar: _dynamicFactory
@property (readonly, nonatomic) UIEdgeInsets dynamicInsets;
@property (nonatomic) BOOL increasedContrastEnabled; // ivar: _increasedContrastEnabled
@property (nonatomic) BOOL lightweightFactory; // ivar: _lightweightFactory
@property (nonatomic) BOOL preferStringKeycapOverImage; // ivar: _preferStringKeycapOverImage
@property (readonly, getter=renderConfig) UIKBRenderConfig *renderConfig;
@property (retain, nonatomic) UIKBRenderingContext *renderingContext; // ivar: _renderingContext
@property (nonatomic) CGFloat rivenSizeFactor; // ivar: _rivenSizeFactor
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) NSArray *segmentTraits; // ivar: _segmentTraits
@property (nonatomic) CGSize stretchFactor; // ivar: _stretchFactor


+(BOOL)_enabled;
+(BOOL)couldUseGlyphSelectorForDisplayString:(id)arg0 ;
+(Class)factoryClassForVisualStyle:(struct ? )arg0 renderingContext:(id)arg1 ;
+(NSInteger)_graphicsQuality;
+(id)_characterSetForGlyphSelectors;
+(id)cacheKeyForString:(id)arg0 withRenderFlags:(NSInteger)arg1 renderingContext:(id)arg2 ;
+(id)factoryForVisualStyle:(struct ? )arg0 renderingContext:(id)arg1 ;
+(id)factoryForVisualStyle:(struct ? )arg0 renderingContext:(id)arg1 skipLayoutSegments:(BOOL)arg2 ;
+(id)lightweightFactoryForVisualStyle:(struct ? )arg0 renderingContext:(id)arg1 ;
+(id)segmentedControlColor:(BOOL)arg0 ;
-(BOOL)allowsPaddleForKey:(id)arg0 ;
-(BOOL)keyIsRightToLeftSensitive:(id)arg0 ;
-(BOOL)popupKeyUsesCustomKeyContentView:(id)arg0 ;
-(BOOL)shouldClearBaseDisplayStringForVariants:(id)arg0 ;
-(BOOL)supportsInputTraits:(id)arg0 forKeyplane:(id)arg1 ;
-(BOOL)useBlueThemingForKey:(id)arg0 ;
-(CGFloat)RivenFactor:(CGFloat)arg0 ;
-(CGFloat)emojiPopupDividerKeyOffset;
-(CGFloat)keyCornerRadius;
-(CGFloat)passcodeEdgeWeight;
-(CGFloat)skinnyKeyThreshold;
-(CGFloat)translucentGapWidth;
-(Class)contentViewClassForPopupKey:(id)arg0 ;
-(NSInteger)enabledBlendForm;
-(NSInteger)glyphSelectorForDisplayString:(id)arg0 ;
-(NSInteger)lightHighQualityEnabledBlendForm;
-(id)ZWNJKeyImageName;
-(id)_controlKeyBackgroundColorName;
-(id)_defaultControlKeyBackgroundColorName;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)backgroundTraitsForKeyplane:(id)arg0 ;
-(id)biuKeyImageName;
-(id)boldKeyImageName;
-(id)controlKeyBackgroundColorName;
-(id)controlKeyForegroundColorName;
-(id)controlKeyShadowColorName;
-(id)copyKeyImageName;
-(id)cutKeyImageName;
-(id)defaultKeyBackgroundColorName;
-(id)defaultKeyShadowColorName;
-(id)deleteKeyImageName;
-(id)deleteOnKeyImageName;
-(id)dictationKeyImageName;
-(id)dismissKeyImageName;
-(id)displayContentsForKey:(id)arg0 ;
-(id)extraPasscodePaddleTraits;
-(id)globalEmojiKeyImageName;
-(id)globalKeyImageName;
-(id)handwritingMoreKeyImageName;
-(id)hashStringElement;
-(id)initWithRenderingContext:(id)arg0 skipLayoutSegments:(BOOL)arg1 ;
-(id)keyImageNameWithSkinnyVariation:(id)arg0 ;
-(id)leftArrowKeyImageName;
-(id)lightKeycapsFontName;
-(id)lightPadKeycapsFontName;
-(id)lightTextFontName;
-(id)lowQualityLayeredBackgroundColorName;
-(id)messagesWriteboardKeyImageName;
-(id)multitapCompleteKeyImageName;
-(id)muttitapReverseKeyImageName;
-(id)passcodeActiveControlKeyTraits;
-(id)passcodeBackgroundTraitsForKeyplane:(id)arg0 ;
-(id)passcodeControlKeyTraits;
-(id)passcodeKeyEdgeColorName;
-(id)passcodeShiftedControlKeyTraits;
-(id)pasteKeyImageName;
-(id)redoKeyImageName;
-(id)returnKeyImageName;
-(id)rightArrowKeyImageName;
-(id)shiftKeyImageName;
-(id)shiftLockImageName;
-(id)shiftOnKeyImageName;
-(id)spaceKeyGrabberHandlesImageName;
-(id)thinKeycapsFontName;
-(id)thinTextFontName;
-(id)traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)traitsHashStringForKey:(id)arg0 withGeometry:(id)arg1 withSymbolStyle:(id)arg2 controlOpacities:(BOOL)arg3 blurBlending:(BOOL)arg4 ;
-(id)undoKeyImageName;
-(struct CGPoint )RivenPointFactor:(struct CGPoint )arg0 ;
-(struct CGPoint )dualStringKeyBottomTextOffset:(id)arg0 keyplane:(id)arg1 ;
-(struct CGPoint )dualStringKeyTopTextOffset:(id)arg0 keyplane:(id)arg1 ;
-(void)_customizeTraits:(id)arg0 forPopupForKey:(id)arg1 withRenderingContext:(id)arg2 keycapsFontName:(id)arg3 ;
-(void)addLayoutSegment:(id)arg0 ;
-(void)applyBoldTextForContent:(id)arg0 withKey:(id)arg1 ;
-(void)customizeLanguageIndicatorTraitsForTraits:(id)arg0 ;
-(void)customizeMicOnTraitsForTraits:(id)arg0 lightKeyboard:(BOOL)arg1 keyState:(int)arg2 ;
-(void)lowQualityTraits:(id)arg0 ;
-(void)modifyKeyTraitsForPasscode:(id)arg0 forKey:(id)arg1 onKeyplane:(id)arg2 ;
-(void)modifyTraitsForDetachedInputSwitcher:(id)arg0 withKey:(id)arg1 ;
-(void)modifyTraitsForDividerVariant:(id)arg0 withKey:(id)arg1 ;
-(void)scaleTraits:(id)arg0 ;
-(void)setupLayoutSegments;
-(void)suppressLayoutSegments;


@end


#endif
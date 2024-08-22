// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBRENDERFACTORYIPHONE_H
#define UIKBRENDERFACTORYIPHONE_H



#import "UIKBRenderFactory.h"

@interface UIKBRenderFactoryiPhone : UIKBRenderFactory



-(BOOL)_popupMenuStyleForKey:(id)arg0 ;
-(BOOL)_popupStyleForKey:(id)arg0 ;
-(BOOL)iPadFudgeLayout;
-(BOOL)iPadSansHomeButtonLayout;
-(BOOL)isTallPopup;
-(BOOL)needsSmallerFontSizeForKey:(id)arg0 ;
-(CGFloat)_row4ControlSegmentWidthLeft;
-(CGFloat)_row4ControlSegmentWidthRight;
-(CGFloat)assistKeyFontSize;
-(CGFloat)deleteKeyFontSize;
-(CGFloat)dualStringBottomAdditionalOffsetForDisplayContents:(id)arg0 ;
-(CGFloat)dynamicBottomRowMultiplier;
-(CGFloat)hintNoneKeyFontSize;
-(CGFloat)moreABCKeyFontSize;
-(CGFloat)moreABCKeyWideCellFontSize;
-(CGFloat)moreKeyFontSize;
-(CGFloat)popupFontSize;
-(CGFloat)returnKeyFontSize;
-(CGFloat)shiftKeyFontSize;
-(CGFloat)skinnyKeyThreshold;
-(CGFloat)smallSymbolImageFontSize;
-(CGFloat)stringKeyFontSize;
-(CGFloat)symbolImageControlKeyFontSize;
-(CGFloat)variantAnnotationTextFontSize;
-(CGFloat)variantWideShadowWeight;
-(CGFloat)zhuyinFirstToneKeyFontSize;
-(NSInteger)assetIdiom;
-(NSInteger)lightHighQualityEnabledBlendForm;
-(NSInteger)rowLimitForKey:(id)arg0 ;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)activeControlKeyTraits;
-(id)controlKeyTraits;
-(id)multitapCompleteKeyImageName;
-(id)muttitapReverseKeyImageName;
-(id)shiftDeleteGlyphTraits;
-(id)shiftLockControlKeyTraits;
-(id)shiftedControlKeyTraits;
-(id)variantGeometriesForGeometry:(id)arg0 variantCount:(NSUInteger)arg1 rowLimit:(NSInteger)arg2 annotationIndex:(NSUInteger)arg3 ;
-(struct CGPoint )ZWNJKeyOffset;
-(struct CGPoint )boldKeyOffset;
-(struct CGPoint )copyKeyOffset;
-(struct CGPoint )cutKeyOffset;
-(struct CGPoint )deleteKeyOffset;
-(struct CGPoint )dictationKeyOffset;
-(struct CGPoint )dismissKeyOffset;
-(struct CGPoint )internationalKeyOffset;
-(struct CGPoint )leftArrowKeyOffset;
-(struct CGPoint )more123KeyOffset;
-(struct CGPoint )moreABCKeyOffset;
-(struct CGPoint )moreABCKeyWideCellOffset;
-(struct CGPoint )pasteKeyOffset;
-(struct CGPoint )popupSymbolTextOffset;
-(struct CGPoint )realEmojiKeyOffset;
-(struct CGPoint )returnKeyOffset;
-(struct CGPoint )rightArrowKeyOffset;
-(struct CGPoint )secondaryShiftKeyOffset;
-(struct CGPoint )shiftKeyOffset;
-(struct CGPoint )stringKeyOffset;
-(struct CGPoint )symbolImageControlKeyOffset;
-(struct CGPoint )undoKeyOffset;
-(struct CGPoint )variantAnnotationTextOffset;
-(struct CGPoint )variantSymbolTextOffset;
-(struct CGPoint )zhuyinFirstToneKeyOffset;
-(struct UIEdgeInsets )dynamicInsets;
-(struct UIEdgeInsets )variantDisplayFrameInsets;
-(struct UIEdgeInsets )variantPaddedFrameInsets;
-(struct UIEdgeInsets )variantSymbolFrameInsets;
-(struct UIEdgeInsets )wideShadowPaddleInsets;
-(struct UIEdgeInsets )wideShadowPopupMenuInsets;
-(void)_configureTraitsForPopupStyle:(id)arg0 withKey:(id)arg1 onKeyplane:(id)arg2 ;
-(void)_customizeGeometry:(id)arg0 forKey:(id)arg1 contents:(id)arg2 ;
-(void)_customizePopupTraits:(id)arg0 forKey:(id)arg1 onKeyplane:(id)arg2 ;
-(void)_customizeSymbolStyle:(id)arg0 forKey:(id)arg1 contents:(id)arg2 ;
-(void)_customizeTraits:(id)arg0 forPredictionCellKey:(id)arg1 ;
-(void)setupLayoutSegments;


@end


#endif
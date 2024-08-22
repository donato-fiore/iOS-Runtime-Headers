// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTACKEDIMAGECONFIGURATION_H
#define _UISTACKEDIMAGECONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_UIFocusAnimationConfiguration.h"
#import "UIImage.h"

@interface _UIStackedImageConfiguration : NSObject <NSCopying>



@property (nonatomic) BOOL adjustMotionForSize; // ivar: _adjustMotionForSize
@property (nonatomic) BOOL allowsNonOpaqueShadow; // ivar: _allowsNonOpaqueShadow
@property (nonatomic) BOOL boostBrightness; // ivar: _boostBrightness
@property (nonatomic, getter=isContinuousCornerRadiusEnabled) CGFloat continuousCornerRadiusEnabled; // ivar: _continuousCornerRadiusEnabled
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGFloat defaultFocusedShadowOpacity; // ivar: _defaultFocusedShadowOpacity
@property (nonatomic) CGFloat defaultFocusedShadowRadius; // ivar: _defaultFocusedShadowRadius
@property (nonatomic) CGFloat defaultFocusedShadowVerticalOffset; // ivar: _defaultFocusedShadowVerticalOffset
@property (nonatomic) CGFloat defaultHighlightedShadowOpacity; // ivar: _defaultHighlightedShadowOpacity
@property (nonatomic) CGFloat defaultHighlightedShadowRadius; // ivar: _defaultHighlightedShadowRadius
@property (nonatomic) CGFloat defaultHighlightedShadowVerticalOffset; // ivar: _defaultHighlightedShadowVerticalOffset
@property (nonatomic) CGFloat defaultSelectedShadowVerticalOffset; // ivar: _defaultSelectedShadowVerticalOffset
@property (nonatomic) CGFloat defaultUnfocusedShadowOpacity; // ivar: _defaultUnfocusedShadowOpacity
@property (nonatomic) CGFloat defaultUnfocusedShadowRadius; // ivar: _defaultUnfocusedShadowRadius
@property (nonatomic) CGFloat defaultUnfocusedShadowVerticalOffset; // ivar: _defaultUnfocusedShadowVerticalOffset
@property (nonatomic) BOOL disableMask; // ivar: _disableMask
@property (nonatomic) BOOL flatImageContainsCornerRadius; // ivar: _flatImageContainsCornerRadius
@property (readonly, copy, nonatomic) _UIFocusAnimationConfiguration *focusAnimationConfiguration;
@property (nonatomic) CGFloat focusCursorBorderWidth; // ivar: _focusCursorBorderWidth
@property (nonatomic) BOOL focusCursorEnabled; // ivar: _focusCursorEnabled
@property (nonatomic) CGFloat focusCursorShadowOpacityAdjustment; // ivar: _focusCursorShadowOpacityAdjustment
@property (nonatomic) BOOL fullBleedCenteredGrowth; // ivar: _fullBleedCenteredGrowth
@property (nonatomic) CGFloat fullBleedFocusedShadowOpacity; // ivar: _fullBleedFocusedShadowOpacity
@property (nonatomic) CGFloat fullBleedFocusedShadowRadius; // ivar: _fullBleedFocusedShadowRadius
@property (nonatomic) CGFloat fullBleedOffset; // ivar: _fullBleedOffset
@property (nonatomic) CGFloat fullBleedUnfocusedShadowOpacity; // ivar: _fullBleedUnfocusedShadowOpacity
@property (nonatomic) CGFloat fullBleedUnfocusedShadowRadius; // ivar: _fullBleedUnfocusedShadowRadius
@property (nonatomic) BOOL hueShift; // ivar: _hueShift
@property (nonatomic) CGFloat layerSelectionDuration; // ivar: _layerSelectionDuration
@property (nonatomic) CGFloat layerUnselectionDuration; // ivar: _layerUnselectionDuration
@property (nonatomic) CGFloat maximumParallaxDepth; // ivar: _maximumParallaxDepth
@property (nonatomic) NSUInteger maximumParallaxImages; // ivar: _maximumParallaxImages
@property (nonatomic) CGFloat minimumFocusDuration; // ivar: _minimumFocusDuration
@property (nonatomic) CGFloat overlayDepth; // ivar: _overlayDepth
@property (nonatomic) BOOL overlayFixedFrame; // ivar: _overlayFixedFrame
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (nonatomic) CGFloat pressedDuration; // ivar: _pressedDuration
@property (nonatomic) CGFloat pressedScaleAdjustment; // ivar: _pressedScaleAdjustment
@property (nonatomic) CGFloat radiosityOffset; // ivar: _radiosityOffset
@property (nonatomic) CGFloat radiosityStrength; // ivar: _radiosityStrength
@property (nonatomic) CGFloat repositionUnselectionDuration; // ivar: _repositionUnselectionDuration
@property (nonatomic) CGFloat rotationAmount; // ivar: _rotationAmount
@property (nonatomic) CGFloat scaleSizeIncrease; // ivar: _scaleSizeIncrease
@property (nonatomic) CGFloat shadowSelectionDuration; // ivar: _shadowSelectionDuration
@property (nonatomic) CGFloat shadowUnselectionDuration; // ivar: _shadowUnselectionDuration
@property (nonatomic) CGFloat specularHighlightHorizontalPositionSensitivity; // ivar: _specularHighlightHorizontalPositionSensitivity
@property (nonatomic) CGFloat specularHighlightVerticalPosition; // ivar: _specularHighlightVerticalPosition
@property (nonatomic) CGFloat specularHighlightVerticalPositionSensitivity; // ivar: _specularHighlightVerticalPositionSensitivity
@property (nonatomic) CGFloat specularOpacity; // ivar: _specularOpacity
@property (nonatomic) CGPoint translationOffset; // ivar: _translationOffset
@property (nonatomic) CGFloat unmaskedOverlayScaleFactor; // ivar: _unmaskedOverlayScaleFactor
@property (nonatomic) CGFloat unpressedDuration; // ivar: _unpressedDuration
@property (nonatomic) BOOL useSeparateUnfocusedShadowImage; // ivar: _useSeparateUnfocusedShadowImage
@property (nonatomic) CGFloat zDepth; // ivar: _zDepth


+(id)newAppIconConfiguration;
+(id)newStandardConfiguration;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_highContrastFocusIndicatorChanged:(id)arg0 ;
-(void)dealloc;


@end


#endif
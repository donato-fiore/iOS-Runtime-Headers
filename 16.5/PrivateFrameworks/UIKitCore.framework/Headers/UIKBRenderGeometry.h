// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBRENDERGEOMETRY_H
#define UIKBRENDERGEOMETRY_H

@class NSValue;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UIKBRenderGeometry : NSObject <NSCopying>



@property (nonatomic) NSUInteger concaveCorner; // ivar: _concaveCorner
@property (nonatomic) CGSize concaveCornerOffset; // ivar: _concaveCornerOffset
@property (nonatomic) BOOL detachedVariants; // ivar: _detachedVariants
@property (nonatomic) CGRect displayFrame; // ivar: _displayFrame
@property (readonly, nonatomic) UIEdgeInsets displayInsets;
@property (nonatomic) NSInteger flickDirection; // ivar: _flickDirection
@property (nonatomic) CGRect frame; // ivar: _frame
@property (nonatomic) CGRect layeredBackgroundPaddedFrame; // ivar: _layeredBackgroundPaddedFrame
@property (nonatomic) CGFloat layeredBackgroundRoundRectRadius; // ivar: _layeredBackgroundRoundRectRadius
@property (nonatomic) CGRect layeredForegroundPaddedFrame; // ivar: _layeredForegroundPaddedFrame
@property (nonatomic) CGFloat layeredForegroundRoundRectRadius; // ivar: _layeredForegroundRoundRectRadius
@property (nonatomic) UIEdgeInsets layoutMargins; // ivar: _layoutMargins
@property (nonatomic) CGRect paddedFrame; // ivar: _paddedFrame
@property (readonly, nonatomic) UIEdgeInsets paddedInsets;
@property (nonatomic) int popupBias; // ivar: _popupBias
@property (nonatomic) NSInteger popupDirection; // ivar: _popupDirection
@property (nonatomic) CGPoint popupSource; // ivar: _popupSource
@property (nonatomic) NSUInteger roundRectCorners; // ivar: _roundRectCorners
@property (nonatomic) CGFloat roundRectRadius; // ivar: _roundRectRadius
@property (retain, nonatomic) NSValue *splitLeftRect; // ivar: _splitLeftRect
@property (retain, nonatomic) NSValue *splitRightRect; // ivar: _splitRightRect
@property (nonatomic) CGRect symbolFrame; // ivar: _symbolFrame
@property (nonatomic) BOOL tallPopup; // ivar: _tallPopup


+(id)geometryWithFrame:(struct CGRect )arg0 paddedFrame:(struct CGRect )arg1 ;
+(id)geometryWithShape:(id)arg0 ;
+(id)sortedGeometries:(id)arg0 leftToRight:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)adjustForTranslucentGapsInFrameWithSize_10Key:(struct CGSize )arg0 centerX:(CGFloat)arg1 bottomEdge:(BOOL)arg2 topEdge:(BOOL)arg3 ;
-(NSUInteger)adjustForTranslucentGapsWithSize:(struct CGSize )arg0 inFrame:(struct CGRect )arg1 ;
-(id)_copyForDirection:(NSInteger)arg0 positionFactor:(CGFloat)arg1 inwardSizeFactor:(CGFloat)arg2 outwardSizeFactor:(CGFloat)arg3 perpendicularSizeFactor:(CGFloat)arg4 sizeAspectRatio:(CGFloat)arg5 scale:(CGFloat)arg6 ;
-(id)copyForFlickDirection:(NSInteger)arg0 scale:(CGFloat)arg1 ;
-(id)copyForPopupDirection:(NSInteger)arg0 scale:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)iPadVariantGeometries:(NSUInteger)arg0 rowLimit:(NSInteger)arg1 ;
-(id)iPhoneVariantGeometries:(NSUInteger)arg0 annotationIndex:(NSUInteger)arg1 ;
-(id)initWithShape:(id)arg0 ;
-(id)similarShape;
-(id)watchVariantGeometries:(NSUInteger)arg0 annotationIndex:(NSUInteger)arg1 ;
-(void)adjustForConsistentGapsWithSize:(struct CGSize )arg0 inFrame:(struct CGRect )arg1 ;
-(void)adjustToTopWithInsets:(struct UIEdgeInsets )arg0 ;
-(void)applyInsets:(struct UIEdgeInsets )arg0 ;
-(void)applyOffset:(struct CGPoint )arg0 ;
-(void)applyShadowInsets:(struct UIEdgeInsets )arg0 ;
-(void)makeIntegralWithScale:(CGFloat)arg0 ;
-(void)overlayWithGeometry:(id)arg0 ;


@end


#endif
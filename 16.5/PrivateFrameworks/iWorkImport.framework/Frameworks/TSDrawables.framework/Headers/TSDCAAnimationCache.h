// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDCAANIMATIONCACHE_H
#define TSDCAANIMATIONCACHE_H

@class NSDictionary, CAAnimation, CALayer;
@protocol TSDCAAnimationContextCacheProtocol;

#import <Foundation/Foundation.h>


@interface TSDCAAnimationCache : NSObject {
    NSDictionary *_overrideInitialValuesDict;
    CGFloat _animationDuration;
}


@property (readonly, nonatomic) BOOL anchorPointAnimationExists; // ivar: _anchorPointAnimationExists
@property (readonly, nonatomic) CGPoint anchorPointInitialValue; // ivar: _anchorPointInitialValue
@property (readonly, nonatomic) BOOL anchorPointZAnimationExists; // ivar: _anchorPointZAnimationExists
@property (readonly, nonatomic) CGFloat anchorPointZInitialValue; // ivar: _anchorPointZInitialValue
@property (readonly, nonatomic) CAAnimation *animation; // ivar: _animation
@property (readonly, nonatomic) NSObject<TSDCAAnimationContextCacheProtocol> *animationContextCache; // ivar: _animationContextCache
@property (readonly, nonatomic) BOOL borderColorAnimationExists; // ivar: _borderColorAnimationExists
@property (readonly, nonatomic) *CGColor borderColorInitialValue; // ivar: _borderColorInitialValue
@property (readonly, nonatomic) BOOL borderWidthAnimationExists; // ivar: _borderWidthAnimationExists
@property (readonly, nonatomic) CGFloat borderWidthInitialValue; // ivar: _borderWidthInitialValue
@property (readonly, nonatomic) BOOL boundsAnimationExists; // ivar: _boundsAnimationExists
@property (readonly, nonatomic) CGRect boundsInitialValue; // ivar: _boundsInitialValue
@property (readonly, nonatomic) BOOL contentsAnimationExists; // ivar: _contentsAnimationExists
@property (readonly, nonatomic) _TSDContentBlend contentsInitialValue; // ivar: _contentsInitialValue
@property (readonly, nonatomic) BOOL doubleSidedAnimationExists; // ivar: _doubleSidedAnimationExists
@property (readonly, nonatomic) BOOL doubleSidedInitialValue; // ivar: _doubleSidedInitialValue
@property (readonly, nonatomic) BOOL hiddenAnimationExists; // ivar: _hiddenAnimationExists
@property (readonly, nonatomic) BOOL hiddenInitialValue; // ivar: _hiddenInitialValue
@property (readonly, nonatomic) NSDictionary *initialValues; // ivar: _initialValues
@property (readonly, nonatomic) CALayer *layer; // ivar: _layer
@property (readonly, nonatomic) BOOL opacityAnimationExists; // ivar: _opacityAnimationExists
@property (readonly, nonatomic) CGFloat opacityInitialValue; // ivar: _opacityInitialValue
@property (readonly, nonatomic) BOOL positionAnimationExists; // ivar: _positionAnimationExists
@property (readonly, nonatomic) CGPoint positionInitialValue; // ivar: _positionInitialValue
@property (readonly, nonatomic) BOOL transformAnimationExists; // ivar: _transformAnimationExists
@property (readonly, nonatomic) CATransform3D transformInitialValue; // ivar: _transformInitialValue
@property (readonly, nonatomic) BOOL transformRotationAnimationExists; // ivar: _transformRotationAnimationExists
@property (readonly, nonatomic) CGFloat transformRotationInitialValue; // ivar: _transformRotationInitialValue
@property (readonly, nonatomic) BOOL transformRotationXAnimationExists; // ivar: _transformRotationXAnimationExists
@property (readonly, nonatomic) CGFloat transformRotationXInitialValue; // ivar: _transformRotationXInitialValue
@property (readonly, nonatomic) BOOL transformRotationYAnimationExists; // ivar: _transformRotationYAnimationExists
@property (readonly, nonatomic) CGFloat transformRotationYInitialValue; // ivar: _transformRotationYInitialValue
@property (readonly, nonatomic) BOOL transformRotationZAnimationExists; // ivar: _transformRotationZAnimationExists
@property (readonly, nonatomic) CGFloat transformRotationZInitialValue; // ivar: _transformRotationZInitialValue
@property (readonly, nonatomic) BOOL transformScaleXAnimationExists; // ivar: _transformScaleXAnimationExists
@property (readonly, nonatomic) CGFloat transformScaleXInitialValue; // ivar: _transformScaleXInitialValue
@property (readonly, nonatomic) BOOL transformScaleXYAnimationExists; // ivar: _transformScaleXYAnimationExists
@property (readonly, nonatomic) CGFloat transformScaleXYInitialValue; // ivar: _transformScaleXYInitialValue
@property (readonly, nonatomic) BOOL transformScaleYAnimationExists; // ivar: _transformScaleYAnimationExists
@property (readonly, nonatomic) CGFloat transformScaleYInitialValue; // ivar: _transformScaleYInitialValue
@property (readonly, nonatomic) BOOL transformTranslationAnimationExists; // ivar: _transformTranslationAnimationExists
@property (readonly, nonatomic) CGPoint transformTranslationInitialValue; // ivar: _transformTranslationInitialValue
@property (readonly, nonatomic) BOOL transformTranslationXAnimationExists; // ivar: _transformTranslationXAnimationExists
@property (readonly, nonatomic) CGFloat transformTranslationXInitialValue; // ivar: _transformTranslationXInitialValue
@property (readonly, nonatomic) BOOL transformTranslationYAnimationExists; // ivar: _transformTranslationYAnimationExists
@property (readonly, nonatomic) CGFloat transformTranslationYInitialValue; // ivar: _transformTranslationYInitialValue
@property (readonly, nonatomic) BOOL transformTranslationZAnimationExists; // ivar: _transformTranslationZAnimationExists
@property (readonly, nonatomic) CGFloat transformTranslationZInitialValue; // ivar: _transformTranslationZInitialValue
@property (readonly, nonatomic) BOOL zPositionAnimationExists; // ivar: _zPositionAnimationExists
@property (readonly, nonatomic) CGFloat zPositionInitialValue; // ivar: _zPositionInitialValue


+(id)supportedKeyPaths;
-(BOOL)doubleSidedCachedValueAtTime:(CGFloat)arg0 ;
-(BOOL)doubleSidedCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(BOOL)hiddenCachedValueAtTime:(CGFloat)arg0 ;
-(BOOL)hiddenCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(CGFloat)anchorPointZCachedValueAtTime:(CGFloat)arg0 ;
-(CGFloat)anchorPointZCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(CGFloat)animationPercentByApplyingTimingFunctionForKeyPath:(id)arg0 atTime:(CGFloat)arg1 ;
-(CGFloat)borderWidthCachedValueAtTime:(CGFloat)arg0 ;
-(CGFloat)borderWidthCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(CGFloat)opacityCachedValueAtTime:(CGFloat)arg0 ;
-(CGFloat)opacityCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(CGFloat)transformRotationCachedValueAtTime:(CGFloat)arg0 ;
-(CGFloat)transformRotationCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(CGFloat)transformRotationXCachedValueAtTime:(CGFloat)arg0 ;
-(CGFloat)transformRotationXCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(CGFloat)transformRotationYCachedValueAtTime:(CGFloat)arg0 ;
-(CGFloat)transformRotationYCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(CGFloat)transformRotationZCachedValueAtTime:(CGFloat)arg0 ;
-(CGFloat)transformRotationZCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(CGFloat)transformScaleXCachedValueAtTime:(CGFloat)arg0 ;
-(CGFloat)transformScaleXCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(CGFloat)transformScaleXYCachedValueAtTime:(CGFloat)arg0 ;
-(CGFloat)transformScaleXYCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(CGFloat)transformScaleYCachedValueAtTime:(CGFloat)arg0 ;
-(CGFloat)transformScaleYCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(CGFloat)transformTranslationXCachedValueAtTime:(CGFloat)arg0 ;
-(CGFloat)transformTranslationXCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(CGFloat)transformTranslationYCachedValueAtTime:(CGFloat)arg0 ;
-(CGFloat)transformTranslationYCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(CGFloat)transformTranslationZCachedValueAtTime:(CGFloat)arg0 ;
-(CGFloat)transformTranslationZCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(CGFloat)zPositionCachedValueAtTime:(CGFloat)arg0 ;
-(CGFloat)zPositionCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(id)getKeyPathsFromAnimation:(id)arg0 ;
-(id)initWithLayer:(id)arg0 animation:(id)arg1 overrideInitialValues:(id)arg2 cacheAnimationValues:(BOOL)arg3 ;
-(id)p_valueForKeyPath:(id)arg0 atTime:(CGFloat)arg1 ;
-(struct CATransform3D )transformCachedValueAtTime:(CGFloat)arg0 ;
-(struct CATransform3D )transformCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(struct CGPoint )anchorPointCachedValueAtTime:(CGFloat)arg0 ;
-(struct CGPoint )anchorPointCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(struct CGPoint )positionCachedValueAtTime:(CGFloat)arg0 ;
-(struct CGPoint )positionCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(struct CGPoint )transformTranslationCachedValueAtTime:(CGFloat)arg0 ;
-(struct CGPoint )transformTranslationCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(struct CGRect )boundsCachedValueAtTime:(CGFloat)arg0 ;
-(struct CGRect )boundsCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(struct _TSDContentBlend )contentsCachedValueAtTime:(CGFloat)arg0 ;
-(struct _TSDContentBlend )contentsCachedValueAtTime:(CGFloat)arg0 layer:(id)arg1 animation:(id)arg2 ;
-(void)p_setupAndCacheAnimationValues:(BOOL)arg0 ;


@end


#endif
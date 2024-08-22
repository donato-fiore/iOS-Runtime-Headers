// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFOLDERCONTROLLERBACKGROUNDVIEW_H
#define SBFOLDERCONTROLLERBACKGROUNDVIEW_H

@class SBFFocusIsolationView, MTMaterialView, UIImageView, UIView;
@protocol SBFolderControllerBackgroundViewDelegate;



@interface SBFolderControllerBackgroundView : SBFFocusIsolationView {
    MTMaterialView *_blurView;
    UIImageView *_blurViewSnapshot;
    UIView *_tintView;
    UIView *_debugFreezingView;
}


@property (readonly, nonatomic) NSUInteger concreteEffect;
@property (nonatomic) NSUInteger currentEffect; // ivar: _currentEffect
@property (weak, nonatomic) NSObject<SBFolderControllerBackgroundViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger effect; // ivar: _effect
@property (nonatomic, getter=isEffectActive) BOOL effectActive; // ivar: _effectActive
@property (nonatomic, getter=isExpanding) BOOL expanding; // ivar: _expanding
@property (nonatomic, getter=isFrozen) BOOL frozen; // ivar: _frozen
@property (nonatomic, getter=isReduceTransparencyEnabled) BOOL reduceTransparencyEnabled; // ivar: _reduceTransparencyEnabled
@property (nonatomic, getter=isTransitionCancelled) BOOL transitionCancelled; // ivar: _transitionCancelled


+(id)_tintColorForEffect:(NSUInteger)arg0 ;
-(BOOL)_isCurrentlyExpanding;
-(CGFloat)minimumHomeScreenScale;
-(id)currentEffectMaterialRecipeNameForHighQualityBlur:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_reduceTransparencyEnabledStateChanged;
-(void)_updateCurrentEffect;
-(void)layoutSubviews;


@end


#endif
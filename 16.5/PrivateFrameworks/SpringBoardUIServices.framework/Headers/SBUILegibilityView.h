// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUILEGIBILITYVIEW_H
#define SBUILEGIBILITYVIEW_H

@class UIView, NSMutableArray, NSString, UIImage, NSMutableDictionary;
@protocol SBUILegibilityResultDisplaying, SBUILegibilityEngineProviding, SBUILegibilityEngine, SBUILegibilitySettings;


#import "SBUILegibilityShadowView.h"
#import "SBUILegibilityContainerView.h"

@interface SBUILegibilityView : UIView <SBUILegibilityResultDisplaying, SBUILegibilityEngineProviding>

 {
    SBUILegibilityShadowView *_shadowImageView;
    SBUILegibilityContainerView *_imageView;
    NSMutableArray *_runningAsyncOperations;
    BOOL _needsUpdateShadow;
    id<SBUILegibilityEngine> *_legibilityEngine;
}


@property (nonatomic) BOOL backfillTemplateResults; // ivar: _backfillTemplateResults
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesImage; // ivar: _hidesImage
@property (nonatomic) UIEdgeInsets hitTestEdgeInsets; // ivar: _hitTestEdgeInsets
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) NSObject<SBUILegibilityEngine> *legibilityEngine;
@property (retain, nonatomic) NSObject<SBUILegibilitySettings> *legibilitySettings; // ivar: _legibilitySettings
@property (readonly, nonatomic) NSInteger options; // ivar: _options
@property (readonly, nonatomic) UIImage *origImage;
@property (readonly, nonatomic) UIImage *shadowImage;
@property (nonatomic) CGFloat strength; // ivar: _strength
@property (readonly, nonatomic) UIImage *strengthenedImage;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *userInfo; // ivar: _userInfo
@property (nonatomic) BOOL usesColorFilters; // ivar: _usesColorFilters


-(BOOL)_updateContentImageView:(id)arg0 ;
-(BOOL)_updateFilters;
-(BOOL)_updateOptions:(NSInteger)arg0 ;
-(BOOL)_updateSettings:(id)arg0 ;
-(BOOL)_updateShadow;
-(BOOL)_updateStrength:(CGFloat)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)usesSecondaryColor;
-(id)drawingColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSettings:(id)arg0 strength:(CGFloat)arg1 image:(id)arg2 ;
-(id)shadowColor;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_cancelOperations;
-(void)_clearShadowAndMarkNeedsNew;
-(void)_redrawShadowForNewContainer;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)updateForChangedSettings:(id)arg0 ;
-(void)updateForChangedSettings:(id)arg0 options:(NSInteger)arg1 ;
-(void)updateForChangedSettings:(id)arg0 options:(NSInteger)arg1 image:(id)arg2 strength:(CGFloat)arg3 ;
-(void)updateImage;
-(void)updateOrigImage:(id)arg0 shadowImage:(id)arg1 strengthenedShadowImage:(id)arg2 settings:(id)arg3 engine:(id)arg4 isTemplate:(BOOL)arg5 withStrength:(*CGFloat)arg6 context:(id)arg7 ;
-(void)willMoveToSuperview:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif
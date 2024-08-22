// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUISTACKEDIMAGEVIEW_H
#define VUISTACKEDIMAGEVIEW_H

@class UIView, UIImage, _UIStackedImageContainerLayer, _UIStackedImageConfiguration, UIMotionEffectGroup, NSString, NSShadow;
@protocol VUIAuxiliaryViewSelecting;


#import "VUIStackedImageNamedLayerStack.h"
#import "VUIImageProxy.h"

@interface VUIStackedImageView : UIView <VUIAuxiliaryViewSelecting>

 {
    UIImage *_staticImage;
    _UIStackedImageContainerLayer *_imageStackLayer;
    _UIStackedImageConfiguration *_imageStackConfig;
    VUIStackedImageNamedLayerStack *_uiLayerStack;
    UIMotionEffectGroup *_motionEffectGroup;
    CGFloat _layerSelectionDuration;
    CGFloat _layerUnselectionDuration;
    CGFloat _shadowSelectionDuration;
    CGFloat _shadowUnselectionDuration;
    CGFloat _repositionUnselectionDuration;
}


@property (nonatomic) BOOL allowsNonOpaqueShadow;
@property (nonatomic) NSUInteger controlState;
@property (nonatomic) CGFloat cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGPoint focusDirection;
@property (nonatomic) CGFloat focusSizeIncrease;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image;
@property (nonatomic, getter=isImageLoaded) BOOL imageLoaded; // ivar: _imageLoaded
@property (retain, nonatomic) VUIImageProxy *imageProxy; // ivar: _imageProxy
@property (nonatomic, getter=isOverlayComposited) BOOL overlayComposited; // ivar: _overlayComposited
@property (retain, nonatomic) UIView *overlayView; // ivar: _overlayView
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic, getter=isPressed) BOOL pressed;
@property (readonly, nonatomic) NSUInteger primaryControlState;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) NSInteger selectionStyle;
@property (copy, nonatomic) NSShadow *shadow; // ivar: _shadow
@property (nonatomic) CGSize stackSize; // ivar: _stackSize
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *unmaskedOverlayView; // ivar: _unmaskedOverlayView


+(Class)layerClass;
+(struct CGSize )_scaledSizeForSize:(struct CGSize )arg0 focusSizeIncrease:(CGFloat)arg1 selectionStyle:(NSInteger)arg2 ;
+(struct CGSize )_scaledSizeForSize:(struct CGSize )arg0 selectionStyle:(NSInteger)arg1 ;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg0 forMotionEffect:(id)arg1 ;
-(CGFloat)_idleModeFocusSizeOffset;
-(id)_layerBelowTitles;
-(id)_layeredImageContainerLayer;
-(id)_newImageConfiguration;
-(id)_preferredConfigurationForFocusAnimation:(NSInteger)arg0 inContext:(id)arg1 ;
-(id)initWithImage:(id)arg0 size:(struct CGSize )arg1 ;
-(id)initWithImageProxy:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )selectionMarginsForSize:(struct CGSize )arg0 ;
-(void)_attachMotionEffects;
-(void)_commitLayerStack:(id)arg0 ;
-(void)_detachMotionEffects;
-(void)_loadImage;
-(void)_updateImageSamplingOverlays;
-(void)_updateLayerStack:(id)arg0 withImage:(struct CGImage *)arg1 size:(struct CGSize )arg2 ;
-(void)_updateStackedImageConfiguration;
-(void)animateWithAuxiliarySelectionState:(BOOL)arg0 animations:(id)arg1 ;
-(void)dealloc;
-(void)setFocused:(BOOL)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif
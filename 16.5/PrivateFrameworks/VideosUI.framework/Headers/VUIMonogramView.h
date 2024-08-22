// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMONOGRAMVIEW_H
#define VUIMONOGRAMVIEW_H

@class UIFloatingContentView, NSString, UIImage, VUIImageProxy, VUIImageView, UIView;
@protocol _UIFloatingContentViewDelegate, VUIAuxiliaryViewSelecting;


#import "VUIBaseView.h"
#import "VUIMonogramViewConfiguration.h"
#import "VUIMonogramDescription.h"

@interface VUIMonogramView : UIFloatingContentView <_UIFloatingContentViewDelegate, VUIAuxiliaryViewSelecting>

 {
    VUIBaseView *_placeholderView;
    BOOL _isSelected;
}


@property (retain, nonatomic) VUIMonogramViewConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VUIBaseView *focusedShadowView; // ivar: _focusedShadowView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) VUIImageProxy *imageProxy; // ivar: _imageProxy
@property (retain, nonatomic) VUIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) VUIMonogramDescription *monogramDescription; // ivar: _monogramDescription
@property (retain, nonatomic) UIView *overlayView; // ivar: _overlayView
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (copy, nonatomic) id *pressCompletionBlock; // ivar: _pressCompletionBlock
@property (readonly) Class superclass;
@property (nonatomic) CGFloat unfocusedImageAlpha; // ivar: _unfocusedImageAlpha
@property (retain, nonatomic) VUIBaseView *unfocusedShadowView; // ivar: _unfocusedShadowView


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(struct UIEdgeInsets )selectionMarginsForSize:(struct CGSize )arg0 ;
-(void)_loadWithMonogramDescription:(id)arg0 imageProxy:(id)arg1 ;
-(void)_updateAppearanceForSelectionStateWithCoordinator:(id)arg0 ;
-(void)_updateFocusedShadowFrameAndLayerWithFrame:(struct CGRect )arg0 ;
-(void)_updatePlaceholerView;
-(void)_updateUnfocusedShadowFrameAndLayerWithFrame:(struct CGRect )arg0 ;
-(void)floatingContentView:(id)arg0 didFinishTransitioningToState:(NSUInteger)arg1 ;
-(void)floatingContentView:(id)arg0 isTransitioningFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setPressed:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setUnFocusedShadowView:(id)arg0 ;
-(void)updateShadowImage;


@end


#endif
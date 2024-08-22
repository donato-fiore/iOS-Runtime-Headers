// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIIMAGEVIEW_H
#define VUIIMAGEVIEW_H

@class UIControl, UIImage, UIImageView, CAFilter, UIColor, UIImageSymbolConfiguration;


#import "VUIImageProxy.h"

@interface VUIImageView : UIControl {
    BOOL _rendersImageAsTemplates;
    UIImage *_image;
    UIImageView *_imageView;
    NSUInteger _imageContentMode;
    UIImage *_flatImage;
    UIImage *_flatHighlightImage;
    BOOL _selected;
    CGFloat _cornerRadius;
    BOOL _continuousCorners;
    CGSize _previousSize;
    BOOL _handledSmartInvert;
    CAFilter *_highlightFilter;
}


@property (nonatomic, setter=_setEnableEdgeAntialiasingOnSelected:) BOOL _enableEdgeAntialiasingOnSelected; // ivar: __enableEdgeAntialiasingOnSelected
@property (retain, nonatomic, setter=_setFocusedColor:) UIColor *_focusedColor; // ivar: __focusedColor
@property (retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor; // ivar: __tintColor
@property (nonatomic) BOOL animatesShadowChanges; // ivar: _animatesShadowChanges
@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) CGFloat cornerRadius;
@property (copy, nonatomic) id *dynamicProxyProvider; // ivar: _dynamicProxyProvider
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL imageContainsCornerRadius; // ivar: _imageContainsCornerRadius
@property (nonatomic) BOOL imageContainsShadow; // ivar: _imageContainsShadow
@property (nonatomic, getter=isImageLoaded) BOOL imageLoaded; // ivar: _imageLoaded
@property (retain, nonatomic) VUIImageProxy *imageProxy; // ivar: _imageProxy
@property (retain, nonatomic) UIColor *placeholderColor; // ivar: _placeholderColor
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (retain, nonatomic, setter=_setPreferredSymbolConfiguration:) UIImageSymbolConfiguration *preferredSymbolConfiguration; // ivar: _preferredSymbolConfiguration
@property (nonatomic, getter=isResourceImage) BOOL resourceImage; // ivar: _resourceImage
@property (nonatomic) CGSize resourceOrSymbolSize; // ivar: _resourceOrSymbolSize
@property (copy, nonatomic) id *shadowPathUpdater; // ivar: _shadowPathUpdater
@property (nonatomic) _VUICornerRadii shadowRadii; // ivar: _shadowRadii
@property (nonatomic) BOOL shouldScaleToSize; // ivar: _shouldScaleToSize
@property (nonatomic, getter=isSymbolImage) BOOL symbolImage; // ivar: _symbolImage


-(BOOL)vuiIsUserInteractionEnabled;
-(CGFloat)_continuousCornerRadius;
-(NSUInteger)vuiContentMode;
-(id)_imageProxyWithSize:(struct CGSize )arg0 ;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)backgroundColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)vuiBackgroundColor;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)_loadImage;
-(void)_reloadImageForLayoutDirectionChange;
-(void)_resetContentRect;
-(void)_setContentRectInPixels:(struct CGRect )arg0 forContentSize:(struct CGSize )arg1 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_updateCornerRadius;
-(void)_updateFlatImageWithImage:(id)arg0 ;
-(void)_updateImageView;
-(void)_updateTintColor;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setVuiBackgroundColor:(id)arg0 ;
-(void)setVuiContentMode:(NSUInteger)arg0 ;
-(void)setVuiUserInteractionEnabled:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)vui_setHighlighted:(BOOL)arg0 ;
-(void)vui_setSelected:(BOOL)arg0 animated:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)vui_traitCollectionDidChange:(id)arg0 ;
-(void)vui_willMoveToWindow:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif
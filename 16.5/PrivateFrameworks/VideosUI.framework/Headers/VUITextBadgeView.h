// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUITEXTBADGEVIEW_H
#define VUITEXTBADGEVIEW_H

@class NSAttributedString, UIColor, UIImage, NSTimer, NSArray, UIView, NSOperationQueue, NSOperation;
@protocol VUITextBadgeViewDelegate;


#import "VUIBaseView.h"
#import "VUIRentalExpirationLabel.h"

@interface VUITextBadgeView : VUIBaseView

@property (copy, nonatomic) NSAttributedString *attributedTitle; // ivar: _attributedTitle
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIImage *backgroundImage; // ivar: _backgroundImage
@property (retain, nonatomic) UIImage *backgroundImageForMaterialRendering; // ivar: _backgroundImageForMaterialRendering
@property (nonatomic) BOOL backgroundImageForMaterialRenderingHasChanged; // ivar: _backgroundImageForMaterialRenderingHasChanged
@property (nonatomic) NSUInteger badgeKind; // ivar: _badgeKind
@property (nonatomic) int blendMode; // ivar: _blendMode
@property (weak, nonatomic) NSObject<VUITextBadgeViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSTimer *expiryUpdateTimer; // ivar: _expiryUpdateTimer
@property (nonatomic) CGSize glyphSize; // ivar: _glyphSize
@property (retain, nonatomic) NSArray *gradientBgColors; // ivar: _gradientBgColors
@property (retain, nonatomic) UIView *imageView; // ivar: _imageView
@property (nonatomic) BOOL isUppercased; // ivar: _isUppercased
@property (nonatomic) CGFloat layerCornerRadius; // ivar: _layerCornerRadius
@property (nonatomic) CGFloat minHeight; // ivar: _minHeight
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (retain, nonatomic) NSOperation *pendingOperation; // ivar: _pendingOperation
@property (retain, nonatomic) VUIRentalExpirationLabel *rentalExpirationLabel; // ivar: _rentalExpirationLabel
@property (nonatomic) CGFloat strokeSize; // ivar: _strokeSize
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


+(BOOL)_viewBackgroundImageNeedsUpdatingWithFrame:(struct CGRect )arg0 currentBackgroundImage:(id)arg1 ;
+(id)badgeWithLayout:(id)arg0 existing:(id)arg1 ;
-(BOOL)_textBadgeBackgroundImageNeedsUpdating;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_textSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)_cancelPendingOperation;
-(void)_configureWithLayout:(id)arg0 ;
-(void)_imageLoaded;
-(void)_invalidateTimer;
-(void)_redrawTextBadgeWithDuration:(CGFloat)arg0 ;
-(void)_redrawView:(id)arg0 withDuration:(CGFloat)arg1 ;
-(void)_updateBackgroundImagesWithCompletedOperation:(id)arg0 ;
-(void)_updateBackgroundMaterialImagesWithBackgroundImageSize:(struct CGSize )arg0 performSynchronously:(BOOL)arg1 overlayViewFrame:(struct CGRect )arg2 ;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg0 ;
-(void)reset;


@end


#endif
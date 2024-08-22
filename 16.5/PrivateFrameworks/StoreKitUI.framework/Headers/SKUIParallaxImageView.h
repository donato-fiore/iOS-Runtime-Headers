// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIPARALLAXIMAGEVIEW_H
#define SKUIPARALLAXIMAGEVIEW_H

@class NSString;
@protocol SKUIPerspectiveView;


#import "SKUIImageView.h"

@interface SKUIParallaxImageView : SKUIImageView <SKUIPerspectiveView>

 {
    UIEdgeInsets _imagePadding;
    CGSize _imageSize;
    SKUIImageView *_innerImageView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)maximumPerspectiveHeightForSize:(struct CGSize )arg0 ;
-(id)image;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)placeholder;
-(struct CGSize )imageSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateInnerImageView;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setImagePadding:(struct UIEdgeInsets )arg0 ;
-(void)setImageSize:(struct CGSize )arg0 ;
-(void)setPerspectiveTargetView:(id)arg0 ;
-(void)setPlaceholder:(id)arg0 ;
-(void)setVanishingPoint:(struct CGPoint )arg0 ;
-(void)updateForChangedDistanceFromVanishingPoint;


@end


#endif
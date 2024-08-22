// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHDOUBLESIDEDICONIMAGECROSSFADEVIEW_H
#define SBHDOUBLESIDEDICONIMAGECROSSFADEVIEW_H



#import "SBIconImageCrossfadeView.h"

@interface SBHDoubleSidedIconImageCrossfadeView : SBIconImageCrossfadeView {
    CGFloat _scaleX;
    CGFloat _scaleY;
    CGFloat _cornerRadius;
}




+(Class)_containerViewClass;
+(Class)layerClass;
-(void)_applyCornerRadius:(CGFloat)arg0 ;
-(void)_applyCornerRadiusToBackgroundView;
-(void)_applyCornerRadiusToCrossfadeView;
-(void)_applyCornerRadiusToIconImageView;
-(void)_applyCornerRadiusToViews;
-(void)_applyCrossfadeScaleX:(CGFloat)arg0 scaleY:(CGFloat)arg1 ;
-(void)_setCornerRadiusEnabled:(BOOL)arg0 ;
-(void)cleanup;
-(void)layoutSubviews;
-(void)prepareGeometry;


@end


#endif
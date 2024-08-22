// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUILEGIBILITYSHADOWVIEW_H
#define SBUILEGIBILITYSHADOWVIEW_H

@class UIImage;


#import "SBUILegibilityContainerView.h"

@interface SBUILegibilityShadowView : SBUILegibilityContainerView

@property (nonatomic) CGFloat strength;
@property (readonly, nonatomic) UIImage *strengthenedImage;


-(BOOL)_updateFilters;
-(id)_contentColor;
-(void)setImage:(id)arg0 strengthenedImage:(id)arg1 strength:(CGFloat)arg2 ;


@end


#endif
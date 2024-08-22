// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBSYSTEMAPERTUREGAINMAPVIEW_H
#define _SBSYSTEMAPERTUREGAINMAPVIEW_H

@class UIView;
@protocol SBSystemApertureGainMapBackedRendering;


#import "_SBGainMapView.h"

@interface _SBSystemApertureGainMapView : UIView <SBSystemApertureGainMapBackedRendering>

 {
    _SBGainMapView *_gainMapView;
    SBSystemApertureContainerRenderingConfiguration _renderingConfiguration;
    UIView *_clonedGainMapSubstituteView;
}


@property (nonatomic) SBSystemApertureContainerRenderingConfiguration renderingConfiguration;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_setCornerRadius:(CGFloat)arg0 ;
-(void)sb_setID0CornerRadius:(CGFloat)arg0 ;


@end


#endif
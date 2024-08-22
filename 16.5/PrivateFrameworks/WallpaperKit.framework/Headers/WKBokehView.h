// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKBOKEHVIEW_H
#define WKBOKEHVIEW_H

@class UIView, CAGradientLayer, NSMutableArray, CADisplayLink;


#import "WKBokehMotionFilter.h"
#import "WKBokehWallpaperInput.h"

@interface WKBokehView : UIView {
    WKBokehMotionFilter *_motionFilter;
    CAGradientLayer *_contentLayer;
    NSMutableArray *_bubbles;
    CADisplayLink *_displayLink;
}


@property (copy, nonatomic) WKBokehWallpaperInput *bokehWallpaperInput; // ivar: _bokehWallpaperInput


+(id)thumbnailImageWithBokehInput:(id)arg0 ;
-(id)initWithBokehWallpaperInput:(id)arg0 ;
-(void)_screenDidUpdate:(id)arg0 ;
-(void)layoutSubviews;
-(void)setAnimationEnabled:(BOOL)arg0 ;


@end


#endif
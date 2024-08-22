// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSWITCHERWALLPAPERPAGECONTENTVIEW_H
#define SBSWITCHERWALLPAPERPAGECONTENTVIEW_H

@class UIView, SBOrientationTransformWrapperView, NSString;
@protocol SBAppSwitcherPageContentView;


#import "SBWallpaperEffectView.h"

@interface SBSwitcherWallpaperPageContentView : UIView <SBAppSwitcherPageContentView>

 {
    SBOrientationTransformWrapperView *_wallpaperWrapperView;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) BOOL contentRequiresGroupOpacity;
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger desiredWallpaperOrientation; // ivar: _desiredWallpaperOrientation
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maskedCorners; // ivar: _maskedCorners
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible
@property (readonly, nonatomic) SBWallpaperEffectView *wallpaperEffectView; // ivar: _wallpaperEffectView
@property (nonatomic) NSInteger wallpaperStyle; // ivar: _wallpaperStyle


-(id)_viewForWallpaperWrapper;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_wallpaperFrame;
-(void)_updateCornerRadius;
-(void)_updateWallpaperOrientation;
-(void)invalidate;
-(void)layoutSubviews;


@end


#endif
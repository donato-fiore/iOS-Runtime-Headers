// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMNOTESBACKGROUNDVIEW_H
#define SBSYSTEMNOTESBACKGROUNDVIEW_H

@class UIView, UIVisualEffectView, NSString;
@protocol PTSettingsKeyObserver, SBApplicationSceneBackgroundView;


#import "SBSystemNotesAppearanceSettings.h"

@interface SBSystemNotesBackgroundView : UIView <PTSettingsKeyObserver, SBApplicationSceneBackgroundView>

 {
    UIView *_tintView;
    UIVisualEffectView *_backgroundEffectView;
    SBSystemNotesAppearanceSettings *_appearanceSettings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsClassicModeBackground;
@property (nonatomic) BOOL shouldUseBrightMaterial;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger transformOptions;
@property (nonatomic) NSInteger wallpaperStyle;


-(id)_backgroundColorFromSettings:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateTintView;
-(void)dealloc;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif
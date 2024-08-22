// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSPOTLIGHTLEGIBILITYPROVIDER_H
#define SBSPOTLIGHTLEGIBILITYPROVIDER_H

@class _UILegibilitySettings, NSString;
@protocol PBUIWallpaperObserver, SBFLegibilitySettingsProvider, SBFLegibilitySettingsProviderDelegate;

#import <Foundation/Foundation.h>

#import "SBWallpaperController.h"

@interface SBSpotlightLegibilityProvider : NSObject <PBUIWallpaperObserver, SBFLegibilitySettingsProvider>

 {
    NSInteger _variant;
    SBWallpaperController *_wallpaperController;
    _UILegibilitySettings *_currentLegibilitySettings;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFLegibilitySettingsProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) Class superclass;


-(id)initWithVariant:(NSInteger)arg0 ;
-(id)initWithVariant:(NSInteger)arg0 wallpaperController:(id)arg1 ;
-(struct CGRect )_rectForSpotlightHeader;
-(void)_calculateLegibilitySettings;
-(void)dealloc;
-(void)wallpaperDidChangeForVariant:(NSInteger)arg0 ;
-(void)wallpaperGeometryDidChangeForVariant:(NSInteger)arg0 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg0 forVariant:(NSInteger)arg1 ;


@end


#endif
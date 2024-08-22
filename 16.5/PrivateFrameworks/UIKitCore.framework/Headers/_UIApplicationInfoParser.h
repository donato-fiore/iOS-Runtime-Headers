// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIAPPLICATIONINFOPARSER_H
#define _UIAPPLICATIONINFOPARSER_H

@class NSArray, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface _UIApplicationInfoParser : NSObject {
    BOOL _isYukonLinked;
}


@property (readonly, nonatomic) NSInteger backgroundStyle; // ivar: _backgroundStyle
@property (readonly, nonatomic) BOOL canChangeBackgroundStyle; // ivar: _canChangeBackgroundStyle
@property (readonly, copy, nonatomic) NSArray *canvasDefinitions; // ivar: _canvasDefinitions
@property (readonly, copy, nonatomic) NSArray *deviceFamilies; // ivar: _deviceFamilies
@property (readonly, nonatomic) BOOL disableLayoutAwareShortcuts; // ivar: _disableLayoutAwareShortcuts
@property (readonly, nonatomic) BOOL fakingRequiresHighResolution; // ivar: _fakingRequiresHighResolution
@property (readonly, nonatomic) BOOL focusEnabledInLimitedControls; // ivar: _focusEnabledInLimitedControls
@property (readonly, nonatomic) BOOL focusSystemEnabled; // ivar: _focusSystemEnabled
@property (readonly, nonatomic) BOOL forcesDefaultFocusAppearance; // ivar: _forcesDefaultFocusAppearance
@property (readonly, nonatomic) NSUInteger ignoredOverrides; // ivar: _ignoredOverrides
@property (readonly, nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (readonly, nonatomic) BOOL isExitsOnSuspend; // ivar: _isExitsOnSuspend
@property (readonly, copy, nonatomic) NSString *keyColorAssetName; // ivar: _keyColorAssetName
@property (readonly, copy, nonatomic) NSString *launchImageFile; // ivar: _launchImageFile
@property (readonly, nonatomic) NSInteger launchingInterfaceOrientationForSpringBoard; // ivar: _launchingInterfaceOrientationForSpringBoard
@property (readonly, nonatomic) BOOL optOutOfRTL; // ivar: _optOutOfRTL
@property (readonly, nonatomic) NSInteger requestedStatusBarStyle; // ivar: _requestedStatusBarStyle
@property (readonly, nonatomic) BOOL requiresGameControllerBasedFocus; // ivar: _requiresGameControllerBasedFocus
@property (readonly, nonatomic) BOOL requiresHighResolution; // ivar: _requiresHighResolution
@property (readonly, copy, nonatomic) NSDictionary *sceneConfigurations; // ivar: _sceneConfigurations
@property (readonly, nonatomic) BOOL statusBarHidden; // ivar: _statusBarHidden
@property (readonly, nonatomic) BOOL statusBarHiddenWhenVerticallyCompact; // ivar: _statusBarHiddenWhenVerticallyCompact
@property (readonly, nonatomic) NSUInteger supportedInterfaceOrientations; // ivar: _supportedInterfaceOrientations
@property (readonly, nonatomic) BOOL supportedOnLockScreen; // ivar: _supportedOnLockScreen
@property (readonly, nonatomic) NSInteger supportedUserInterfaceStyle; // ivar: _supportedUserInterfaceStyle
@property (readonly, nonatomic) BOOL supportsAlwaysOnDisplay; // ivar: _supportsAlwaysOnDisplay
@property (readonly, nonatomic) BOOL supportsBacklightEnvironment; // ivar: _supportsBacklightEnvironment
@property (readonly, nonatomic) BOOL supportsIndirectInputEvents; // ivar: _supportsIndirectInputEvents
@property (readonly, nonatomic) BOOL supportsMultiwindow; // ivar: _supportsMultiwindow
@property (readonly, nonatomic) BOOL supportsPrintCommand; // ivar: _supportsPrintCommand
@property (readonly, nonatomic) BOOL systemWindowsSecure; // ivar: _systemWindowsSecure
@property (readonly, nonatomic) NSUInteger viewControllerBasedStatusBarAppearance; // ivar: _viewControllerBasedStatusBarAppearance
@property (readonly, nonatomic) NSInteger whitePointAdaptivityStyle; // ivar: _whitePointAdaptivityStyle


+(id)mainBundleInfoParser;
-(BOOL)_isLinkedOnOrAfterYukon;
-(id)_initWithApplicationPlistData:(id)arg0 ;
-(id)_initWithBundle:(id)arg0 ;
-(id)initWithApplicationProxy:(id)arg0 ;
-(void)_computeSupportedInterfaceOrientationsWithInfo:(id)arg0 ;
-(void)_computeSupportedUserInterfaceStyleFromInfo:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHHOMESCREENSETTINGS_H
#define SBHHOMESCREENSETTINGS_H

@class PTSettings;


#import "SBHAppLibrarySettings.h"
#import "SBHHomePullToSearchSettings.h"
#import "SBHFolderSettings.h"
#import "SBHIconAnimationRootSettings.h"
#import "SBHIconEditingSettings.h"
#import "SBHIconSettings.h"
#import "SBHRootFolderSettings.h"
#import "SBHWidgetIntroductionSettings.h"
#import "SBHWidgetSettings.h"

@interface SBHHomeScreenSettings : PTSettings

@property (retain, nonatomic) SBHAppLibrarySettings *appLibrarySettings; // ivar: _appLibrarySettings
@property (retain, nonatomic) SBHHomePullToSearchSettings *coversheetPullToSearchSettings; // ivar: _coversheetPullToSearchSettings
@property (retain, nonatomic) SBHFolderSettings *folderSettings; // ivar: _folderSettings
@property (retain, nonatomic) SBHHomePullToSearchSettings *homeScreenPullToSearchSettings; // ivar: _homeScreenPullToSearchSettings
@property (retain, nonatomic) SBHIconAnimationRootSettings *iconAnimationSettings; // ivar: _iconAnimationSettings
@property (retain, nonatomic) SBHIconEditingSettings *iconEditingSettings; // ivar: _iconEditingSettings
@property (retain, nonatomic) SBHIconSettings *iconSettings; // ivar: _iconSettings
@property (retain, nonatomic) SBHHomePullToSearchSettings *libraryPullToSearchSettings; // ivar: _libraryPullToSearchSettings
@property (retain, nonatomic) SBHRootFolderSettings *rootFolderSettings; // ivar: _rootFolderSettings
@property (nonatomic) BOOL showPopOvers; // ivar: _showPopOvers
@property (retain, nonatomic) SBHHomePullToSearchSettings *todayViewPullToSearchSettings; // ivar: _todayViewPullToSearchSettings
@property (nonatomic) BOOL usesMinimumViableHomeScreen; // ivar: _usesMinimumViableHomeScreen
@property (retain, nonatomic) SBHWidgetIntroductionSettings *widgetIntroductionSettings; // ivar: _widgetIntroductionSettings
@property (retain, nonatomic) SBHWidgetSettings *widgetSettings; // ivar: _widgetSettings


+(id)homeScreenDefaults;
+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif
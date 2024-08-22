// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFWALLPAPERCONFIGURATIONMANAGER_H
#define SBFWALLPAPERCONFIGURATIONMANAGER_H

@class PBUIWallpaperConfigurationManager, NSArray;



@interface SBFWallpaperConfigurationManager : PBUIWallpaperConfigurationManager

@property (readonly, copy, nonatomic) NSArray *dataStores;


-(id)wallpaperConfigurationForVariant:(NSInteger)arg0 includingValuesForTypes:(NSUInteger)arg1 ;
-(id)wallpaperConfigurationForVariant:(NSInteger)arg0 includingValuesForTypes:(NSUInteger)arg1 wallpaperMode:(NSInteger)arg2 ;


@end


#endif
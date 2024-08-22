// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFWALLPAPERCOREANALYTICSLOGGER_H
#define SBFWALLPAPERCOREANALYTICSLOGGER_H

@class PBUIWallpaperDefaultsDomain, NSString;

#import <Foundation/Foundation.h>


@interface SBFWallpaperCoreAnalyticsLogger : NSObject {
    PBUIWallpaperDefaultsDomain *_wallpaperDefaultsDomain;
    NSString *_homeType;
    NSString *_lockType;
    NSString *_homeName;
    NSString *_lockName;
    BOOL _irisEnabled;
    BOOL _sharedWallpaper;
}


@property (nonatomic) NSUInteger ageOfWallpaper; // ivar: _ageOfWallpaper


-(id)init;
-(id)initWithWallpaperDefaultsDomain:(id)arg0 ;
-(void)saveStateOfWallpaperToCoreAnalytics:(NSInteger)arg0 withHasVideo:(BOOL)arg1 hasProcedural:(BOOL)arg2 name:(id)arg3 ;
-(void)sendStateOfWallpaperToCoreAnalytics;


@end


#endif
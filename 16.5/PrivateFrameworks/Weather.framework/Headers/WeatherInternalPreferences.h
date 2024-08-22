// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEATHERINTERNALPREFERENCES_H
#define WEATHERINTERNALPREFERENCES_H

@class NSUserDefaults;
@protocol WeatherPreferencesPersistence;



@interface WeatherInternalPreferences : NSUserDefaults

@property (readonly, nonatomic) NSUInteger deviceInactivityThreshold;
@property (readonly, nonatomic) BOOL isInternalInstall;
@property (readonly, nonatomic) BOOL isV3Enabled;
@property (retain) NSObject<WeatherPreferencesPersistence> *persistence; // ivar: _persistence
@property (readonly, nonatomic) BOOL shouldShowUpdateTimestamp;


+(id)sharedInternalPreferences;


@end


#endif
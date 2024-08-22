// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMNOTESLAUNCHSETTINGS_H
#define SBSYSTEMNOTESLAUNCHSETTINGS_H

@class PTSettings, NSString;



@interface SBSystemNotesLaunchSettings : PTSettings

@property (copy, nonatomic) NSString *applicationBundleID; // ivar: _applicationBundleID


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif
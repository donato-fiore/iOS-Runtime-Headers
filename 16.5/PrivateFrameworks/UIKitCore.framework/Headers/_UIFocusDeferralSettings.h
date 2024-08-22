// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSDEFERRALSETTINGS_H
#define _UIFOCUSDEFERRALSETTINGS_H

@class PTSettings;



@interface _UIFocusDeferralSettings : PTSettings

@property (nonatomic) CGFloat userEngagementTimeoutInSeconds; // ivar: _userEngagementTimeoutInSeconds


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif
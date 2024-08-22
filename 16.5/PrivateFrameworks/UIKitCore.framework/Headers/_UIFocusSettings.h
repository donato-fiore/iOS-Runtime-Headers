// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSSETTINGS_H
#define _UIFOCUSSETTINGS_H

@class PTSettings;


#import "_UIFocusDeferralSettings.h"
#import "_UIFocusHaloSettings.h"
#import "_UIFocusLiftEffectSettings.h"

@interface _UIFocusSettings : PTSettings

@property (retain, nonatomic) _UIFocusDeferralSettings *deferralSettings; // ivar: _deferralSettings
@property (retain, nonatomic) _UIFocusHaloSettings *haloSettings; // ivar: _haloSettings
@property (retain, nonatomic) _UIFocusLiftEffectSettings *liftEffectSettings; // ivar: _liftEffectSettings


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif
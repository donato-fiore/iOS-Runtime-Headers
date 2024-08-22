// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGEBATTERYSAVESESSION_H
#define WIFIUSAGEBATTERYSAVESESSION_H



#import "WiFiUsageSession.h"

@interface WiFiUsageBatterySaveSession : WiFiUsageSession {
    BOOL _batterySaveMode;
}




-(id)initWithInterfaceName:(id)arg0 ;
-(id)metricName;
-(void)updateWowState:(BOOL)arg0 lpasState:(BOOL)arg1 lowPowerState:(BOOL)arg2 batterySaverState:(BOOL)arg3 ;


@end


#endif
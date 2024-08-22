// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTSIRIENABLEDMONITOR_H
#define VTSIRIENABLEDMONITOR_H



#import "VTEventMonitor.h"

@interface VTSiriEnabledMonitor : VTEventMonitor {
    BOOL _isSiriEnabled;
}




+(id)sharedInstance;
-(BOOL)isEnabled;
-(id)init;
-(void)_didReceiveSiriSettingChanged:(BOOL)arg0 ;
-(void)_notifyObserver:(id)arg0 withEnabled:(BOOL)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif
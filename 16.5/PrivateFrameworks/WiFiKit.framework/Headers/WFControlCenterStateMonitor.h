// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONTROLCENTERSTATEMONITOR_H
#define WFCONTROLCENTERSTATEMONITOR_H



#import "WFWiFiStateMonitor.h"

@interface WFControlCenterStateMonitor : WFWiFiStateMonitor



-(BOOL)_airplaneModeEnabled;
-(BOOL)_isCellularOutrankingWiFi;
-(void)_performAction:(NSInteger)arg0 ;
-(void)_promptCarPlayDisable;
-(void)_promptCellularOutankDisable;
-(void)_promptMISDisable;
-(void)performAction;
-(void)performAction:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTODAYWIDGETXCODEDEBUGGINGUTILITY_H
#define SBTODAYWIDGETXCODEDEBUGGINGUTILITY_H


#import <Foundation/Foundation.h>

#import "SBLockScreenManager.h"
#import "SBMainDisplayPolicyAggregator.h"

@interface SBTodayWidgetXCodeDebuggingUtility : NSObject {
    SBLockScreenManager *_lockScreenManager;
    SBMainDisplayPolicyAggregator *_policyAggregator;
}




-(id)init;
-(void)_reallyLaunchTodayViewFromCurrentContextWithCompletion:(id)arg0 ;
-(void)launchTodayViewFromCurrentContextWithCompletion:(id)arg0 ;


@end


#endif
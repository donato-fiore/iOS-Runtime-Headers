// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC33ICLOUDSUBSCRIPTIONOPTIMIZERDAEMON18SUBSCRIPTIONDAEMON_H
#define _TTC33ICLOUDSUBSCRIPTIONOPTIMIZERDAEMON18SUBSCRIPTIONDAEMON_H

@class SwiftObject;



@interface _TtC33iCloudSubscriptionOptimizerDaemon18SubscriptionDaemon : SwiftObject {
    ? stopwatch;
    ? mainLoop;
    ? xpcServer;
    ? mobileAssetDownloadManager;
    ? exitTimer;
    ? batteryStateProvider;
}




-(void)onExitTimerRun;


@end


#endif
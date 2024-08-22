// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIMAINTENANCETASKGUARDEDDATA_H
#define TRIMAINTENANCETASKGUARDEDDATA_H

@class NSMutableArray, TRITrialSystemTelemetry;

#import <Foundation/Foundation.h>


@interface TRIMaintenanceTaskGuardedData : NSObject {
    NSMutableArray *metrics;
    NSMutableArray *dimensions;
    TRITrialSystemTelemetry *trialSystemTelemetry;
}






@end


#endif
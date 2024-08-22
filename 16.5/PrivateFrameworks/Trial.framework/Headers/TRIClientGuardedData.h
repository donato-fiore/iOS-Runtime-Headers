// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRICLIENTGUARDEDDATA_H
#define TRICLIENTGUARDEDDATA_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "TRITrackingId.h"
#import "TRIExcessiveStaleFactorsUsageTimer.h"

@interface TRIClientGuardedData : NSObject {
    TRITrackingId *trackingId;
    NSMutableDictionary *namespaceUpdateHandlerTokens;
    NSMutableDictionary *namespaceCallbacks;
    TRIExcessiveStaleFactorsUsageTimer *excessiveStaleFactorUsageTimer;
    BOOL isLazyInitComplete;
}






@end


#endif
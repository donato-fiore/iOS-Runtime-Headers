// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIMAPROVIDINGGUARDEDDATA_H
#define TRIMAPROVIDINGGUARDEDDATA_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "TRIMAAutoAsset.h"

@interface TRIMAProvidingGuardedData : NSObject {
    BOOL didDeferDuringMADownload;
    BOOL deferralHandlerInvalid;
    NSMutableArray *fetchSemaphores;
    BOOL cancelReceived;
    TRIMAAutoAsset *currentAsset;
}




-(id)description;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIANALYTICS_H
#define VIANALYTICS_H

@class NSArray, NSDictionary;
@protocol OS_dispatch_queue, VIAnalyticsTestingDelegate;

#import <Foundation/Foundation.h>

#import "VIAEventCache.h"
#import "VIAFeedbackSubmitter.h"

@interface VIAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSArray *_loggers;
    NSDictionary *_feedbackNameToLoggerMap;
    VIAEventCache *_eventCache;
}


@property (readonly, nonatomic) VIAFeedbackSubmitter *feedbackSubmitter; // ivar: _feedbackSubmitter
@property (weak, nonatomic) NSObject<VIAnalyticsTestingDelegate> *testingDelegate; // ivar: _testingDelegate


+(id)_shared;
+(void)logEvent:(id)arg0 ;
-(id)initWithFeedbackSubmitter:(id)arg0 ;
-(id)serialQueue;
-(void)_logEvent:(id)arg0 ;
-(void)_performLogEvent:(id)arg0 ;


@end


#endif
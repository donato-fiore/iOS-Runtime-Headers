// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIACACHEHITLOGGER_H
#define VIACACHEHITLOGGER_H

@class NSString;
@protocol VIAEventLogging, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VIAFeedbackSubmitter.h"
#import "VIAEventCache.h"

@interface VIACacheHitLogger : NSObject <VIAEventLogging>

 {
    NSObject<OS_dispatch_queue> *_queue;
    VIAFeedbackSubmitter *_feedbackSubmitter;
    VIAEventCache *_engagementEventCache;
    VIAEventCache *_rankingEventCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)feedbackNamesToLog;
-(id)initWithQueue:(id)arg0 feedbackSubmitter:(id)arg1 ;
-(void)_logEvent:(id)arg0 ;
-(void)didObserveEvent:(id)arg0 ;
-(void)logEvent:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIAENTRYPOINTLOGGER_H
#define VIAENTRYPOINTLOGGER_H

@class NSMutableDictionary, NSString;
@protocol VIAEventLogging, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VIAFeedbackSubmitter.h"
#import "VIAEventCache.h"

@interface VIAEntryPointLogger : NSObject <VIAEventLogging>

 {
    NSObject<OS_dispatch_queue> *_queue;
    VIAFeedbackSubmitter *_feedbackSubmitter;
    NSMutableDictionary *_appToQueryIDMap;
    VIAEventCache *_eventCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)feedbackNamesToLog;
-(BOOL)_preconditionCheckEvent:(id)arg0 ;
-(id)initWithQueue:(id)arg0 feedbackSubmitter:(id)arg1 eventCache:(id)arg2 ;
-(void)_logDependentEvent:(id)arg0 ;
-(void)_logEndEvent:(id)arg0 ;
-(void)_logEvent:(id)arg0 ;
-(void)_logFeedback:(id)arg0 queryID:(NSUInteger)arg1 ;
-(void)_logStartEvent:(id)arg0 ;
-(void)didObserveEvent:(id)arg0 ;
-(void)logEvent:(id)arg0 ;


@end


#endif
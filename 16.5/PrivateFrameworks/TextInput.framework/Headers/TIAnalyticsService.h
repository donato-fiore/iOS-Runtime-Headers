// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIANALYTICSSERVICE_H
#define TIANALYTICSSERVICE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, TIAnalyticsServiceProvider;

#import <Foundation/Foundation.h>


@interface TIAnalyticsService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) NSMutableDictionary *eventSpecs; // ivar: _eventSpecs
@property (readonly, nonatomic) NSObject<TIAnalyticsServiceProvider> *provider; // ivar: _provider


+(id)sharedInstance;
+(void)setMockInstance:(id)arg0 ;
-(BOOL)dispatchEventWithName:(id)arg0 error:(*id)arg1 ;
-(BOOL)dispatchEventWithName:(id)arg0 inputMode:(id)arg1 error:(*id)arg2 ;
-(BOOL)dispatchEventWithName:(id)arg0 payload:(id)arg1 testingParameters:(id)arg2 allowSparsePayload:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)dispatchEventWithName:(id)arg0 values:(id)arg1 error:(*id)arg2 ;
-(BOOL)dispatchEventWithName:(id)arg0 values:(id)arg1 inputMode:(id)arg2 error:(*id)arg3 ;
-(BOOL)registerEventSpec:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithProvider:(id)arg0 ;
-(id)settingsFromInputMode:(id)arg0 eventSpec:(id)arg1 errors:(id)arg2 ;
-(id)settingsFromPayload:(id)arg0 andValues:(id)arg1 eventSpec:(id)arg2 allowSparsePayload:(BOOL)arg3 errors:(id)arg4 ;
-(void)_dispatchEventToDomain:(id)arg0 withName:(id)arg1 payload:(id)arg2 values:(id)arg3 inputMode:(id)arg4 testingParameters:(id)arg5 allowSparsePayload:(BOOL)arg6 withCompletionHandler:(id)arg7 ;
-(void)_registerEventSpec:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)addSettings:(id)arg0 toPayload:(id)arg1 errors:(id)arg2 ;
-(void)appendToErrors:(id)arg0 code:(NSInteger)arg1 message:(id)arg2 ;
-(void)dispatchEventToInputAnalyticsDomainWithName:(id)arg0 payload:(id)arg1 testingParameters:(id)arg2 allowSparsePayload:(BOOL)arg3 ;
-(void)dispatchEventWithName:(id)arg0 ;
-(void)dispatchEventWithName:(id)arg0 inputMode:(id)arg1 ;
-(void)dispatchEventWithName:(id)arg0 inputMode:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)dispatchEventWithName:(id)arg0 payload:(id)arg1 testingParameters:(id)arg2 allowSparsePayload:(BOOL)arg3 ;
-(void)dispatchEventWithName:(id)arg0 payload:(id)arg1 testingParameters:(id)arg2 allowSparsePayload:(BOOL)arg3 withCompletionHandler:(id)arg4 ;
-(void)dispatchEventWithName:(id)arg0 values:(id)arg1 ;
-(void)dispatchEventWithName:(id)arg0 values:(id)arg1 inputMode:(id)arg2 ;
-(void)dispatchEventWithName:(id)arg0 values:(id)arg1 inputMode:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)dispatchEventWithName:(id)arg0 values:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)dispatchEventWithName:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)queueCompletionHandler:(id)arg0 ;
-(void)registerEventSpec:(id)arg0 ;
-(void)registerEventSpec:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)sendCoreAnalyticsEventToDomain:(id)arg0 withName:(id)arg1 payload:(id)arg2 ;


@end


#endif
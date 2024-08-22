// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICURLSESSIONMANAGER_H
#define ICURLSESSIONMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICURLSessionManager : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_cachedSessions;
}




+(id)defaultSession;
+(id)highPrioritySession;
+(id)sharedSessionManager;
+(id)unlimitedHighPrioritySession;
-(id)_defaultSessionIdentifierWithQualityOfService:(NSInteger)arg0 maxConcurrentRequests:(NSUInteger)arg1 ;
-(id)_defaultSessionWithQualityOfService:(NSInteger)arg0 maxConcurrentRequests:(NSUInteger)arg1 ;
-(id)init;
-(id)sessionWithIdentifier:(id)arg0 ;
-(id)sessionWithIdentifier:(id)arg0 configuration:(id)arg1 ;
-(id)sessionWithIdentifier:(id)arg0 creationBlock:(id)arg1 ;
-(id)sessionWithQualityOfService:(NSInteger)arg0 ;
-(void)addSession:(id)arg0 withIdentifier:(id)arg1 ;
-(void)removeSessionWithIdentifier:(id)arg0 ;


@end


#endif
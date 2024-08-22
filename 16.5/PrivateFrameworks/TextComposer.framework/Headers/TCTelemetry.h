// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCTELEMETRY_H
#define TCTELEMETRY_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TCTelemetry : NSObject {
    NSObject<OS_dispatch_queue> *_analyticsQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_cachedSentenceHashArray;
    NSUInteger _capacity;
}




+(id)sharedInstance;
-(BOOL)_cacheHitForSentence:(id)arg0 ;
-(id)init;
-(void)_registerPayload:(id)arg0 forEvent:(id)arg1 ;
-(void)trackPostEditingRequest:(id)arg0 inString:(id)arg1 offset:(NSUInteger)arg2 tagger:(id)arg3 appIdentifier:(id)arg4 ;
-(void)trackResponse:(NSInteger)arg0 toGrammarDetail:(id)arg1 language:(id)arg2 appIdentifier:(id)arg3 ;


@end


#endif
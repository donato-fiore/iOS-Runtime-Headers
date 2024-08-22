// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCTHROTTLE_H
#define BRCTHROTTLE_H

@class NSMutableDictionary;


#import "BRCThrottleBase.h"
#import "BRCMinHeap.h"

@interface BRCThrottle : BRCThrottleBase {
    NSMutableDictionary *_retryCounters;
    BRCMinHeap *_retryHeap;
}




+(NSInteger)throttleHashBytes:(*void)arg0 length:(NSUInteger)arg1 ;
+(NSInteger)throttleHashFormat:(id)arg0 ;
-(NSInteger)nsecsToNextRetry:(NSInteger)arg0 now:(NSInteger)arg1 increment:(BOOL)arg2 ;
-(id)initWithName:(id)arg0 andParameters:(id)arg1 ;
-(void)_cleanupStaleCounters:(NSInteger)arg0 ;
-(void)incrementRetryCount:(NSInteger)arg0 ;
-(void)reset;


@end


#endif
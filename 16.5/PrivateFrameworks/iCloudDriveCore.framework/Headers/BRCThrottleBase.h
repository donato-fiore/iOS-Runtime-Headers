// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCTHROTTLEBASE_H
#define BRCTHROTTLEBASE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BRCThrottleBase : NSObject {
    unsigned int _initialRetryCount;
    unsigned int _finalRetryCount;
    unsigned int _maximumElementCount;
    NSInteger _minimumNsecsBetweenRetries;
    NSInteger _maximumNsecsBetweenRetries;
}


@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger nsecsBeforeForgettingCounter; // ivar: _nsecsBeforeForgettingCounter


-(BOOL)isBlocking;
-(NSInteger)nsecsToNextRetry:(NSInteger)arg0 retryCount:(*unsigned int)arg1 now:(NSInteger)arg2 ;
-(NSInteger)retryBackoff:(unsigned int)arg0 ;
-(id)initWithName:(id)arg0 andParameters:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDMETRICMANAGER_H
#define AWDMETRICMANAGER_H


#import <Foundation/Foundation.h>


@interface AWDMetricManager : NSObject



+(void)postMetricWithId:(NSUInteger)arg0 ;
+(void)postMetricWithId:(NSUInteger)arg0 boolValue:(BOOL)arg1 ;
+(void)postMetricWithId:(NSUInteger)arg0 integerValue:(NSInteger)arg1 ;
+(void)postMetricWithId:(NSUInteger)arg0 numberValue:(id)arg1 ;
+(void)postMetricWithId:(NSUInteger)arg0 object:(id)arg1 ;
+(void)postMetricWithId:(NSUInteger)arg0 stringValue:(id)arg1 ;
+(void)postMetricWithId:(NSUInteger)arg0 unsignedIntegerValue:(NSUInteger)arg1 ;


@end


#endif
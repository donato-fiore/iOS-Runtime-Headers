// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBCACHE_H
#define WEBCACHE_H


#import <Foundation/Foundation.h>


@interface WebCache : NSObject



+(BOOL)isDisabled;
+(id)statistics;
+(struct CGImage *)imageForURL:(id)arg0 ;
+(void)clearCachedCredentials;
+(void)empty;
+(void)emptyInMemoryResources;
+(void)initialize;
+(void)setDisabled:(BOOL)arg0 ;
+(void)sizeOfDeadResources:(*int)arg0 ;


@end


#endif
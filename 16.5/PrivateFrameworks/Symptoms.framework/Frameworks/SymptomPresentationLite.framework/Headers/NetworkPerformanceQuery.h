// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NETWORKPERFORMANCEQUERY_H
#define NETWORKPERFORMANCEQUERY_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface NetworkPerformanceQuery : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


-(BOOL)currentScorecardFor:(int)arg0 queue:(id)arg1 reply:(id)arg2 ;
-(id)_formatInstantRouteMetrics:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif
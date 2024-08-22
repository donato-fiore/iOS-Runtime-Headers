// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICURLAGGREGATEDPERFORMANCEMETRICS_H
#define ICURLAGGREGATEDPERFORMANCEMETRICS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ICURLAggregatedPerformanceMetrics : NSObject

@property (readonly, nonatomic) BOOL isNotEmpty;
@property (readonly, nonatomic) CGFloat networkTime;
@property (retain, nonatomic) NSArray *urlMetrics; // ivar: _urlMetrics


+(id)aggregatedMetricsFromAggregatedMetrics:(id)arg0 addingAggregatedMetrics:(id)arg1 ;
+(id)aggregatedMetricsFromAggregatedMetrics:(id)arg0 addingMetrics:(id)arg1 ;
-(id)initWithURLMetrics:(id)arg0 ;


@end


#endif
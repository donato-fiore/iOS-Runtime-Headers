// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LARGETRANSFERAPPSUMMARY_H
#define LARGETRANSFERAPPSUMMARY_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "FlowOriginLedger.h"

@interface LargeTransferAppSummary : NSObject

@property (retain, nonatomic) FlowOriginLedger *ledger; // ivar: _ledger
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger numCellRxLowerThresholdTransferSizes; // ivar: _numCellRxLowerThresholdTransferSizes
@property (nonatomic) NSUInteger numCellRxUpperThresholdTransferSizes; // ivar: _numCellRxUpperThresholdTransferSizes
@property (nonatomic) NSUInteger numCellTxLowerThresholdTransferSizes; // ivar: _numCellTxLowerThresholdTransferSizes
@property (nonatomic) NSUInteger numCellTxUpperThresholdTransferSizes; // ivar: _numCellTxUpperThresholdTransferSizes
@property (nonatomic) NSUInteger numWiFiRxLowerThresholdTransferSizes; // ivar: _numWiFiRxLowerThresholdTransferSizes
@property (nonatomic) NSUInteger numWiFiRxUpperThresholdTransferSizes; // ivar: _numWiFiRxUpperThresholdTransferSizes
@property (nonatomic) NSUInteger numWiFiTxLowerThresholdTransferSizes; // ivar: _numWiFiTxLowerThresholdTransferSizes
@property (nonatomic) NSUInteger numWiFiTxUpperThresholdTransferSizes; // ivar: _numWiFiTxUpperThresholdTransferSizes
@property (nonatomic) CGFloat recentCellRxThroughput; // ivar: _recentCellRxThroughput
@property (readonly, nonatomic) CGFloat recentCellThroughput;
@property (nonatomic) CGFloat recentCellTxThroughput; // ivar: _recentCellTxThroughput
@property (readonly, nonatomic) CGFloat recentTotalRxThroughput;
@property (readonly, nonatomic) CGFloat recentTotalThroughput;
@property (readonly, nonatomic) CGFloat recentTotalTxThroughput;
@property (nonatomic) CGFloat recentWiFiRxThroughput; // ivar: _recentWiFiRxThroughput
@property (readonly, nonatomic) CGFloat recentWiFiThroughput;
@property (nonatomic) CGFloat recentWiFiTxThroughput; // ivar: _recentWiFiTxThroughput
@property (nonatomic) NSUInteger totalCellRxTransferSize; // ivar: _totalCellRxTransferSize
@property (nonatomic) NSUInteger totalCellTxTransferSize; // ivar: _totalCellTxTransferSize
@property (nonatomic) NSUInteger totalWiFiRxTransferSize; // ivar: _totalWiFiRxTransferSize
@property (nonatomic) NSUInteger totalWiFiTxTransferSize; // ivar: _totalWiFiTxTransferSize
@property (retain, nonatomic) NSMutableDictionary *transferFlows; // ivar: _transferFlows


-(id)description;


@end


#endif
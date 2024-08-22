// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLOWORIGINLEDGER_H
#define FLOWORIGINLEDGER_H

@class NSMutableDictionary, NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface FlowOriginLedger : NSObject

@property (nonatomic) NSUInteger closedFlows; // ivar: _closedFlows
@property (retain, nonatomic) NSMutableDictionary *currentAssetDownloads; // ivar: _currentAssetDownloads
@property (retain, nonatomic) NSMutableDictionary *currentFlows; // ivar: _currentFlows
@property (retain, nonatomic) NSMutableDictionary *delegates; // ivar: _delegates
@property (nonatomic) CGFloat lastUsed; // ivar: _lastUsed
@property (nonatomic) BOOL mostRecentFlowSeenAsForeground; // ivar: _mostRecentFlowSeenAsForeground
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger pollIntervalCellRxBytes;
@property (readonly, nonatomic) NSUInteger pollIntervalCellTxBytes;
@property (readonly, nonatomic) NSUInteger pollIntervalWiFiRxBytes;
@property (readonly, nonatomic) NSUInteger pollIntervalWiFiTxBytes;
@property (retain, nonatomic) NSMutableArray *possibleAVFlows; // ivar: _possibleAVFlows
@property (nonatomic) NSUInteger prevPollCellRxBytes; // ivar: _prevPollCellRxBytes
@property (nonatomic) NSUInteger prevPollCellTxBytes; // ivar: _prevPollCellTxBytes
@property (readonly, nonatomic) NSUInteger prevPollIntervalCellRxBytes;
@property (readonly, nonatomic) NSUInteger prevPollIntervalCellTxBytes;
@property (readonly, nonatomic) NSUInteger prevPollIntervalWiFiRxBytes;
@property (readonly, nonatomic) NSUInteger prevPollIntervalWiFiTxBytes;
@property (nonatomic) NSUInteger prevPollWiFiRxBytes; // ivar: _prevPollWiFiRxBytes
@property (nonatomic) NSUInteger prevPollWiFiTxBytes; // ivar: _prevPollWiFiTxBytes
@property (nonatomic) NSUInteger prevPrevPollCellRxBytes; // ivar: _prevPrevPollCellRxBytes
@property (nonatomic) NSUInteger prevPrevPollCellTxBytes; // ivar: _prevPrevPollCellTxBytes
@property (nonatomic) NSUInteger prevPrevPollWiFiRxBytes; // ivar: _prevPrevPollWiFiRxBytes
@property (nonatomic) NSUInteger prevPrevPollWiFiTxBytes; // ivar: _prevPrevPollWiFiTxBytes
@property (nonatomic) NSUInteger sampleAdditionalFlags; // ivar: _sampleAdditionalFlags
@property (readonly, nonatomic) NSUInteger sampleCellRxBytes;
@property (readonly, nonatomic) CGFloat sampleCellRxThroughput;
@property (readonly, nonatomic) NSUInteger sampleCellTxBytes;
@property (readonly, nonatomic) CGFloat sampleCellTxThroughput;
@property (nonatomic) NSUInteger sampleStartCellRxBytes; // ivar: _sampleStartCellRxBytes
@property (nonatomic) NSUInteger sampleStartCellTxBytes; // ivar: _sampleStartCellTxBytes
@property (nonatomic) CGFloat sampleStartTime; // ivar: _sampleStartTime
@property (nonatomic) NSUInteger sampleStartWiFiRxBytes; // ivar: _sampleStartWiFiRxBytes
@property (nonatomic) NSUInteger sampleStartWiFiTxBytes; // ivar: _sampleStartWiFiTxBytes
@property (nonatomic) BOOL sampleStartedInForegroundState; // ivar: _sampleStartedInForegroundState
@property (nonatomic) CGFloat sampleTotalBusyTime; // ivar: _sampleTotalBusyTime
@property (readonly, nonatomic) NSUInteger sampleWiFiRxBytes;
@property (readonly, nonatomic) CGFloat sampleWiFiRxThroughput;
@property (readonly, nonatomic) NSUInteger sampleWiFiTxBytes;
@property (readonly, nonatomic) CGFloat sampleWiFiTxThroughput;
@property (nonatomic) BOOL sampledAsCoreMediaAssetDownload; // ivar: _sampledAsCoreMediaAssetDownload
@property (nonatomic) BOOL sampledAsHighInterfaceUse; // ivar: _sampledAsHighInterfaceUse
@property (nonatomic) BOOL sampledAsHighTransferSize; // ivar: _sampledAsHighTransferSize
@property (nonatomic) BOOL sampledCoreMediaAssetDownloadInactive; // ivar: _sampledCoreMediaAssetDownloadInactive
@property (nonatomic) NSUInteger totalObservedCellRxBytes; // ivar: _totalObservedCellRxBytes
@property (nonatomic) NSUInteger totalObservedCellTxBytes; // ivar: _totalObservedCellTxBytes
@property (nonatomic) NSUInteger totalObservedWiFiRxBytes; // ivar: _totalObservedWiFiRxBytes
@property (nonatomic) NSUInteger totalObservedWiFiTxBytes; // ivar: _totalObservedWiFiTxBytes
@property (nonatomic) NSUInteger totalWithDelegatesCellRxBytes; // ivar: _totalWithDelegatesCellRxBytes
@property (nonatomic) NSUInteger totalWithDelegatesCellTxBytes; // ivar: _totalWithDelegatesCellTxBytes
@property (nonatomic) NSUInteger totalWithDelegatesWiFiRxBytes; // ivar: _totalWithDelegatesWiFiRxBytes
@property (nonatomic) NSUInteger totalWithDelegatesWiFiTxBytes; // ivar: _totalWithDelegatesWiFiTxBytes


-(id)briefDescription;
-(id)description;
-(id)init;
-(void)startSamplingPeriod;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRACKEDFLOWCOUNTS_H
#define TRACKEDFLOWCOUNTS_H


#import <Foundation/Foundation.h>


@interface TrackedFlowCounts : NSObject

@property (nonatomic) BOOL probed3WHSStuckFlow; // ivar: _probed3WHSStuckFlow
@property (nonatomic) BOOL probedFlow; // ivar: _probedFlow
@property (nonatomic) BOOL probedReadStuckFlow; // ivar: _probedReadStuckFlow
@property (nonatomic) BOOL probedWriteStuckFlow; // ivar: _probedWriteStuckFlow
@property (nonatomic) CGFloat rttAverageSecs; // ivar: _rttAverageSecs
@property (nonatomic) CGFloat rttMinimumSecs; // ivar: _rttMinimumSecs
@property (nonatomic) CGFloat rttVariation; // ivar: _rttVariation
@property (nonatomic) NSUInteger rxCellularBytes; // ivar: _rxCellularBytes
@property (nonatomic) NSUInteger rxDupeBytes; // ivar: _rxDupeBytes
@property (nonatomic) NSUInteger rxOOOBytes; // ivar: _rxOOOBytes
@property (nonatomic) NSUInteger rxPkts; // ivar: _rxPkts
@property (nonatomic) NSUInteger rxWiFiBytes; // ivar: _rxWiFiBytes
@property (nonatomic) NSUInteger rxWiredBytes; // ivar: _rxWiredBytes
@property (nonatomic) NSUInteger txCellularBytes; // ivar: _txCellularBytes
@property (nonatomic) NSUInteger txPkts; // ivar: _txPkts
@property (nonatomic) NSUInteger txReTxBytes; // ivar: _txReTxBytes
@property (nonatomic) NSUInteger txWiFiBytes; // ivar: _txWiFiBytes
@property (nonatomic) NSUInteger txWiredBytes; // ivar: _txWiredBytes


-(id)description;
-(void)addFlowCounts:(id)arg0 ;
-(void)subtractFlowCounts:(id)arg0 ;


@end


#endif
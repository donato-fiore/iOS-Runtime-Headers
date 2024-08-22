// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TASTORE_H
#define TASTORE_H

@class NSDate, NSString, NSHashTable;
@protocol TAStoreObserver, TAStoreRequestProtocol;

#import <Foundation/Foundation.h>

#import "TADeviceRecord.h"
#import "TAEventBuffer.h"
#import "TAVisitState.h"

@interface TAStore : NSObject <TAStoreObserver, TAStoreRequestProtocol>

 {
    NSDate *_lastLocationDate;
}


@property (readonly, nonatomic) NSDate *clock; // ivar: _clock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TADeviceRecord *deviceRecord; // ivar: _deviceRecord
@property (readonly, nonatomic) TAEventBuffer *eventBuffer; // ivar: _eventBuffer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;
@property (readonly, nonatomic) TAVisitState *visitState; // ivar: _visitState


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldAddTACLVisit:(id)arg0 ;
-(BOOL)shouldAddTALocationLite:(id)arg0 ;
-(BOOL)shouldAddTASPAdvertisement:(id)arg0 ;
-(id)fetchTAUnknownBeacon:(id)arg0 ;
-(id)initWithEventBufferSettings:(id)arg0 scanRequestSettings:(id)arg1 visitStateSettings:(id)arg2 deviceRecordSettings:(id)arg3 ;
-(void)addObserver:(id)arg0 ;
-(void)addTAEvent:(id)arg0 andAppendOutgoingRequestsTo:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)requestAIS:(id)arg0 ;
-(void)updateClock:(id)arg0 ;
-(void)visitState:(id)arg0 didChangeStateFromType:(NSUInteger)arg1 toType:(NSUInteger)arg2 ;
-(void)visitState:(id)arg0 didIssueMetricsSubmissionHint:(NSUInteger)arg1 ;


@end


#endif
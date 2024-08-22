// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDLPEERPROBE_H
#define AWDLPEERPROBE_H

@class NSMutableDictionary, NSArray;
@protocol AWDLPeerProbeDelegate;


#import "TestProbe.h"

@interface AWDLPeerProbe : TestProbe

@property (retain) NSObject<AWDLPeerProbeDelegate> *delegate; // ivar: _delegate
@property (retain) NSMutableDictionary *peerList; // ivar: _peerList
@property NSUInteger pollCount; // ivar: _pollCount
@property (retain, nonatomic) NSArray *servicesOfInterest; // ivar: _servicesOfInterest


-(id)initWithQueue:(id)arg0 ;
-(void)dealloc;
-(void)periodicTimerFired:(id)arg0 ;
-(void)startAWDLPeerPollingForServices:(id)arg0 withCount:(NSUInteger)arg1 interval:(NSUInteger)arg2 ;
-(void)stopTest;


@end


#endif
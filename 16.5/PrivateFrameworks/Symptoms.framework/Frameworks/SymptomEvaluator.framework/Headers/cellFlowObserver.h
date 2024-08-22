// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CELLFLOWOBSERVER_H
#define CELLFLOWOBSERVER_H

@class NSDate, NSMutableDictionary, NSMutableSet, NSString;
@protocol flowDispositionObserver;

#import <Foundation/Foundation.h>


@interface cellFlowObserver : NSObject <flowDispositionObserver>

 {
    int _classCounter;
    int _classFlags;
    int _intialClassFlags;
    int _everSetClassFlags;
    int _everReportedClassFlags;
    int _lastReportedClassFlags;
    unsigned int _dampeningMsecs;
    NSDate *_lastReportTimestamp;
    BOOL _dampening;
    unsigned int _seqno;
    NSMutableDictionary *_foregroundAppObservelist;
    NSMutableDictionary *_perAppMaxRRCTimeSecs;
    BOOL _flowSnapshotActive;
    NSMutableSet *_flowSnapshotApps;
    unsigned int _flowSnapshotFlags;
    CGFloat _flowSnapshotAccumulatedTCEnabledTime;
    NSDate *_flowSnapshotTCEnabledStartTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL foreground; // ivar: _foreground
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)performDisposition:(unsigned int)arg0 present:(BOOL)arg1 ;
-(id)infoDir;
-(id)init;
-(unsigned int)noteFlow:(id)arg0 snapshot:(id)arg1 present:(BOOL)arg2 trackedBy:(id)arg3 ;
-(void)beginTrafficClassFlowSnapshot;
-(void)configurePolicies:(id)arg0 ;
-(void)endTrafficClassFlowSnapshot:(id)arg0 periodUsecs:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)noteForegroundState:(BOOL)arg0 forApp:(id)arg1 hasForegroundApps:(BOOL)arg2 ;
-(void)noteNewUsage:(unsigned int)arg0 ;
-(void)resetTrafficClassFlowSnapshot:(BOOL)arg0 ;


@end


#endif
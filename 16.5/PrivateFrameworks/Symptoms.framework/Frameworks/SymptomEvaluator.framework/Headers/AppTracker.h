// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPTRACKER_H
#define APPTRACKER_H

@class NSString, NSDate;
@protocol ManagedEventInfoProtocol, ConfigurableObjectProtocol;

#import <Foundation/Foundation.h>

#import "SFActivityBitmaps.h"
#import "TrackerPolicy.h"

@interface AppTracker : NSObject <ManagedEventInfoProtocol, ConfigurableObjectProtocol>



@property (retain) SFActivityBitmaps *activityBitmaps; // ivar: _activityBitmaps
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned int eversetClassFlags; // ivar: _eversetClassFlags
@property int flowsForOthers; // ivar: _flowsForOthers
@property int flowsForSelf; // ivar: _flowsForSelf
@property int flowsPerPeriod; // ivar: _flowsPerPeriod
@property int flowsPerPeriodAfterMadePrimary; // ivar: _flowsPerPeriodAfterMadePrimary
@property (readonly) NSUInteger hash;
@property NSInteger interfaceType; // ivar: _interfaceType
@property BOOL isADaemon; // ivar: _isADaemon
@property NSUInteger lastFullBitmapReportTime; // ivar: _lastFullBitmapReportTime
@property CGFloat prevFlowDurations; // ivar: _prevFlowDurations
@property NSUInteger prevFlowRxBytes; // ivar: _prevFlowRxBytes
@property NSUInteger prevFlowTxBytes; // ivar: _prevFlowTxBytes
@property int prevFlows; // ivar: _prevFlows
@property int prevFlowsForOthers; // ivar: _prevFlowsForOthers
@property BOOL sentFlowCountExceededPolicySymptom; // ivar: _sentFlowCountExceededPolicySymptom
@property BOOL sentThunderingHerdFlowCountExceededPolicySymptom; // ivar: _sentThunderingHerdFlowCountExceededPolicySymptom
@property (retain) TrackerPolicy *specificPolicy; // ivar: _specificPolicy
@property (readonly) Class superclass;
@property (retain) NSDate *timestamp; // ivar: _timestamp
@property (readonly) NSString *userName; // ivar: _userName


+(id)configureClass:(id)arg0 ;
+(id)getAlignedNetworkBitmapsForInterfaceType:(NSInteger)arg0 names:(id)arg1 startTime:(NSUInteger)arg2 endTime:(NSUInteger)arg3 ;
+(id)ifTrackerForFlow:(id)arg0 ;
+(id)ifTrackerForInterfaceType:(NSInteger)arg0 ;
+(id)sharedInstance;
+(void)_getAllActivityMapsWithNames:(id)arg0 startTime:(NSUInteger)arg1 endTime:(NSUInteger)arg2 replyQueue:(id)arg3 reply:(id)arg4 ;
+(void)beginTrafficClassFlowSnapshot;
+(void)configureCellPolicies:(id)arg0 ;
+(void)configureCompanionLinkPolicies:(id)arg0 ;
+(void)configureWifiPolicies:(id)arg0 ;
+(void)dumpState;
+(void)endTrafficClassFlowSnapshot:(id)arg0 periodUsecs:(NSUInteger)arg1 reply:(id)arg2 ;
+(void)freeUpActivityBitmapsForInterfaceType:(NSInteger)arg0 ;
+(void)getAllActivityMapsWithNames:(id)arg0 startTime:(NSUInteger)arg1 endTime:(NSUInteger)arg2 replyQueue:(id)arg3 reply:(id)arg4 ;
+(void)getWifiNetworkActivity:(id)arg0 ;
+(void)initialize;
+(void)noteFlow:(id)arg0 withDelegatee:(id)arg1 snapshot:(id)arg2 ;
+(void)noteFlow:(id)arg0 withOwner:(id)arg1 snapshot:(id)arg2 ;
+(void)noteFlowEnding:(id)arg0 ;
+(void)noteForegroundState:(BOOL)arg0 forApp:(id)arg1 hasForegroundApps:(BOOL)arg2 ;
+(void)pruneCache:(id)arg0 ;
+(void)resetAllActivityMapsForInterfaceType:(NSInteger)arg0 ;
+(void)resetTrafficClassFlowSnapshot;
+(void)setAppTrackerVerbose:(unsigned int)arg0 ;
+(void)setInternalQueue:(id)arg0 ;
+(void)setTrackCellular:(BOOL)arg0 ;
+(void)setWifiAlwaysNoteList:(id)arg0 ;
+(void)setWifiDaemonCheckList:(id)arg0 ;
+(void)setWifiNeverNoteList:(id)arg0 ;
+(void)startFlowPeriodTimer;
+(void)stopFlowPeriodTimer;
+(void)syncGetAllActivityMapsWithNames:(id)arg0 startTime:(NSUInteger)arg1 endTime:(NSUInteger)arg2 reply:(id)arg3 ;
+(void)tallyUpAllActivityMapsForInterfaceType:(NSInteger)arg0 replyQueue:(id)arg1 reply:(id)arg2 ;
-(id)initWithUserName:(id)arg0 interfaceType:(NSInteger)arg1 ;
-(int)configureInstance:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;
-(void)_generateInfoForId:(NSUInteger)arg0 context:(char *)arg1 uuid:(id)arg2 completionBlock:(id)arg3 ;
-(void)addFlow:(id)arg0 ;
-(void)addImmediateFlow:(id)arg0 ;
-(void)adjustFlowLinkages:(id)arg0 ;
-(void)adjustImmediateFlowLinkages:(id)arg0 ;
-(void)checkForFlowCountPolicyViolation;
-(void)generateInfoForId:(NSUInteger)arg0 context:(char *)arg1 uuid:(id)arg2 completionBlock:(id)arg3 ;
-(void)removeFlow:(id)arg0 ;
-(void)removeImmediateFlow:(id)arg0 ;
-(void)resetAllActivityMaps;
-(void)resetFlowCountAfterMadePrimary;
-(void)resetFlowCountPolicyInfo;
-(void)sendFlowCount:(NSUInteger)arg0 exceededPolicyThreshold:(NSUInteger)arg1 isLikelyThunderingHerd:(BOOL)arg2 ;
-(void)tallyUpAllActivityMaps:(id)arg0 ;


@end


#endif
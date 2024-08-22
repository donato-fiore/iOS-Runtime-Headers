// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGEREALTIMECOEXSESSION_H
#define WIFIUSAGEREALTIMECOEXSESSION_H

@class NSDate, NSString;


#import "WiFiUsageSession.h"

@interface WiFiUsageRealTimeCoexSession : WiFiUsageSession

@property (retain) NSDate *firstIPUpdateAfterSSIDTransition; // ivar: _firstIPUpdateAfterSSIDTransition
@property (retain) NSDate *firstManualJoin; // ivar: _firstManualJoin
@property (retain) NSDate *firstManualJoinAfterSSIDTransition; // ivar: _firstManualJoinAfterSSIDTransition
@property (retain) NSDate *firstRtCoexOptimal; // ivar: _firstRtCoexOptimal
@property (retain) NSDate *firstSSIDTransition; // ivar: _firstSSIDTransition
@property BOOL hasCandidates; // ivar: _hasCandidates
@property BOOL hasDifferentIpv4DetailsAfterSSIDTransition; // ivar: _hasDifferentIpv4DetailsAfterSSIDTransition
@property BOOL hasDifferentIpv6DetailsAfterSSIDTransition; // ivar: _hasDifferentIpv6DetailsAfterSSIDTransition
@property BOOL isRtCoexOptimal; // ivar: _isRtCoexOptimal
@property BOOL isSplitSSID; // ivar: _isSplitSSID
@property (retain) NSDate *lastEnterPreferredBand; // ivar: _lastEnterPreferredBand
@property (retain) NSDate *lastEnterPreferredChannel; // ivar: _lastEnterPreferredChannel
@property BOOL lastRequestDifferentSSID; // ivar: _lastRequestDifferentSSID
@property (retain) NSString *lastRequestPreferredBSS; // ivar: _lastRequestPreferredBSS
@property int lastRequestPreferredBand; // ivar: _lastRequestPreferredBand
@property NSUInteger lastRequestPreferredChannel; // ivar: _lastRequestPreferredChannel
@property (retain) NSString *lastRequestPreferredSSID; // ivar: _lastRequestPreferredSSID
@property NSUInteger lastRequestType; // ivar: _lastRequestType
@property (retain) NSDate *lastRtCoexOptimalStatusChange; // ivar: _lastRtCoexOptimalStatusChange
@property CGFloat preferredBandDuration; // ivar: _preferredBandDuration
@property CGFloat preferredChannelDuration; // ivar: _preferredChannelDuration
@property NSUInteger requestDisconnectCount; // ivar: _requestDisconnectCount
@property NSUInteger requestSteerCount; // ivar: _requestSteerCount
@property NSUInteger requestSteerToPreferredChannelCount; // ivar: _requestSteerToPreferredChannelCount
@property (retain) NSString *rtCoexSubType; // ivar: _rtCoexSubType
@property CGFloat rtCoexSuboptimalDuration; // ivar: _rtCoexSuboptimalDuration
@property NSUInteger rtCoexType; // ivar: _rtCoexType


-(BOOL)infraIsPartOfSplitSSID;
-(BOOL)isCurrentBandPreferredBand;
-(BOOL)isCurrentChannelPreferredChannel;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)eventDictionary:(BOOL)arg0 ;
-(id)eventDictionaryByBand:(int)arg0 isFirst:(BOOL)arg1 ;
-(id)initWithInterfaceName:(id)arg0 ;
-(id)metricName;
-(void)joinStateDidChange:(id)arg0 withReason:(NSUInteger)arg1 lastDisconnectReason:(NSInteger)arg2 lastJoinFailure:(NSInteger)arg3 andNetworkDetails:(id)arg4 ;
-(void)linkStateDidChange:(BOOL)arg0 isInvoluntary:(BOOL)arg1 linkChangeReason:(NSInteger)arg2 linkChangeSubreason:(NSInteger)arg3 withNetworkDetails:(id)arg4 ;
-(void)processIPv4Changes:(id)arg0 ;
-(void)processIPv6Changes:(id)arg0 ;
-(void)sessionDidStart;
-(void)setPreferredChannelAndBandUsageWithReferenceDate:(id)arg0 ;
-(void)setRealTimeCoexStatus:(BOOL)arg0 ;
-(void)setRealtimeCoexStarted:(BOOL)arg0 type:(NSUInteger)arg1 reasons:(id)arg2 ;
-(void)setSteeringRequest:(NSUInteger)arg0 preferredChannel:(NSUInteger)arg1 preferredBand:(int)arg2 preferredSSID:(id)arg3 targetSSIDDiffersFromCurrent:(BOOL)arg4 preferredBSS:(id)arg5 ssidIsSplit:(BOOL)arg6 transitionCandidates:(BOOL)arg7 ;
-(void)summarizeSession;
-(void)updateAssociatedNetworkDetails:(id)arg0 ;
-(void)updatePreferredChannelAndBandUsageWithReferenceDate:(id)arg0 ;


@end


#endif
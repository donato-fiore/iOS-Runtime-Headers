// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSMETRICSPAGEEVENT_H
#define SSMETRICSPAGEEVENT_H

@class NSString;


#import "SSMetricsBaseEvent.h"

@interface SSMetricsPageEvent : SSMetricsBaseEvent

@property (nonatomic, getter=isCachedResponse) BOOL cachedResponse;
@property (retain, nonatomic) NSString *clientCorrelationKey;
@property (nonatomic) CGFloat connectionEndTime;
@property (nonatomic) BOOL connectionReused;
@property (nonatomic) NSUInteger connectionStartNStatRXBytes;
@property (nonatomic) NSUInteger connectionStartNStatTXBytes;
@property (nonatomic) CGFloat connectionStartTime;
@property (nonatomic) NSUInteger connectionStopNStatRXBytes;
@property (nonatomic) NSUInteger connectionStopNStatTXBytes;
@property (nonatomic) CGFloat domainLookupEndTime;
@property (nonatomic) CGFloat domainLookupStartTime;
@property (nonatomic) CGFloat fetchStartTime;
@property (retain, nonatomic) NSString *navigationType;
@property (retain, nonatomic) NSString *pageHistoryDescription;
@property (nonatomic) CGFloat pageRenderTime;
@property (nonatomic) NSUInteger redirectCount;
@property (nonatomic) CGFloat redirectEndTime;
@property (nonatomic) CGFloat redirectStartTime;
@property (retain, nonatomic) NSString *referringAppName;
@property (retain, nonatomic) NSString *referringURL;
@property (nonatomic) CGFloat requestEndTime;
@property (nonatomic) CGFloat requestStartTime;
@property (nonatomic) CGFloat responseEndTime;
@property (nonatomic) CGFloat responseStartTime;
@property (retain, nonatomic) NSString *searchTerm;
@property (nonatomic) CGFloat secureConnectionStartTime;
@property (retain, nonatomic) NSString *serverApplicationInstance;
@property (retain, nonatomic) NSString *serverTiming;
@property (nonatomic, getter=isUbered) BOOL ubered;
@property (nonatomic, setter=setXPSamplingForced:) BOOL xpSamplingForced;
@property (nonatomic, setter=setXPSamplingPercentageCachedResponses:) CGFloat xpSamplingPercentageCachedResponses;
@property (nonatomic, setter=setXPSamplingPercentageUsers:) CGFloat xpSamplingPercentageUsers;
@property (nonatomic, setter=setXPSessionDuration:) CGFloat xpSessionDuration;


-(id)description;
-(id)init;


@end


#endif
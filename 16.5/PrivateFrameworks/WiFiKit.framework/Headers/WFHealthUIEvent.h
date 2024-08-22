// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHEALTHUIEVENT_H
#define WFHEALTHUIEVENT_H

@class NSString, NSDictionary, PBCodable;
@protocol WFUIEvent;

#import <Foundation/Foundation.h>


@interface WFHealthUIEvent : NSObject <WFUIEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *eventDictionary; // ivar: _eventDictionary
@property (readonly, nonatomic) NSString *eventName;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PBCodable *metric; // ivar: _metric
@property (nonatomic) unsigned int metricIdentifier; // ivar: _metricIdentifier
@property (readonly) Class superclass;


+(id)detailEventWithIssues:(id)arg0 ssid:(id)arg1 securityType:(NSInteger)arg2 ;
+(id)noInternetEventWithTestTimes:(NSInteger)arg0 didPassTest:(BOOL)arg1 failedVelocityTests:(id)arg2 ssid:(id)arg3 ;
+(id)subtitleEventWithIssues:(id)arg0 ssid:(id)arg1 securityType:(NSInteger)arg2 ;
+(id)tapLinkEventWithIssues:(id)arg0 ssid:(id)arg1 securityType:(NSInteger)arg2 ;
-(id)_eventTypeStringForType:(NSInteger)arg0 ;
-(id)_issuesToJSONString:(id)arg0 ;
-(id)initWithEventType:(NSInteger)arg0 issues:(id)arg1 ssid:(id)arg2 securityType:(NSInteger)arg3 testTimes:(NSInteger)arg4 didPassTest:(BOOL)arg5 failedTests:(id)arg6 ;


@end


#endif
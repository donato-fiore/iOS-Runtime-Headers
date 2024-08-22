// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TBCACHEANALYTICSEVENT_H
#define TBCACHEANALYTICSEVENT_H

@class NSString, NSNumber, NSDictionary;
@protocol TBAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface TBCacheAnalyticsEvent : NSObject <TBAnalyticsEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSNumber *errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSDictionary *eventDictionary; // ivar: _eventDictionary
@property (retain, nonatomic) NSString *eventName; // ivar: _eventName
@property (readonly) NSUInteger hash;
@property (nonatomic) NSNumber *staleness; // ivar: _staleness
@property (nonatomic) NSUInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (nonatomic) NSNumber *tileKey; // ivar: _tileKey
@property (nonatomic) NSNumber *type; // ivar: _type


+(id)cacheAnalyticsEventWithStatus:(NSUInteger)arg0 staleness:(NSUInteger)arg1 tileKey:(NSUInteger)arg2 type:(NSUInteger)arg3 error:(id)arg4 ;
+(id)cacheAvailabilityEventWithStatus:(NSUInteger)arg0 ;
+(id)cacheEventWithTotalCount:(NSUInteger)arg0 last24HoursCount:(NSUInteger)arg1 ;


@end


#endif
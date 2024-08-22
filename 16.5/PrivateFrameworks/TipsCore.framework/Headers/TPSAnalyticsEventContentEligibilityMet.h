// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSANALYTICSEVENTCONTENTELIGIBILITYMET_H
#define TPSANALYTICSEVENTCONTENTELIGIBILITYMET_H

@class NSString, NSArray;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventContentEligibilityMet : TPSAnalyticsEvent

@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *contentID; // ivar: _contentID
@property (readonly, nonatomic) NSUInteger displayType; // ivar: _displayType
@property (readonly, nonatomic) NSArray *eligibleContext; // ivar: _eligibleContext
@property (readonly, nonatomic) NSUInteger usageFlags; // ivar: _usageFlags


+(BOOL)supportsSecureCoding;
+(id)eventWithContentID:(id)arg0 bundleID:(id)arg1 eligibleContext:(id)arg2 displayType:(NSUInteger)arg3 usageFlags:(NSUInteger)arg4 date:(id)arg5 ;
-(id)_initWithContentID:(id)arg0 bundleID:(id)arg1 eligibleContext:(id)arg2 displayType:(NSUInteger)arg3 usageFlags:(NSUInteger)arg4 date:(id)arg5 ;
-(id)duetEvent;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
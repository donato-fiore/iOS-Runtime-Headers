// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSANALYTICSEVENTREPLAYBUTTONTAPPED_H
#define TPSANALYTICSEVENTREPLAYBUTTONTAPPED_H

@class NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventReplayButtonTapped : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *collectionID; // ivar: _collectionID
@property (retain, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (nonatomic, getter=isNotificationModelControl) BOOL notificationModelControl; // ivar: _notificationModelControl
@property (retain, nonatomic) NSString *tipID; // ivar: _tipID


+(BOOL)supportsSecureCoding;
+(id)eventWithTipID:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 ;
-(id)_initWithTipID:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDataProvider:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSANALYTICSEVENTCONTENTLINKTAPPED_H
#define TPSANALYTICSEVENTCONTENTLINKTAPPED_H

@class NSString, NSNumber;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventContentLinkTapped : TPSAnalyticsEvent

@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *clientConditionID; // ivar: _clientConditionID
@property (readonly, nonatomic) NSString *collectionID; // ivar: _collectionID
@property (readonly, nonatomic) NSString *contentID; // ivar: _contentID
@property (readonly, nonatomic) NSString *context; // ivar: _context
@property (readonly, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (retain, nonatomic) NSString *displayType; // ivar: _displayType
@property (nonatomic, getter=isNotificationModelControl) BOOL notificationModelControl; // ivar: _notificationModelControl
@property (retain, nonatomic) NSNumber *trialDeploymentID; // ivar: _trialDeploymentID
@property (retain, nonatomic) NSString *trialExperimentID; // ivar: _trialExperimentID
@property (retain, nonatomic) NSString *trialRampID; // ivar: _trialRampID
@property (retain, nonatomic) NSString *trialTreatmentID; // ivar: _trialTreatmentID
@property (readonly, nonatomic) NSString *url; // ivar: _url


+(BOOL)supportsSecureCoding;
+(id)eventWithContentID:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 clientConditionID:(id)arg3 url:(id)arg4 ;
-(id)_initWithContentID:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 clientConditionID:(id)arg3 url:(id)arg4 bundleID:(id)arg5 context:(id)arg6 displayType:(id)arg7 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDataProvider:(id)arg0 ;


@end


#endif
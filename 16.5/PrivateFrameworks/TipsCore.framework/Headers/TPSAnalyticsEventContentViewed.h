// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSANALYTICSEVENTCONTENTVIEWED_H
#define TPSANALYTICSEVENTCONTENTVIEWED_H

@class NSString, NSNumber;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventContentViewed : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *clientConditionID; // ivar: _clientConditionID
@property (retain, nonatomic) NSString *collectionID; // ivar: _collectionID
@property (retain, nonatomic) NSString *contentID; // ivar: _contentID
@property (retain, nonatomic) NSString *contentStyle; // ivar: _contentStyle
@property (retain, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (nonatomic) BOOL hardwareWelcome; // ivar: _hardwareWelcome
@property (nonatomic) BOOL isNotificationModelControl; // ivar: _isNotificationModelControl
@property (nonatomic) BOOL seenThisContentBefore; // ivar: _seenThisContentBefore
@property (readonly, nonatomic) NSNumber *sessionViewNumber;
@property (nonatomic) BOOL softwareWelcome; // ivar: _softwareWelcome
@property (nonatomic) CGFloat timeOnScreen; // ivar: _timeOnScreen
@property (retain, nonatomic) NSNumber *trialDeploymentID; // ivar: _trialDeploymentID
@property (retain, nonatomic) NSString *trialExperimentID; // ivar: _trialExperimentID
@property (retain, nonatomic) NSString *trialRampID; // ivar: _trialRampID
@property (retain, nonatomic) NSString *trialTreatmentID; // ivar: _trialTreatmentID
@property (retain, nonatomic) NSString *viewMethod; // ivar: _viewMethod
@property (retain, nonatomic) NSString *viewMode; // ivar: _viewMode
@property (retain, nonatomic) NSString *widgetType; // ivar: _widgetType


+(BOOL)supportsSecureCoding;
+(BOOL)updateSessionViewNumber;
+(id)eventWithContentID:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 clientConditionID:(id)arg3 viewMethod:(id)arg4 contentStyle:(id)arg5 viewMode:(id)arg6 timeOnScreen:(CGFloat)arg7 seenThisContentBefore:(BOOL)arg8 hardwareWelcome:(BOOL)arg9 softwareWelcome:(BOOL)arg10 ;
+(id)eventWithContentID:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 clientConditionID:(id)arg3 widgetType:(id)arg4 hardwareWelcome:(BOOL)arg5 softwareWelcome:(BOOL)arg6 ;
+(void)incrementSessionViewNumberForKey:(id)arg0 ;
+(void)setAppReferrer:(id)arg0 ;
-(BOOL)isWidget;
-(id)_initWithContentID:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 clientConditionID:(id)arg3 viewMethod:(id)arg4 contentStyle:(id)arg5 viewMode:(id)arg6 timeOnScreen:(CGFloat)arg7 seenThisContentBefore:(BOOL)arg8 hardwareWelcome:(BOOL)arg9 softwareWelcome:(BOOL)arg10 ;
-(id)_initWithContentID:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 clientConditionID:(id)arg3 widgetType:(id)arg4 hardwareWelcome:(BOOL)arg5 softwareWelcome:(BOOL)arg6 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)log;
-(void)setDataProvider:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICIAMAPPLICATIONMESSAGE_H
#define ICIAMAPPLICATIONMESSAGE_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "ICIAMApplicationBadge.h"
#import "ICIAMMetricEvent.h"
#import "ICIAMLocalNotification.h"
#import "ICIAMMessageRule.h"

@interface ICIAMApplicationMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) ICIAMApplicationBadge *applicationBadge; // ivar: _applicationBadge
@property (nonatomic) int assetPrefetchStrategy; // ivar: _assetPrefetchStrategy
@property (nonatomic) BOOL carousel; // ivar: _carousel
@property (retain, nonatomic) NSMutableArray *contentPages; // ivar: _contentPages
@property (nonatomic) CGFloat endDate; // ivar: _endDate
@property (nonatomic) int globalPresentationPolicyGroup; // ivar: _globalPresentationPolicyGroup
@property (readonly, nonatomic) BOOL hasApplicationBadge;
@property (nonatomic) BOOL hasAssetPrefetchStrategy;
@property (nonatomic) BOOL hasCarousel;
@property (nonatomic) BOOL hasCloseButton; // ivar: _hasCloseButton
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasGlobalPresentationPolicyGroup;
@property (nonatomic) BOOL hasHasCloseButton;
@property (readonly, nonatomic) BOOL hasHoldoutEvent;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasImpressionEvent;
@property (readonly, nonatomic) BOOL hasLocalNotification;
@property (nonatomic) BOOL hasMaximumDisplays;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) BOOL hasModalPresentationStyle;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) BOOL hasReportingEnabled;
@property (readonly, nonatomic) BOOL hasRule;
@property (nonatomic) BOOL hasStartDate;
@property (readonly, nonatomic) BOOL hasTemplateURL;
@property (readonly, nonatomic) BOOL hasWebArchiveURL;
@property (retain, nonatomic) ICIAMMetricEvent *holdoutEvent; // ivar: _holdoutEvent
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) ICIAMMetricEvent *impressionEvent; // ivar: _impressionEvent
@property (retain, nonatomic) ICIAMLocalNotification *localNotification; // ivar: _localNotification
@property (nonatomic) int maximumDisplays; // ivar: _maximumDisplays
@property (nonatomic) int messageType; // ivar: _messageType
@property (nonatomic) int modalPresentationStyle; // ivar: _modalPresentationStyle
@property (retain, nonatomic) NSMutableArray *presentationTriggers; // ivar: _presentationTriggers
@property (nonatomic) int priority; // ivar: _priority
@property (nonatomic) BOOL reportingEnabled; // ivar: _reportingEnabled
@property (retain, nonatomic) ICIAMMessageRule *rule; // ivar: _rule
@property (nonatomic) CGFloat startDate; // ivar: _startDate
@property (retain, nonatomic) NSMutableArray *targets; // ivar: _targets
@property (retain, nonatomic) NSString *templateURL; // ivar: _templateURL
@property (retain, nonatomic) NSString *webArchiveURL; // ivar: _webArchiveURL


+(Class)targetType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)assetPrefetchStrategyAsString:(int)arg0 ;
-(id)contentPagesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)globalPresentationPolicyGroupAsString:(int)arg0 ;
-(id)messageTypeAsString:(int)arg0 ;
-(id)modalPresentationStyleAsString:(int)arg0 ;
-(id)presentationTriggersAtIndex:(NSUInteger)arg0 ;
-(id)targetAtIndex:(NSUInteger)arg0 ;
-(int)StringAsAssetPrefetchStrategy:(id)arg0 ;
-(int)StringAsGlobalPresentationPolicyGroup:(id)arg0 ;
-(int)StringAsMessageType:(id)arg0 ;
-(int)StringAsModalPresentationStyle:(id)arg0 ;
-(void)addContentPages:(id)arg0 ;
-(void)addPresentationTriggers:(id)arg0 ;
-(void)addTarget:(id)arg0 ;
-(void)clearContentPages;
-(void)clearPresentationTriggers;
-(void)clearTargets;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
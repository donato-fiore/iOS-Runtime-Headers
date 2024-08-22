// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIANALYTICSAWDSLOWWIFINOTIFICATION_H
#define WIFIANALYTICSAWDSLOWWIFINOTIFICATION_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDSlowWiFiNotification : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int actionField; // ivar: _actionField
@property (nonatomic) BOOL facetimeCallInProgress; // ivar: _facetimeCallInProgress
@property (nonatomic) BOOL hasActionField;
@property (nonatomic) BOOL hasFacetimeCallInProgress;
@property (nonatomic) BOOL hasRecoveryAction;
@property (nonatomic) BOOL hasRecoveryReason;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUserInput;
@property (nonatomic) unsigned int recoveryAction; // ivar: _recoveryAction
@property (nonatomic) unsigned int recoveryReason; // ivar: _recoveryReason
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) unsigned int userInput; // ivar: _userInput


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
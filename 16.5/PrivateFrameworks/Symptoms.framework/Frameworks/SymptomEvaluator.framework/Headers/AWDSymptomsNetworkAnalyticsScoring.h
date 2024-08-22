// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDSYMPTOMSNETWORKANALYTICSSCORING_H
#define AWDSYMPTOMSNETWORKANALYTICSSCORING_H

@class PBCodable;
@protocol NSCopying;



@interface AWDSymptomsNetworkAnalyticsScoring : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasLifetimeOldestItemSecs;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) BOOL hasNumberEntriesWithHomeLOI;
@property (nonatomic) BOOL hasNumberEntriesWithUnapprovedLOI;
@property (nonatomic) BOOL hasNumberEntriesWithUndefinedLOI;
@property (nonatomic) BOOL hasNumberEntriesWithWorkLOI;
@property (nonatomic) BOOL hasScoredEntries;
@property (nonatomic) BOOL hasScoredKnownGood;
@property (nonatomic) BOOL hasScoringCompletionCode;
@property (nonatomic) BOOL hasTimeSinceLastScoringSecs;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger lifetimeOldestItemSecs; // ivar: _lifetimeOldestItemSecs
@property (nonatomic) int networkType; // ivar: _networkType
@property (nonatomic) NSUInteger numberEntriesWithHomeLOI; // ivar: _numberEntriesWithHomeLOI
@property (nonatomic) NSUInteger numberEntriesWithUnapprovedLOI; // ivar: _numberEntriesWithUnapprovedLOI
@property (nonatomic) NSUInteger numberEntriesWithUndefinedLOI; // ivar: _numberEntriesWithUndefinedLOI
@property (nonatomic) NSUInteger numberEntriesWithWorkLOI; // ivar: _numberEntriesWithWorkLOI
@property (nonatomic) NSUInteger scoredEntries; // ivar: _scoredEntries
@property (nonatomic) NSUInteger scoredKnownGood; // ivar: _scoredKnownGood
@property (nonatomic) int scoringCompletionCode; // ivar: _scoringCompletionCode
@property (nonatomic) NSUInteger timeSinceLastScoringSecs; // ivar: _timeSinceLastScoringSecs
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)networkTypeAsString:(int)arg0 ;
-(id)scoringCompletionCodeAsString:(int)arg0 ;
-(int)StringAsNetworkType:(id)arg0 ;
-(int)StringAsScoringCompletionCode:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
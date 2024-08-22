// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPTELEMETRYQBSPERFORMANCE_H
#define APPTELEMETRYQBSPERFORMANCE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AppTelemetryQBSPerformance : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasOperationType;
@property (nonatomic) BOOL hasRecordsFetched;
@property (nonatomic) BOOL hasRecordsFetchedTotalMetadataSize;
@property (nonatomic) BOOL hasTotalTime;
@property (nonatomic) BOOL hasXattrsFetchedTotalSize;
@property (retain, nonatomic) NSString *operationType; // ivar: _operationType
@property (nonatomic) NSUInteger recordsFetched; // ivar: _recordsFetched
@property (nonatomic) NSUInteger recordsFetchedTotalMetadataSize; // ivar: _recordsFetchedTotalMetadataSize
@property (nonatomic) NSUInteger totalTime; // ivar: _totalTime
@property (nonatomic) NSUInteger xattrsFetchedTotalSize; // ivar: _xattrsFetchedTotalSize


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
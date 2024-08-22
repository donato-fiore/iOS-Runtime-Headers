// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPTELEMETRYQBSINVESTIGATION_H
#define APPTELEMETRYQBSINVESTIGATION_H

@class PBCodable;
@protocol NSCopying;



@interface AppTelemetryQBSInvestigation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger clientTruthDirFaultCount; // ivar: _clientTruthDirFaultCount
@property (nonatomic) BOOL hasClientTruthDirFaultCount;
@property (nonatomic) BOOL hasServerTruthDirCount;
@property (nonatomic) BOOL hasServerTruthDirFaultCount;
@property (nonatomic) BOOL hasServerTruthTotalItemsCount;
@property (nonatomic) BOOL hasTimeSinceLogin;
@property (nonatomic) NSUInteger serverTruthDirCount; // ivar: _serverTruthDirCount
@property (nonatomic) NSUInteger serverTruthDirFaultCount; // ivar: _serverTruthDirFaultCount
@property (nonatomic) NSUInteger serverTruthTotalItemsCount; // ivar: _serverTruthTotalItemsCount
@property (nonatomic) NSUInteger timeSinceLogin; // ivar: _timeSinceLogin


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
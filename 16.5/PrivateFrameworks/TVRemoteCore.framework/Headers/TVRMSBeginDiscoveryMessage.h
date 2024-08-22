// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRMSBEGINDISCOVERYMESSAGE_H
#define TVRMSBEGINDISCOVERYMESSAGE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface TVRMSBeginDiscoveryMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int discoveryTypes; // ivar: _discoveryTypes
@property (nonatomic) BOOL hasDiscoveryTypes;
@property (nonatomic) BOOL hasHasPairedNetworkNames;
@property (nonatomic) BOOL hasPairedNetworkNames; // ivar: _hasPairedNetworkNames
@property (retain, nonatomic) NSMutableArray *pairedNetworkNames; // ivar: _pairedNetworkNames


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)pairedNetworkNamesAtIndex:(NSUInteger)arg0 ;
-(void)addPairedNetworkNames:(id)arg0 ;
-(void)clearPairedNetworkNames;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
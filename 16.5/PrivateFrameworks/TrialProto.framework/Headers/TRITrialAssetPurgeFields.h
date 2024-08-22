// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRITRIALASSETPURGEFIELDS_H
#define TRITRIALASSETPURGEFIELDS_H

@class PBCodable;
@protocol NSCopying;



@interface TRITrialAssetPurgeFields : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasPurgeabilityLevel;
@property (nonatomic) int purgeabilityLevel; // ivar: _purgeabilityLevel


+(int)assetPurgeFieldsPurgeabilityLevelFromPurgeabilityLevel:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)purgeabilityLevelAsString:(int)arg0 ;
-(int)StringAsPurgeabilityLevel:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
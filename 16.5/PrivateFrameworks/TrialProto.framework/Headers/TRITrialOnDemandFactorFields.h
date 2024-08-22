// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRITRIALONDEMANDFACTORFIELDS_H
#define TRITRIALONDEMANDFACTORFIELDS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface TRITrialOnDemandFactorFields : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *factorName; // ivar: _factorName
@property (readonly, nonatomic) BOOL hasFactorName;
@property (readonly, nonatomic) BOOL hasNamespaceName;
@property (retain, nonatomic) NSString *namespaceName; // ivar: _namespaceName


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
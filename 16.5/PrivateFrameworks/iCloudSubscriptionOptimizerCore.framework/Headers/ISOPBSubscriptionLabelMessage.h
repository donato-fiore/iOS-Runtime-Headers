// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISOPBSUBSCRIPTIONLABELMESSAGE_H
#define ISOPBSUBSCRIPTIONLABELMESSAGE_H

@class PBCodable;
@protocol NSCopying;



@interface ISOPBSubscriptionLabelMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasLabel;
@property (nonatomic) BOOL hasMinsUntilICloudNotificationOpened;
@property (nonatomic) int label; // ivar: _label
@property (nonatomic) NSInteger minsUntilICloudNotificationOpened; // ivar: _minsUntilICloudNotificationOpened


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)labelAsString:(int)arg0 ;
-(int)StringAsLabel:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
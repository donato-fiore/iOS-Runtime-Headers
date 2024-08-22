// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICIAMSYNCHRONIZEMESSAGESRESPONSE_H
#define ICIAMSYNCHRONIZEMESSAGESRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface ICIAMSynchronizeMessagesResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *applicationMessageSyncResponses; // ivar: _applicationMessageSyncResponses


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applicationMessageSyncResponsesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addApplicationMessageSyncResponses:(id)arg0 ;
-(void)clearApplicationMessageSyncResponses;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
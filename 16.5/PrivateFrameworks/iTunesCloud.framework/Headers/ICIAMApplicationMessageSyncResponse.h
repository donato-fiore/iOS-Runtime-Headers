// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICIAMAPPLICATIONMESSAGESYNCRESPONSE_H
#define ICIAMAPPLICATIONMESSAGESYNCRESPONSE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface ICIAMApplicationMessageSyncResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSMutableArray *syncCommands; // ivar: _syncCommands


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)syncCommandsAtIndex:(NSUInteger)arg0 ;
-(void)addSyncCommands:(id)arg0 ;
-(void)clearSyncCommands;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
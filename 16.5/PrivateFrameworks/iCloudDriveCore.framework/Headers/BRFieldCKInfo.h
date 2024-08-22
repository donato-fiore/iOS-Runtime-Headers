// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRFIELDCKINFO_H
#define BRFIELDCKINFO_H

@class PBCodable, NSString, NSData;
@protocol PQLValuable, NSCopying;



@interface BRFieldCKInfo : PBCodable <PQLValuable, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *deletionChangeToken; // ivar: _deletionChangeToken
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *etag; // ivar: _etag
@property (retain, nonatomic) NSString *etagBeforeCrossZoneMove; // ivar: _etagBeforeCrossZoneMove
@property (readonly, nonatomic) BOOL hasDeletionChangeToken;
@property (readonly, nonatomic) BOOL hasEtag;
@property (readonly, nonatomic) BOOL hasEtagBeforeCrossZoneMove;
@property (nonatomic) BOOL hasKnownToServer;
@property (nonatomic) BOOL hasWasCached;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL knownToServer; // ivar: _knownToServer
@property (readonly) Class superclass;
@property (nonatomic) BOOL wasCached; // ivar: _wasCached


+(id)newFromSqliteStatement:(struct sqlite3_stmt *)arg0 atIndex:(int)arg1 ;
+(id)newFromSqliteValue:(struct sqlite3_value *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithRecord:(id)arg0 ;
-(void)clearCrossZoneMoveEtag;
-(void)copyTo:(id)arg0 ;
-(void)markCrossZoneMoved;
-(void)mergeFrom:(id)arg0 ;
-(void)revertEtagsForOldZoneTombstone;
-(void)setCKInfoFieldsInRecord:(id)arg0 includeCZMEtag:(BOOL)arg1 ;
-(void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
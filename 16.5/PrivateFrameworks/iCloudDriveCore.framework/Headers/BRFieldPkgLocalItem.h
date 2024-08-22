// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRFIELDPKGLOCALITEM_H
#define BRFIELDPKGLOCALITEM_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "BRFieldPkgItem.h"

@interface BRFieldPkgLocalItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger fileID; // ivar: _fileID
@property (nonatomic) unsigned int generationID; // ivar: _generationID
@property (nonatomic) BOOL hasGenerationID;
@property (nonatomic) BOOL hasSize;
@property (readonly, nonatomic) BOOL hasXattrs;
@property (retain, nonatomic) BRFieldPkgItem *item; // ivar: _item
@property (nonatomic) NSInteger size; // ivar: _size
@property (retain, nonatomic) NSData *xattrs; // ivar: _xattrs


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
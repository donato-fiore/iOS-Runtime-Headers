// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREPBVARIABLE_H
#define WFREPBVARIABLE_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface WFREPBVariable : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (retain, nonatomic) NSString *key; // ivar: _key


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)itemsAtIndex:(NSUInteger)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)clearItems;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
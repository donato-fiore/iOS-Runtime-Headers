// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ICLLCURRENTITEMCHANGECOMMAND_H
#define _ICLLCURRENTITEMCHANGECOMMAND_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _ICLLCurrentItemChangeCommand : PBCodable <NSCopying>

 {
    NSString *_itemId;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif
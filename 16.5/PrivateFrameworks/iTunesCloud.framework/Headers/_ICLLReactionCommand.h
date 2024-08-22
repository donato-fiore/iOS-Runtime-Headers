// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ICLLREACTIONCOMMAND_H
#define _ICLLREACTIONCOMMAND_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _ICLLReactionCommand : PBCodable <NSCopying>

 {
    NSString *_itemId;
    NSString *_reaction;
    NSString *_reactionId;
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
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ICLLAVAILABILITY_H
#define _ICLLAVAILABILITY_H

@class PBCodable;
@protocol NSCopying;



@interface _ICLLAvailability : PBCodable <NSCopying>

 {
    ? _repeatModes;
    ? _shuffleModes;
    BOOL _autoPlay;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif
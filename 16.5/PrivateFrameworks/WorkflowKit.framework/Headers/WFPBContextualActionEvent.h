// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPBCONTEXTUALACTIONEVENT_H
#define WFPBCONTEXTUALACTIONEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WFPBContextualActionEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasHasTrackpad;
@property (nonatomic) BOOL hasItemCount;
@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasSource;
@property (nonatomic) BOOL hasTrackpad; // ivar: _hasTrackpad
@property (nonatomic) unsigned int itemCount; // ivar: _itemCount
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSString *source; // ivar: _source


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
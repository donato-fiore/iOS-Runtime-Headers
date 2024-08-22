// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ICLLPLAYBACKITEMCONTAINER_H
#define _ICLLPLAYBACKITEMCONTAINER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _ICLLPlaybackItemContainer : PBCodable <NSCopying>

 {
    NSString *_containerId;
    NSString *_featureName;
    NSString *_mediaId;
    NSString *_stationHash;
    int _type;
    ? _has;
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
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AWDWIFIUISCANSESSION_H
#define _AWDWIFIUISCANSESSION_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface _AWDWiFiUIScanSession : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *counts; // ivar: _counts
@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) BOOL hasProcess;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSString *process; // ivar: _process
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)countsAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCounts:(id)arg0 ;
-(void)clearCounts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
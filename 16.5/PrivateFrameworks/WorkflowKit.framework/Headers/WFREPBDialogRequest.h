// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREPBDIALOGREQUEST_H
#define WFREPBDIALOGREQUEST_H

@class PBRequest, NSData, NSString;
@protocol NSCopying;



@interface WFREPBDialogRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSData *dialogRequestData; // ivar: _dialogRequestData
@property (retain, nonatomic) NSString *runRequestIdentifier; // ivar: _runRequestIdentifier


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
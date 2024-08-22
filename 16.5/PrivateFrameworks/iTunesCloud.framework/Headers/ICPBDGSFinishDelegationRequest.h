// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICPBDGSFINISHDELEGATIONREQUEST_H
#define ICPBDGSFINISHDELEGATIONREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;



@interface ICPBDGSFinishDelegationRequest : PBRequest <NSCopying>

 {
    NSMutableArray *_playerDelegateInfoTokens;
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
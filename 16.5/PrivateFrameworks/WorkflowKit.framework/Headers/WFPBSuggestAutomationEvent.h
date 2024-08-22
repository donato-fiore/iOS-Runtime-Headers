// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPBSUGGESTAUTOMATIONEVENT_H
#define WFPBSUGGESTAUTOMATIONEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WFPBSuggestAutomationEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL completed; // ivar: _completed
@property (nonatomic) BOOL hasCompleted;
@property (nonatomic) BOOL hasInteracted;
@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasSource;
@property (readonly, nonatomic) BOOL hasSuggestedAutomationIdentifier;
@property (nonatomic) BOOL interacted; // ivar: _interacted
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSString *source; // ivar: _source
@property (retain, nonatomic) NSString *suggestedAutomationIdentifier; // ivar: _suggestedAutomationIdentifier


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
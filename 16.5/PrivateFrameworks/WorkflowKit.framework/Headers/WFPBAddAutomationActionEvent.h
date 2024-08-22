// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPBADDAUTOMATIONACTIONEVENT_H
#define WFPBADDAUTOMATIONACTIONEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WFPBAddAutomationActionEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (nonatomic) unsigned int actionIndex; // ivar: _actionIndex
@property (readonly, nonatomic) BOOL hasActionIdentifier;
@property (nonatomic) BOOL hasActionIndex;
@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasShortcutIdentifier;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSString *shortcutIdentifier; // ivar: _shortcutIdentifier


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
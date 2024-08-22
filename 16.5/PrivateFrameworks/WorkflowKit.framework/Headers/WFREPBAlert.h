// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREPBALERT_H
#define WFREPBALERT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface WFREPBAlert : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *buttons; // ivar: _buttons
@property (readonly, nonatomic) BOOL hasMessage;
@property (nonatomic) BOOL hasPreferredStyle;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) int preferredStyle; // ivar: _preferredStyle
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)buttonsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)preferredStyleAsString:(int)arg0 ;
-(int)StringAsPreferredStyle:(id)arg0 ;
-(void)addButtons:(id)arg0 ;
-(void)clearButtons;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
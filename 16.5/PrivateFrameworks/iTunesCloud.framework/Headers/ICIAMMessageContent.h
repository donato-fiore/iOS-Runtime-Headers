// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICIAMMESSAGECONTENT_H
#define ICIAMMESSAGECONTENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "ICIAMMetricEvent.h"

@interface ICIAMMessageContent : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *body; // ivar: _body
@property (retain, nonatomic) ICIAMMetricEvent *cardClickEvent; // ivar: _cardClickEvent
@property (retain, nonatomic) ICIAMMetricEvent *closeClickEvent; // ivar: _closeClickEvent
@property (retain, nonatomic) NSMutableArray *contentParameters; // ivar: _contentParameters
@property (readonly, nonatomic) BOOL hasBody;
@property (readonly, nonatomic) BOOL hasCardClickEvent;
@property (readonly, nonatomic) BOOL hasCloseClickEvent;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasPageEvent;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSMutableArray *images; // ivar: _images
@property (retain, nonatomic) NSMutableArray *messageActions; // ivar: _messageActions
@property (retain, nonatomic) ICIAMMetricEvent *pageEvent; // ivar: _pageEvent
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contentParametersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)imagesAtIndex:(NSUInteger)arg0 ;
-(id)messageActionsAtIndex:(NSUInteger)arg0 ;
-(void)addContentParameters:(id)arg0 ;
-(void)addImages:(id)arg0 ;
-(void)addMessageActions:(id)arg0 ;
-(void)clearContentParameters;
-(void)clearImages;
-(void)clearMessageActions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
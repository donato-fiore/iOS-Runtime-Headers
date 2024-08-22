// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREPBASKWHENRUNREQUESTRESPONSE_H
#define WFREPBASKWHENRUNREQUESTRESPONSE_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "WFREPBError.h"

@interface WFREPBAskWhenRunRequestResponse : PBCodable <NSCopying>



@property (retain, nonatomic) WFREPBError *error; // ivar: _error
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) NSMutableArray *inputtedStates; // ivar: _inputtedStates
@property (retain, nonatomic) NSString *originatingRequestIdentifier; // ivar: _originatingRequestIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)inputtedStatesAtIndex:(NSUInteger)arg0 ;
-(void)addInputtedStates:(id)arg0 ;
-(void)clearInputtedStates;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
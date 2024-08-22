// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREPBRUNREQUESTRESPONSE_H
#define WFREPBRUNREQUESTRESPONSE_H

@class PBCodable, NSData, NSMutableArray, NSString;
@protocol NSCopying;



@interface WFREPBRunRequestResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *errorData; // ivar: _errorData
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSMutableArray *outputDatas; // ivar: _outputDatas
@property (retain, nonatomic) NSString *runRequestIdentifier; // ivar: _runRequestIdentifier
@property (retain, nonatomic) NSMutableArray *variablesDatas; // ivar: _variablesDatas


+(Class)outputDataType;
+(Class)variablesDataType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)outputDataAtIndex:(NSUInteger)arg0 ;
-(id)variablesDataAtIndex:(NSUInteger)arg0 ;
-(void)addOutputData:(id)arg0 ;
-(void)addVariablesData:(id)arg0 ;
-(void)clearOutputDatas;
-(void)clearVariablesDatas;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
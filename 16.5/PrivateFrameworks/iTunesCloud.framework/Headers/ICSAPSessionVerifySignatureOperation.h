// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSAPSESSIONVERIFYSIGNATUREOPERATION_H
#define ICSAPSESSIONVERIFYSIGNATUREOPERATION_H

@class NSMutableData, NSData;


#import "ICSAPSessionAbstractOperation.h"

@interface ICSAPSessionVerifySignatureOperation : ICSAPSessionAbstractOperation

@property (retain, nonatomic) NSMutableData *data; // ivar: _data
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (copy, nonatomic) NSData *signatureData; // ivar: _signatureData


-(void)executeWithSAPContext:(id)arg0 ;
-(void)finishWithSAPContextPreparationError:(id)arg0 ;


@end


#endif
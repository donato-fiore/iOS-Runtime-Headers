// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSAPSESSIONABSTRACTOPERATION_H
#define ICSAPSESSIONABSTRACTOPERATION_H



#import "ICAsyncOperation.h"
#import "ICSAPSession.h"

@interface ICSAPSessionAbstractOperation : ICAsyncOperation

@property (retain, nonatomic) ICSAPSession *sapSession; // ivar: _sapSession


-(void)execute;
-(void)executeWithSAPContext:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)finishWithSAPContextPreparationError:(id)arg0 ;


@end


#endif
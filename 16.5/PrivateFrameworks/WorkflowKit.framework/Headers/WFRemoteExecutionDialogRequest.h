// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREMOTEEXECUTIONDIALOGREQUEST_H
#define WFREMOTEEXECUTIONDIALOGREQUEST_H

@class NSString, WFDialogRequest;
@protocol WFPBCodable;


#import "WFRemoteExecutionRequest.h"

@interface WFRemoteExecutionDialogRequest : WFRemoteExecutionRequest <WFPBCodable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WFDialogRequest *dialogRequest; // ivar: _dialogRequest
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *runRequestIdentifier; // ivar: _runRequestIdentifier
@property (readonly) Class superclass;


+(NSInteger)version;
-(BOOL)readMessageFromData:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithDialogRequest:(id)arg0 runRequestIdentifier:(id)arg1 ;
-(id)writeMessageToWriter:(id)arg0 error:(*id)arg1 ;


@end


#endif
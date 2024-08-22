// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREMOTEEXECUTIONACECOMMANDREQUESTRESPONSE_H
#define WFREMOTEEXECUTIONACECOMMANDREQUESTRESPONSE_H

@class NSDictionary, NSString, NSError;
@protocol WFPBCodable;


#import "WFRemoteExecutionRequest.h"

@interface WFRemoteExecutionAceCommandRequestResponse : WFRemoteExecutionRequest <WFPBCodable>



@property (readonly, nonatomic) NSDictionary *aceCommandResponseDictionary; // ivar: _aceCommandResponseDictionary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *originatingRequestIdentifier; // ivar: _originatingRequestIdentifier
@property (readonly) Class superclass;


+(NSInteger)version;
-(BOOL)readMessageFromData:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithOriginatingRequestIdentifier:(id)arg0 aceCommandResponseDictionary:(id)arg1 error:(id)arg2 ;
-(id)writeMessageToWriter:(id)arg0 error:(*id)arg1 ;


@end


#endif
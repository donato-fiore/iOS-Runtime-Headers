// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREMOTEEXECUTIONALERTREQUEST_H
#define WFREMOTEEXECUTIONALERTREQUEST_H

@class WFAlert, NSString;


#import "WFRemoteExecutionRequest.h"
#import "WFREPBAlert.h"

@interface WFRemoteExecutionAlertRequest : WFRemoteExecutionRequest

@property (readonly, nonatomic) WFAlert *alert; // ivar: _alert
@property (readonly, nonatomic) NSString *associatedRunRequestIdentifier; // ivar: _associatedRunRequestIdentifier
@property (retain, nonatomic) WFREPBAlert *pbAlert; // ivar: _pbAlert


+(NSInteger)version;
-(BOOL)readMessageFromData:(id)arg0 error:(*id)arg1 ;
-(id)initWithAlert:(id)arg0 associatedRunRequestIdentifier:(id)arg1 ;
-(id)writeMessageToWriter:(id)arg0 error:(*id)arg1 ;
-(void)inflateAlertWithBlock:(id)arg0 ;


@end


#endif
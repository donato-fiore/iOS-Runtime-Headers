// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMACHINEDATAPROVISIONOPERATION_H
#define ICMACHINEDATAPROVISIONOPERATION_H



#import "ICMachineDataOperation.h"
#import "ICADIProvisionSession.h"

@interface ICMachineDataProvisionOperation : ICMachineDataOperation {
    ICADIProvisionSession *_provisionSession;
}




-(void)_finishWithError:(id)arg0 ;
-(void)execute;


@end


#endif
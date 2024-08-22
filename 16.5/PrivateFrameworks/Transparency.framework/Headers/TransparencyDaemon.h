// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRANSPARENCYDAEMON_H
#define TRANSPARENCYDAEMON_H


#import <Foundation/Foundation.h>


@interface TransparencyDaemon : NSObject



-(id)transparencyCheckIDSHealth:(*id)arg0 ;
-(id)transparencySysDiagnoseData:(*id)arg0 ;
-(void)clearPeerState:(id)arg0 uris:(id)arg1 block:(id)arg2 ;
-(void)configurationBagFetch:(id)arg0 ;
-(void)getAllOptInStates:(id)arg0 ;
-(void)getOptInForURI:(id)arg0 application:(id)arg1 complete:(id)arg2 ;
-(void)performAndWaitForSelfValidate:(id)arg0 ;
-(void)replaySelfValidate:(id)arg0 application:(id)arg1 pcsAccountKey:(id)arg2 queryRequest:(id)arg3 queryResponse:(id)arg4 responseTime:(id)arg5 completionHandler:(id)arg6 ;
-(void)setOptInForURI:(id)arg0 application:(id)arg1 state:(BOOL)arg2 smtTimestamp:(id)arg3 complete:(id)arg4 ;
-(void)transparencyCloudDevices:(id)arg0 ;
-(void)transparencyDumpKTRegistrationData:(id)arg0 ;
-(void)transparencyFetchIDMS:(id)arg0 ;
-(void)transparencyFetchPublicKeys:(id)arg0 ;
-(void)transparencyFetchSelf:(id)arg0 ;
-(void)transparencyGetKTSignatures:(id)arg0 complete:(id)arg1 ;
-(void)transparencyIDSRegistration:(id)arg0 ;
-(void)transparencyIDSRepair:(id)arg0 ;
-(void)transparencyPerformRegistrationSignature:(id)arg0 ;
-(void)transparencySysDiagnose:(id)arg0 ;
-(void)transparencyTriggerCKPullPush:(id)arg0 ;
-(void)transparencyTriggerIDSRegistration:(id)arg0 ;
-(void)transparencyTriggerOperation:(id)arg0 complete:(id)arg1 ;
-(void)transparencyValidateSelf:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TFBETALAUNCHHANDLE_H
#define TFBETALAUNCHHANDLE_H

@class NSString, BSProcessHandle;
@protocol SBSRemoteAlertHandleObserver, TFBetaLaunchHandleActivationDelegate;

#import <Foundation/Foundation.h>


@interface TFBetaLaunchHandle : NSObject <SBSRemoteAlertHandleObserver>



@property (weak, nonatomic) NSObject<TFBetaLaunchHandleActivationDelegate> *activationDelegate; // ivar: _activationDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *logKey; // ivar: _logKey
@property (readonly, nonatomic) BSProcessHandle *processHandle; // ivar: _processHandle
@property (readonly) Class superclass;


-(BOOL)_remoteAlertShouldActivateForLaunchInfo:(id)arg0 ;
-(id)initWithProcessHandle:(id)arg0 ;
-(void)_activateRemoteAlertWithLaunchInfo:(id)arg0 ;
-(void)_updatedLaunchInfoForActivation:(id)arg0 ;
-(void)activateForTestingWithLaunchInfo:(id)arg0 ;
-(void)activateIfNeeded;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRMSDAAPLOGINMANAGER_H
#define TVRMSDAAPLOGINMANAGER_H


#import <Foundation/Foundation.h>

#import "TVRMSDAAPRequestManager.h"
#import "TVRMSFairPlaySession.h"

@interface TVRMSDAAPLoginManager : NSObject {
    TVRMSDAAPRequestManager *_requestManager;
    TVRMSFairPlaySession *_fairPlaySession;
    BOOL _isFairPlayRequired;
}




-(BOOL)_isFairplayRequiredForServerInfo:(id)arg0 ;
-(id)initWithRequestManager:(id)arg0 ;
-(void)_continueFairPlayHandshakeWithData:(id)arg0 completionHandler:(id)arg1 ;
-(void)_requestControlInterfaceWithCompletionHandler:(id)arg0 ;
-(void)_requestFairPlayHandshake:(id)arg0 ;
-(void)_requestLoginWithCompletionHandler:(id)arg0 ;
-(void)_requestServerInfoWithCompletionHandler:(id)arg0 ;
-(void)loginWithCompletionHandler:(id)arg0 ;


@end


#endif
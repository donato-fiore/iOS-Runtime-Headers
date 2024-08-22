// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSWEBAUTHENTICATIONAPPDOCUMENTCONTROLLER_H
#define VSWEBAUTHENTICATIONAPPDOCUMENTCONTROLLER_H

@class NSString;
@protocol VSMessagePortFeatureDelegate, VSMessageQueueDelegate;


#import "VSAppDocumentController.h"

@interface VSWebAuthenticationAppDocumentController : VSAppDocumentController <VSMessagePortFeatureDelegate, VSMessageQueueDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_updateViewModel:(id)arg0 error:(*id)arg1 ;
-(BOOL)_updateWebAuthenticationViewModel:(id)arg0 error:(*id)arg1 ;
-(BOOL)_updateWebAuthenticationViewModel:(id)arg0 withTemplate:(id)arg1 error:(*id)arg2 ;
-(id)_newViewModel;
-(id)_webAuthenticationViewModelWithViewModel:(id)arg0 ;
-(id)initWithAppDocument:(id)arg0 ;
-(void)_sendMessage:(id)arg0 ;
-(void)_startObservingViewModel:(id)arg0 ;
-(void)_stopObservingViewModel:(id)arg0 ;
-(void)didAddMessagesToMessageQueue:(id)arg0 ;
-(void)messagePort:(id)arg0 didReceiveMessage:(id)arg1 ;


@end


#endif
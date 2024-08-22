// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSAUTOAUTHENTICATIONAPPDOCUMENTCONTROLLER_H
#define VSAUTOAUTHENTICATIONAPPDOCUMENTCONTROLLER_H

@class IKViewElement, NSString;
@protocol VSAutoAuthenticationViewModelDelegate;


#import "VSAppDocumentController.h"

@interface VSAutoAuthenticationAppDocumentController : VSAppDocumentController <VSAutoAuthenticationViewModelDelegate>



@property (retain, nonatomic) IKViewElement *buttonLockupElement; // ivar: _buttonLockupElement
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_updateAutoAuthenticationViewModel:(id)arg0 error:(*id)arg1 ;
-(BOOL)_updateAutoAuthenticationViewModel:(id)arg0 withTemplate:(id)arg1 ;
-(BOOL)_updateViewModel:(id)arg0 error:(*id)arg1 ;
-(id)_autoAuthenticationViewModelWithViewModel:(id)arg0 ;
-(id)_newViewModel;
-(void)autoAuthenticationViewModelDidManualSignInButton:(id)arg0 ;


@end


#endif
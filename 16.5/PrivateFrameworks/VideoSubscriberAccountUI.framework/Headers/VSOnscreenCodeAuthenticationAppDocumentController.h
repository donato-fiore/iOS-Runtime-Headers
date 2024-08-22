// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSONSCREENCODEAUTHENTICATIONAPPDOCUMENTCONTROLLER_H
#define VSONSCREENCODEAUTHENTICATIONAPPDOCUMENTCONTROLLER_H

@class IKViewElement, NSString;
@protocol VSOnscreenCodeViewModelDelegate;


#import "VSAppDocumentController.h"

@interface VSOnscreenCodeAuthenticationAppDocumentController : VSAppDocumentController <VSOnscreenCodeViewModelDelegate>



@property (retain, nonatomic) IKViewElement *buttonLockupViewElement; // ivar: _buttonLockupViewElement
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_updateOnscreenCodeViewModel:(id)arg0 error:(*id)arg1 ;
-(BOOL)_updateOnscreenCodeViewModel:(id)arg0 withTemplate:(id)arg1 ;
-(BOOL)_updateViewModel:(id)arg0 error:(*id)arg1 ;
-(id)_newViewModel;
-(id)_onscreenCodeViewModelWithViewModel:(id)arg0 ;
-(void)onscreenCodeViewModelButtonLockupPressed;


@end


#endif
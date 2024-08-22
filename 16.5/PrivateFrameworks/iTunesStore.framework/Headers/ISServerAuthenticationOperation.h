// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISSERVERAUTHENTICATIONOPERATION_H
#define ISSERVERAUTHENTICATIONOPERATION_H

@class NSNumber, SSAuthenticationContext, NSURL;


#import "ISOperation.h"
#import "ISDialog.h"
#import "ISDialogButton.h"

@interface ISServerAuthenticationOperation : ISOperation

@property NSUInteger authenticatedAccountCredentialSource; // ivar: _authenticatedAccountCredentialSource
@property (retain) NSNumber *authenticatedAccountDSID; // ivar: _authenticatedAccountDSID
@property (retain) SSAuthenticationContext *authenticationContext; // ivar: _authenticationContext
@property (retain) ISDialog *dialog; // ivar: _dialog
@property (retain) ISDialogButton *performedButton; // ivar: _performedButton
@property BOOL performsButtonAction; // ivar: _performsButtonAction
@property (retain) NSURL *redirectURL; // ivar: _redirectURL
@property (retain) ISDialogButton *selectedButton; // ivar: _selectedButton


-(id)init;
-(void)dealloc;
-(void)run;


@end


#endif
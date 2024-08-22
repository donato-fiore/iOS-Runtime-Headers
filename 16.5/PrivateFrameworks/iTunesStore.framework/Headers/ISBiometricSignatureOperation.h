// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISBIOMETRICSIGNATUREOPERATION_H
#define ISBIOMETRICSIGNATUREOPERATION_H

@class SSBiometricAuthenticationContext;


#import "ISOperation.h"
#import "ISBiometricStore.h"
#import "ISDialog.h"
#import "ISTouchIDDialog.h"

@interface ISBiometricSignatureOperation : ISOperation

@property (retain, nonatomic) ISBiometricStore *biometricStore; // ivar: _biometricStore
@property (retain) SSBiometricAuthenticationContext *context; // ivar: _context
@property (retain, nonatomic) ISDialog *fallbackDialog; // ivar: _fallbackDialog
@property (copy) id *outputBlock; // ivar: _outputBlock
@property (retain, nonatomic) ISTouchIDDialog *touchIDDialog; // ivar: _touchIDDialog


-(BOOL)_promptUserToAuthenticateForIdentityMapChangeWithAccountIdentifier:(id)arg0 accountName:(id)arg1 ;
-(id)initWithBiometricAuthenticationContext:(id)arg0 touchIDDialog:(id)arg1 fallbackDialog:(id)arg2 ;
-(void)run;


@end


#endif
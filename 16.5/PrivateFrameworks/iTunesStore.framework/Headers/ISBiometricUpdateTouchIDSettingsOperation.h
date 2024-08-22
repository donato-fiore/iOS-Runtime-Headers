// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISBIOMETRICUPDATETOUCHIDSETTINGSOPERATION_H
#define ISBIOMETRICUPDATETOUCHIDSETTINGSOPERATION_H

@class NSNumber, NSString, NSArray;


#import "ISOperation.h"
#import "ISBiometricStore.h"
#import "AMSBiometricsTokenUpdateTaskShim.h"

@interface ISBiometricUpdateTouchIDSettingsOperation : ISOperation

@property (copy, nonatomic) NSNumber *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSString *attestationStringExtendedActions; // ivar: _attestationStringExtendedActions
@property (copy, nonatomic) NSString *attestationStringPurchase; // ivar: _attestationStringPurchase
@property (retain, nonatomic) ISBiometricStore *biometricStore; // ivar: _biometricStore
@property (copy, nonatomic) NSArray *certChainExtended; // ivar: _certChainExtended
@property (copy, nonatomic) NSArray *certChainPrimary; // ivar: _certChainPrimary
@property BOOL regeneratePublicKey; // ivar: _regeneratePublicKey
@property (copy) id *resultBlock; // ivar: _resultBlock
@property (readonly) AMSBiometricsTokenUpdateTaskShim *shim; // ivar: _shim
@property BOOL shouldSuppressAuthPrompts; // ivar: _shouldSuppressAuthPrompts
@property (readonly) NSInteger status; // ivar: _status


-(id)_newUpdateTouchIDSettingsOperation;
-(id)initWithAccountIdentifier:(id)arg0 ;
-(void)run;


@end


#endif
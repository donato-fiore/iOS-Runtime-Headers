// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBWALLETPREARMCONTROLLER_H
#define SBWALLETPREARMCONTROLLER_H

@class PKPassLibrary, NSHashTable, NSMutableDictionary;
@protocol SBUIBiometricResource;

#import <Foundation/Foundation.h>


@interface SBWalletPreArmController : NSObject {
    PKPassLibrary *_passLibrary;
    id<SBUIBiometricResource> *_biometricResource;
    NSInteger _triggerSource;
    NSHashTable *_disabledPreArmAssertions;
    NSMutableDictionary *_disabledPreArmAssertionsByType;
}


@property (readonly, nonatomic, getter=isPreArmAllowed) BOOL preArmAllowed;
@property (readonly, nonatomic, getter=isPreArmAvailable) BOOL preArmAvailable;
@property (readonly, nonatomic, getter=isPreArmExternallySuppressed) BOOL preArmExternallySuppressed;
@property (readonly, nonatomic, getter=isPreArmSuppressed) BOOL preArmSuppressed;
@property (readonly, nonatomic, getter=isPreArmTriggeredByHomeButtonDoublePress) BOOL preArmTriggeredByHomeButtonDoublePress;
@property (readonly, nonatomic, getter=isPreArmTriggeredByLockButtonDoublePress) BOOL preArmTriggeredByLockButtonDoublePress;


+(id)sharedInstance;
-(NSInteger)_computeTriggerSource;
-(NSInteger)_contactlessInterfaceSourceForTriggerSource:(NSInteger)arg0 ;
-(id)acquireSuppressPreArmAssertionForReason:(id)arg0 ;
-(id)acquireSuppressPreArmAssertionOfType:(NSInteger)arg0 forReason:(id)arg1 ;
-(id)init;
-(id)initWithPassLibrary:(id)arg0 biometricResource:(id)arg1 ;
-(void)presentPreArmInterfaceForTriggerSource:(NSInteger)arg0 completion:(id)arg1 ;


@end


#endif
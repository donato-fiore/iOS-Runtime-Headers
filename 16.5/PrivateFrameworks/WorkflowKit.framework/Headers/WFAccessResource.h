// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFACCESSRESOURCE_H
#define WFACCESSRESOURCE_H

@class NSString, NSError, WFImage, NSDictionary;
@protocol WFWorkflowReferencing;


#import "WFResource.h"
#import "WFWorkflow.h"

@interface WFAccessResource : WFResource <WFWorkflowReferencing>



@property (readonly, nonatomic) NSString *associatedAppIdentifier;
@property (readonly, nonatomic) NSString *attemptRecoveryFromErrorMessage;
@property (readonly, nonatomic) NSError *availabilityError;
@property (readonly, nonatomic) BOOL canLogOut;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFImage *icon;
@property (readonly, nonatomic) BOOL logOutAffectsOtherApps;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *protectedResourceDescription;
@property (readonly, nonatomic) NSString *resourceName;
@property (readonly, nonatomic) NSDictionary *settingsUIDefinition;
@property (readonly, nonatomic) NSUInteger status;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsMultipleAccounts;
@property (readonly, nonatomic) int token; // ivar: _token
@property (readonly, nonatomic) NSString *username;
@property (weak, nonatomic) WFWorkflow *workflow; // ivar: _workflow


+(BOOL)isSystemResource;
+(id)userInterfaceClasses;
+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(id)errorReasonForStatus:(NSUInteger)arg0 ;
-(id)errorRecoveryOptionsForStatus:(NSUInteger)arg0 ;
-(id)importErrorReasonForStatus:(NSUInteger)arg0 ;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedAttemptRecoveryFromErrorMessage;
-(id)localizedErrorReasonForStatus:(NSUInteger)arg0 ;
-(id)localizedImportErrorReasonForStatus:(NSUInteger)arg0 ;
-(void)attemptRecoveryFromError:(id)arg0 optionIndex:(NSUInteger)arg1 userInterface:(id)arg2 completionHandler:(id)arg3 ;
-(void)attemptRecoveryFromErrorWithOptionIndex:(NSUInteger)arg0 userInterface:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)logOut;
-(void)makeAvailableWithRemoteInterface:(id)arg0 completionHandler:(id)arg1 ;
-(void)makeAvailableWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;
-(void)refreshAvailability;
-(void)refreshAvailabilityWithNotification:(BOOL)arg0 ;


@end


#endif
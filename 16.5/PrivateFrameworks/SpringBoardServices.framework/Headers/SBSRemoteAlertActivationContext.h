// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSREMOTEALERTACTIVATIONCONTEXT_H
#define SBSREMOTEALERTACTIVATIONCONTEXT_H

@class NSSet, NSUUID, NSString, NSDictionary;
@protocol BSDescriptionProviding, BSSettingDescriptionProvider, BSXPCCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SBSRemoteAlertPresentationTarget.h"

@interface SBSRemoteAlertActivationContext : NSObject <BSDescriptionProviding, BSSettingDescriptionProvider, BSXPCCoding, NSSecureCoding>



@property (copy, nonatomic) NSSet *actions; // ivar: _actions
@property (nonatomic, getter=isActivatingForSiri) BOOL activatingForSiri; // ivar: _activatingForSiri
@property (copy, nonatomic) NSUUID *activityContinuationIdentifier; // ivar: _activityContinuationIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *legacyAlertOptions; // ivar: _legacyAlertOptions
@property (retain, nonatomic) SBSRemoteAlertPresentationTarget *presentationTarget; // ivar: _presentationTarget
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (nonatomic) BOOL shouldDismissPresentedBanners; // ivar: _shouldDismissPresentedBanners
@property (nonatomic) BOOL shouldInvalidateWhenDeactivated; // ivar: _shouldInvalidateWhenDeactivated
@property (nonatomic) BOOL shouldStashPictureInPictureIfNeeded; // ivar: _shouldStashPictureInPictureIfNeeded
@property (readonly) Class superclass;
@property (nonatomic, getter=isSwitcherEligible) BOOL switcherEligible; // ivar: _switcherEligible
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(id)activationContextWithLegacyAlertOptions:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithActions:(id)arg0 ;
-(id)initWithActions:(id)arg0 presentationTarget:(id)arg1 ;
-(id)initWithActions:(id)arg0 presentationTarget:(id)arg1 userInfo:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif
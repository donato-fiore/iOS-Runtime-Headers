// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICPRIVACYINFO_H
#define ICPRIVACYINFO_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "ICUserIdentity.h"

@interface ICPrivacyInfo : NSObject {
    ICUserIdentity *_userIdentity;
    NSMutableDictionary *_cache;
    NSMutableDictionary *_observers;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) BOOL privacyAcknowledgementRequiredForMedia;
@property (readonly, nonatomic) BOOL privacyAcknowledgementRequiredForMusic;


+(id)_onboardingKitPrivacyIdentifierForPrivacyIdentifier:(id)arg0 ;
+(id)sharedPrivacyInfo;
+(id)sharedPrivacyInfoForUserIdentity:(id)arg0 ;
-(BOOL)_privacyAcknowledgementRequiredForIdentifier:(id)arg0 ;
-(BOOL)_queryPrivacyAcknowledgementRequiredForIdentifier:(id)arg0 ;
-(BOOL)privacyAcknowledgementRequiredForBundleIdentifier:(id)arg0 ;
-(BOOL)privacyAcknowledgementRequiredForIdentifier:(id)arg0 ;
-(id)_accountForPrivacyInfo;
-(id)beginObservingPrivacyAcknowledgementForIdentifier:(id)arg0 handler:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithIdentity:(id)arg0 ;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg0 ;
-(void)_updateForPrivacyAcknowledgementChanged;
-(void)acknowledgePrivacyPolicyForIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)endObservingPrivacyAcknowledgementForIdentifier:(id)arg0 withToken:(id)arg1 ;


@end


#endif
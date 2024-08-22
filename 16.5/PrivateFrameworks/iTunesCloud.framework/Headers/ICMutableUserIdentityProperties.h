// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMUTABLEUSERIDENTITYPROPERTIES_H
#define ICMUTABLEUSERIDENTITYPROPERTIES_H

@class NSNumber, NSDate, NSString, NSDictionary;


#import "ICUserIdentityProperties.h"
#import "ICDelegateToken.h"

@interface ICMutableUserIdentityProperties : ICUserIdentityProperties

@property (copy, nonatomic) NSNumber *DSID;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isActiveLocker) BOOL activeLocker;
@property (copy, nonatomic) NSDate *ageVerificationExpirationDate;
@property (copy, nonatomic) NSString *alternateDSID;
@property (copy, nonatomic) NSString *carrierBundleDeviceIdentifier;
@property (copy, nonatomic) NSDictionary *cloudLibraryStateReason;
@property (copy, nonatomic) ICDelegateToken *delegateToken;
@property (nonatomic, getter=isDelegated) BOOL delegated;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (nonatomic, getter=isManagedAppleID) BOOL managedAppleID;
@property (copy, nonatomic) NSNumber *mergeToCloudLibraryPreference;
@property (copy, nonatomic) NSDictionary *privacyAcknowledgementVersions;
@property (copy, nonatomic) NSNumber *privateListeningEnabled;
@property (nonatomic, getter=isSandboxed) BOOL sandboxed;
@property (copy, nonatomic) NSString *storefrontIdentifier;
@property (nonatomic, getter=isSubscriptionStatusEnabled) BOOL subscriptionStatusEnabled;
@property (copy, nonatomic) NSString *username;


-(void)replaceValuesWithValuesFromProperties:(id)arg0 ;
-(void)setCloudBackupEnabled:(BOOL)arg0 ;
-(void)setHomeUserIdentifiers:(id)arg0 ;
-(void)setICloudPersonID:(id)arg0 ;


@end


#endif
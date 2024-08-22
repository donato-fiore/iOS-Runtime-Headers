// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UMMUTABLEUSER_H
#define UMMUTABLEUSER_H

@class NSString, NSDate, NSError, NSURL, NSArray;


#import "UMUser.h"

@interface UMMutableUser : UMUser

@property (copy, nonatomic) NSString *alternateDSID;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic) NSUInteger dataQuota;
@property (nonatomic) NSUInteger dataUsed;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSError *errorCausingLogout;
@property (copy, nonatomic) NSString *familyName;
@property (nonatomic) unsigned int gid;
@property (copy, nonatomic) NSString *givenName;
@property (nonatomic) BOOL hasDataToSync;
@property (nonatomic) BOOL hasManagedCredentials;
@property (copy, nonatomic) NSURL *homeDirectoryURL;
@property (nonatomic) BOOL isAdminUser;
@property (nonatomic) BOOL isAuditor;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL isLoginUser;
@property (nonatomic) BOOL isPrimaryUser;
@property (nonatomic) BOOL isTransientUser;
@property (copy, nonatomic) NSArray *languages;
@property (copy, nonatomic) NSDate *lastLoginDate;
@property (copy, nonatomic) NSDate *lastRemoteAuthDate;
@property (nonatomic) NSUInteger passcodeLockGracePeriod;
@property (nonatomic) NSUInteger passcodeType;
@property (copy, nonatomic) NSURL *photoURL;
@property (nonatomic) unsigned int uid;
@property (copy, nonatomic) NSString *userAuxiliaryString;
@property (copy, nonatomic) NSString *username;


-(BOOL)commitChanges;
-(BOOL)commitChangesWithError:(*id)arg0 ;


@end


#endif
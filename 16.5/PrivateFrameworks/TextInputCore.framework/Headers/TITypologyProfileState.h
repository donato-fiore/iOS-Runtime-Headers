// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TITYPOLOGYPROFILESTATE_H
#define TITYPOLOGYPROFILESTATE_H

@class NSDate, NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TITypologyProfileState : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDate *profileInstallationDate; // ivar: _profileInstallationDate
@property (retain, nonatomic) NSData *salt; // ivar: _salt
@property (copy, nonatomic) NSDate *userNotificationDate; // ivar: _userNotificationDate
@property (copy, nonatomic) NSString *userResponse; // ivar: _userResponse


+(BOOL)_removePersistedStateAtURL:(id)arg0 ;
+(BOOL)removePersistedState;
+(BOOL)removePersistedStateAtURL:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_typologyProfileStateFromURL:(id)arg0 ;
+(id)defaultPersistentURL;
+(id)typologyProfileStateFromPersistedState;
+(id)typologyProfileStateWithURL:(id)arg0 ;
-(BOOL)_authenticateHashToken:(id)arg0 forProfileInstallationDate:(id)arg1 userNotificationDate:(id)arg2 userResponse:(id)arg3 ;
-(BOOL)_persistStateToURL:(id)arg0 ;
-(BOOL)persistState;
-(BOOL)persistStateToURL:(id)arg0 ;
-(id)_hashTokenForProfileInstallationDate:(id)arg0 userNotificationDate:(id)arg1 userResponse:(id)arg2 ;
-(id)hashForString:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProfileInstallationDate:(id)arg0 ;
-(id)initWithProfileInstallationDate:(id)arg0 userNotificationDate:(id)arg1 userResponse:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
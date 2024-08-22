// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBKSTORECLAMPSCONTROLLER_H
#define SBKSTORECLAMPSCONTROLLER_H

@class NSData, NSDictionary;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBKStoreClampsController : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat accountIdentifierCheckTimestamp; // ivar: _accountIdentifierCheckTimestamp
@property (nonatomic) CGFloat authenticationNeededTimestamp; // ivar: _authenticationNeededTimestamp
@property (nonatomic) CGFloat backOffUntil; // ivar: _backOffUntil
@property (nonatomic) CGFloat networkingBlockedUntil; // ivar: _networkingBlockedUntil
@property (nonatomic) CGFloat nextUserCancelBackOffInterval; // ivar: _nextUserCancelBackOffInterval
@property (retain, nonatomic) NSData *pendingUserDefaultArchivedData; // ivar: _pendingUserDefaultArchivedData
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSDictionary *transactionClamps; // ivar: _transactionClamps
@property (nonatomic) CGFloat userAcceptedSyncTimestamp; // ivar: _userAcceptedSyncTimestamp
@property (nonatomic) CGFloat userCancelledSignInBackOffUntil; // ivar: _userCancelledSignInBackOffUntil


+(BOOL)supportsSecureCoding;
+(id)sharedClampsController;
-(BOOL)_canScheduleTransactionBasedOfNetworkingBlocked:(id)arg0 error:(*id)arg1 ;
-(BOOL)_canScheduleTransactionBasedOnAccountIdentifierCheck:(id)arg0 error:(*id)arg1 ;
-(BOOL)_canScheduleTransactionBasedOnBackOff:(id)arg0 error:(*id)arg1 ;
-(BOOL)_canScheduleTransactionBasedOnType:(id)arg0 error:(*id)arg1 ;
-(BOOL)_canScheduleTransactionBasedOnUserCancelledSignIn:(id)arg0 error:(*id)arg1 ;
-(BOOL)canScheduleTransaction:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasAuthenticatedTooRecentlyForTransaction:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasUserRecentlyAcceptedSync;
-(BOOL)isNetworkingBlocked;
-(CGFloat)_rightNow;
-(id)_keyForTransaction:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)accessTransactionClampsWithBlock:(id)arg0 ;
-(void)backOffForTimeInterval:(CGFloat)arg0 ;
-(void)clearAccountIdentifierCheckTimestamp;
-(void)clearAuthenticationRequest;
-(void)clearBackOff;
-(void)clearNetworkingBlocked;
-(void)clearTimestampForTransaction:(id)arg0 ;
-(void)clearUserAcceptedSyncTimestamp;
-(void)clearUserCancelledSignIn;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reset;
-(void)saveToUserDefaults;
-(void)setAuthenticationRequest;
-(void)setNetworkingBlocked;
-(void)setTimestampForTransaction:(id)arg0 ;
-(void)setUserCancelledSignIn;


@end


#endif
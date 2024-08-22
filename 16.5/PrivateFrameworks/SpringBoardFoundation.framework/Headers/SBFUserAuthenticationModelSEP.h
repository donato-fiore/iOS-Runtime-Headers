// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFUSERAUTHENTICATIONMODELSEP_H
#define SBFUSERAUTHENTICATIONMODELSEP_H

@class MCProfileConnection, NSString;
@protocol SBFUserAuthenticationModel, SBFUserAuthenticationModelDelegate;

#import <Foundation/Foundation.h>

#import "SBFMobileKeyBag.h"
#import "SBSecurityDefaults.h"

@interface SBFUserAuthenticationModelSEP : NSObject <SBFUserAuthenticationModel>

 {
    SBFMobileKeyBag *_keybag;
    CGFloat _unblockTime;
    BOOL _permanentlyBlocked;
    BOOL _pendingWipe;
    BOOL _userRequestedEraseEnabled;
    SBSecurityDefaults *_securityDefaults;
    MCProfileConnection *_profileConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SBFUserAuthenticationModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPermanentlyBlocked) BOOL permanentlyBlocked;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTemporarilyBlocked) BOOL temporarilyBlocked;
@property (readonly, nonatomic) CGFloat timeUntilUnblockedSinceReferenceDate;
@property (readonly, nonatomic, getter=isUserRequestedEraseEnabled) BOOL userRequestedEraseEnabled;


-(BOOL)_isDeviceWipePreferenceEnabled;
-(id)_initWithKeyBag:(id)arg0 profileConnection:(id)arg1 ;
-(id)initWithKeyBag:(id)arg0 ;
-(void)_refreshStateAndNotify:(BOOL)arg0 ;
-(void)_refreshStateForMkbState:(id)arg0 notify:(BOOL)arg1 ;
-(void)clearBlockedState;
-(void)noteNewMkbDeviceLockState:(id)arg0 ;
-(void)notePasscodeEntryBegan;
-(void)notePasscodeEntryCancelled;
-(void)notePasscodeUnlockFailedWithError:(id)arg0 ;
-(void)notePasscodeUnlockSucceeded;
-(void)performPasswordTest:(id)arg0 ;
-(void)refreshBlockedState;
-(void)synchronize;


@end


#endif
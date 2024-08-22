// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMUSICUSERSTATE_H
#define ICMUSICUSERSTATE_H

@class NSString;
@protocol ICMutableMusicUserState, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ICMusicUserStateCookies.h"
#import "ICDelegateToken.h"
#import "ICMusicLibraryAuthTokenStatus.h"
#import "ICLightweightMusicSubscriptionStatus.h"
#import "ICMusicSubscriptionStatus.h"

@interface ICMusicUserState : NSObject <ICMutableMusicUserState, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *carrierBundleDeviceID; // ivar: _carrierBundleDeviceID
@property (nonatomic) NSInteger cloudLibrarySyncStatus; // ivar: _cloudLibrarySyncStatus
@property (copy, nonatomic) ICMusicUserStateCookies *cookies; // ivar: _cookies
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) ICDelegateToken *delegateToken; // ivar: _delegateToken
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFrozen) BOOL frozen; // ivar: _frozen
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDelegated; // ivar: _isDelegated
@property (copy, nonatomic) ICMusicLibraryAuthTokenStatus *libraryAuthTokenStatus; // ivar: _libraryAuthTokenStatus
@property (copy, nonatomic) ICLightweightMusicSubscriptionStatus *lightweightSubscriptionStatus; // ivar: _lightweightSubscriptionStatus
@property (copy, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus; // ivar: _subscriptionStatus
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesListeningHistory; // ivar: _usesListeningHistory


+(BOOL)supportsSecureCoding;
-(id)copyWithBlock:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
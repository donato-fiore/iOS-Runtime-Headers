// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMEDIAUSERSTATE_H
#define ICMEDIAUSERSTATE_H

@class NSString, NSNumber, NSArray;
@protocol ICMutableMediaUserState, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICMusicUserState.h"
#import "ICTVUserState.h"

@interface ICMediaUserState : NSObject <ICMutableMediaUserState, NSSecureCoding>



@property (nonatomic) BOOL ageVerificationRequired; // ivar: _ageVerificationRequired
@property (copy, nonatomic) NSString *alternateDSID; // ivar: _alternateDSID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *digest;
@property (copy, nonatomic) NSNumber *dsid; // ivar: _dsid
@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (nonatomic, getter=isFrozen) BOOL frozen; // ivar: _frozen
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *homeUserIDs; // ivar: _homeUserIDs
@property (copy, nonatomic) NSString *iCloudPersonID; // ivar: _iCloudPersonID
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (retain, nonatomic) ICMusicUserState *music; // ivar: _music
@property (copy, nonatomic) NSString *shortDebugName; // ivar: _shortDebugName
@property (copy, nonatomic) NSString *storefrontIdentifier; // ivar: _storefrontIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) ICTVUserState *tv; // ivar: _tv
@property (copy, nonatomic) NSString *username; // ivar: _username


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithBlock:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
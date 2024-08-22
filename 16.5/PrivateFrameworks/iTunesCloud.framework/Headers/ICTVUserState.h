// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTVUSERSTATE_H
#define ICTVUSERSTATE_H

@class NSString;
@protocol ICMutableTVUserState, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ICTVUserState : NSObject <ICMutableTVUserState, NSSecureCoding, NSCopying>



@property (nonatomic, getter=isActiveWatchKitUser) BOOL activeWatchKitUser; // ivar: _activeWatchKitUser
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFrozen) BOOL frozen; // ivar: _frozen
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithBlock:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
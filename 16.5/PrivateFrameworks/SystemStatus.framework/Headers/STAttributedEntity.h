// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STATTRIBUTEDENTITY_H
#define STATTRIBUTEDENTITY_H

@class NSString, STUserIdentity;
@protocol BSDebugDescriptionProviding, NSSecureCoding, BSDescriptionProviding, NSCopying;

#import <Foundation/Foundation.h>

#import "STExecutableIdentity.h"

@interface STAttributedEntity : NSObject <BSDebugDescriptionProviding, NSSecureCoding, BSDescriptionProviding, NSCopying>



@property (readonly, nonatomic) ? auditToken;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundlePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) STExecutableIdentity *executableIdentity; // ivar: _executableIdentity
@property (readonly, copy, nonatomic) NSString *executablePath;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName
@property (readonly, copy, nonatomic) NSString *localizedExecutableDisplayName; // ivar: _localizedExecutableDisplayName
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSystemService) BOOL systemService; // ivar: _systemService
@property (readonly, copy, nonatomic) STUserIdentity *userIdentity; // ivar: _userIdentity
@property (readonly, copy, nonatomic) NSString *website; // ivar: _website


+(BOOL)supportsSecureCoding;
+(id)genericSystemServicesEntity;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesAttributedEntity:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithAuditToken:(struct ? )arg0 ;
-(id)initWithBundlePath:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExecutableIdentity:(id)arg0 ;
-(id)initWithExecutableIdentity:(id)arg0 systemService:(BOOL)arg1 ;
-(id)initWithExecutableIdentity:(id)arg0 website:(id)arg1 ;
-(id)initWithExecutableIdentity:(id)arg0 website:(id)arg1 systemService:(BOOL)arg2 ;
-(id)initWithExecutableIdentity:(id)arg0 website:(id)arg1 systemService:(BOOL)arg2 localizedDisplayName:(id)arg3 localizedExecutableDisplayName:(id)arg4 ;
-(id)initWithExecutablePath:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
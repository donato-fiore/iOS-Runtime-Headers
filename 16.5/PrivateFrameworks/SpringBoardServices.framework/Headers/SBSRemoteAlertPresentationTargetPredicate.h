// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSREMOTEALERTPRESENTATIONTARGETPREDICATE_H
#define SBSREMOTEALERTPRESENTATIONTARGETPREDICATE_H

@class NSString, LSApplicationIdentity, BSProcessHandle;
@protocol BSDescriptionProviding, BSXPCCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBSRemoteAlertPresentationTargetPredicate : NSObject <BSDescriptionProviding, BSXPCCoding, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LSApplicationIdentity *launchingApplicationIdentity; // ivar: _launchingApplicationIdentity
@property (retain, nonatomic) BSProcessHandle *process; // ivar: _process
@property (copy, nonatomic) NSString *scenePersistentIdentifier; // ivar: _scenePersistentIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)predicateForLaunchingApplicationIdentity:(id)arg0 ;
+(id)predicateForProcess:(id)arg0 ;
-(id)_init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif
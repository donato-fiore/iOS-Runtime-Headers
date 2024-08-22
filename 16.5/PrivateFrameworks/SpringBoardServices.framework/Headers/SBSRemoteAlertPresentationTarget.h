// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSREMOTEALERTPRESENTATIONTARGET_H
#define SBSREMOTEALERTPRESENTATIONTARGET_H

@class NSString, BSProcessHandle;
@protocol BSDescriptionProviding, BSXPCCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SBSRemoteAlertPresentationTargetPredicate.h"

@interface SBSRemoteAlertPresentationTarget : NSObject <BSDescriptionProviding, BSXPCCoding, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL requiresFullscreenPresentation; // ivar: _requiresFullscreenPresentation
@property (copy, nonatomic) NSString *scenePersistentIdentifier;
@property (nonatomic) BOOL shouldDismissInSwitcher; // ivar: _shouldDismissInSwitcher
@property (nonatomic) BOOL shouldDismissOnUILock; // ivar: _shouldDismissOnUILock
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBSRemoteAlertPresentationTargetPredicate *targetPredicate; // ivar: _targetPredicate
@property (readonly, nonatomic) BSProcessHandle *targetProcess;


+(BOOL)supportsSecureCoding;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTargetPredicate:(id)arg0 ;
-(id)initWithTargetProcess:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif
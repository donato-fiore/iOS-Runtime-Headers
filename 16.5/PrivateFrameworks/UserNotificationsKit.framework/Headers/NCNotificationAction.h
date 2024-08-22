// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONACTION_H
#define NCNOTIFICATIONACTION_H

@class NSDictionary, NSString, NSURL;
@protocol BSDescriptionProviding, NSCopying, NSMutableCopying, NCNotificationActionRunner;

#import <Foundation/Foundation.h>


@interface NCNotificationAction : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSObject<NCNotificationActionRunner> *actionRunner; // ivar: _actionRunner
@property (readonly, nonatomic) NSUInteger activationMode; // ivar: _activationMode
@property (readonly, nonatomic) NSUInteger behavior; // ivar: _behavior
@property (readonly, copy, nonatomic) NSDictionary *behaviorParameters; // ivar: _behaviorParameters
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDestructiveAction) BOOL destructiveAction; // ivar: _destructiveAction
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *iconImageBundlePath; // ivar: _iconImageBundlePath
@property (readonly, copy, nonatomic) NSString *iconImageName; // ivar: _iconImageName
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *launchBundleID; // ivar: _launchBundleID
@property (readonly, copy, nonatomic) NSURL *launchURL; // ivar: _launchURL
@property (readonly, nonatomic) BOOL requiresAuthentication; // ivar: _requiresAuthentication
@property (readonly, nonatomic) BOOL shouldDismissNotification; // ivar: _shouldDismissNotification
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSystemAction) BOOL systemAction;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithNotificationAction:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif
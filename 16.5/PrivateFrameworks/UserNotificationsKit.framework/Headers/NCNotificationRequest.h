// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONREQUEST_H
#define NCNOTIFICATIONREQUEST_H

@class NSString, NSDictionary, NSArray, NSSet, NSDate, UNNotification, NSUUID;
@protocol BSDescriptionProviding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "NCNotificationAlertOptions.h"
#import "NCNotificationAction.h"
#import "NCNotificationContent.h"
#import "NCNotificationOptions.h"
#import "NCNotificationSound.h"

@interface NCNotificationRequest : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NCNotificationAlertOptions *alertOptions; // ivar: _alertOptions
@property (readonly, nonatomic) NCNotificationAction *cancelAction; // ivar: _cancelAction
@property (readonly, copy, nonatomic) NSString *categoryIdentifier; // ivar: _categoryIdentifier
@property (readonly, nonatomic) NCNotificationAction *clearAction; // ivar: _clearAction
@property (readonly, nonatomic) NCNotificationAction *closeAction; // ivar: _closeAction
@property (readonly, nonatomic) NSUInteger collapsedNotificationsCount; // ivar: _collapsedNotificationsCount
@property (readonly, nonatomic) NCNotificationContent *content; // ivar: _content
@property (readonly, copy, nonatomic) NSDictionary *context; // ivar: _context
@property (readonly, nonatomic, getter=isCriticalAlert) BOOL criticalAlert; // ivar: _criticalAlert
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NCNotificationAction *defaultAction; // ivar: _defaultAction
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *filterCriteria; // ivar: _filterCriteria
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *highestPrioritySubSectionIdentifier; // ivar: _highestPrioritySubSectionIdentifier
@property (readonly, nonatomic) NCNotificationAction *inlineAction; // ivar: _inlineAction
@property (readonly, copy, nonatomic) NSArray *intentIdentifiers; // ivar: _intentIdentifiers
@property (readonly, nonatomic) NSUInteger interruptionLevel; // ivar: _interruptionLevel
@property (readonly, nonatomic) BOOL isCollapsedNotification; // ivar: _isCollapsedNotification
@property (readonly, copy, nonatomic) NSString *notificationIdentifier; // ivar: _notificationIdentifier
@property (readonly, nonatomic) NCNotificationOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) NSString *parentSectionIdentifier; // ivar: _parentSectionIdentifier
@property (readonly, copy, nonatomic) NSArray *peopleIdentifiers; // ivar: _peopleIdentifiers
@property (readonly, nonatomic) float relevanceScore; // ivar: _relevanceScore
@property (readonly, copy, nonatomic) NSSet *requestDestinations; // ivar: _requestDestinations
@property (readonly, copy, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (readonly, copy, nonatomic) NSSet *settingsSections; // ivar: _settingsSections
@property (readonly, nonatomic) NCNotificationAction *silenceAction; // ivar: _silenceAction
@property (readonly, nonatomic) NCNotificationSound *sound; // ivar: _sound
@property (readonly, copy, nonatomic) NSDictionary *sourceInfo; // ivar: _sourceInfo
@property (readonly, copy, nonatomic) NSSet *subSectionIdentifiers; // ivar: _subSectionIdentifiers
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDictionary *supplementaryActions; // ivar: _supplementaryActions
@property (readonly, copy, nonatomic) NSString *threadIdentifier; // ivar: _threadIdentifier
@property (readonly, nonatomic, getter=isUniqueThreadIdentifier) BOOL threadIdentifierUnique; // ivar: _threadIdentifierUnique
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (readonly, copy, nonatomic) NSString *topLevelSectionIdentifier;
@property (readonly, copy, nonatomic) NSString *uniqueThreadIdentifier;
@property (readonly, nonatomic) UNNotification *userNotification; // ivar: _userNotification
@property (readonly, copy, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)notificationRequest;
+(id)notificationRequestWithActionWithId:(id)arg0 runner:(id)arg1 ;
+(id)notificationRequestWithNotificationId:(id)arg0 ;
+(id)notificationRequestWithNotificationId:(id)arg0 lockScreenPriority:(NSUInteger)arg1 ;
+(id)notificationRequestWithNotificationId:(id)arg0 lockScreenPriority:(NSUInteger)arg1 lockScreenPersistence:(NSUInteger)arg2 ;
+(id)notificationRequestWithNotificationId:(id)arg0 requestDestinations:(id)arg1 ;
+(id)notificationRequestWithNotificationId:(id)arg0 requestDestinations:(id)arg1 alertOptionsSuppression:(NSUInteger)arg2 ;
+(id)notificationRequestWithNotificationId:(id)arg0 requestDestinations:(id)arg1 isCritical:(BOOL)arg2 ;
+(id)notificationRequestWithNotificationId:(id)arg0 requestDestinations:(id)arg1 lockScreenPersistence:(NSUInteger)arg2 ;
+(id)notificationRequestWithNotificationId:(id)arg0 requestDestinations:(id)arg1 lockScreenPersistence:(NSUInteger)arg2 alertOptionsSuppression:(NSUInteger)arg3 ;
+(id)notificationRequestWithNotificationId:(id)arg0 sectionId:(id)arg1 threadId:(id)arg2 ;
+(id)notificationRequestWithNotificationId:(id)arg0 threadId:(id)arg1 ;
+(id)notificationRequestWithNotificationId:(id)arg0 threadId:(id)arg1 timestamp:(id)arg2 ;
+(id)notificationRequestWithNotificationId:(id)arg0 timestamp:(id)arg1 ;
+(id)notificationRequestWithRequestDestination:(id)arg0 ;
+(id)notificationRequestWithRequestDestinations:(id)arg0 ;
+(id)notificationRequestWithSectionId:(id)arg0 ;
+(id)notificationRequestWithSectionId:(id)arg0 notificationId:(id)arg1 ;
+(id)notificationRequestWithSectionId:(id)arg0 notificationId:(id)arg1 requestDestination:(id)arg2 ;
+(id)notificationRequestWithSectionId:(id)arg0 notificationId:(id)arg1 subSectionIds:(id)arg2 requestDestinations:(id)arg3 ;
+(id)notificationRequestWithSectionId:(id)arg0 notificationId:(id)arg1 threadId:(id)arg2 subSectionIds:(id)arg3 title:(id)arg4 message:(id)arg5 timestamp:(id)arg6 destinations:(id)arg7 options:(id)arg8 ;
+(id)notificationRequestWithSectionId:(id)arg0 notificationId:(id)arg1 threadId:(id)arg2 subSectionIds:(id)arg3 title:(id)arg4 message:(id)arg5 timestamp:(id)arg6 destinations:(id)arg7 options:(id)arg8 alertOptions:(id)arg9 uuid:(id)arg10 ;
+(id)notificationRequestWithSectionId:(id)arg0 notificationId:(id)arg1 threadId:(id)arg2 subSectionIds:(id)arg3 title:(id)arg4 message:(id)arg5 timestamp:(id)arg6 destinations:(id)arg7 options:(id)arg8 uuid:(id)arg9 ;
+(id)notificationRequestWithSectionId:(id)arg0 notificationId:(id)arg1 threadId:(id)arg2 timestamp:(id)arg3 ;
+(id)notificationRequestWithSectionId:(id)arg0 notificationId:(id)arg1 threadId:(id)arg2 title:(id)arg3 message:(id)arg4 timestamp:(id)arg5 destination:(id)arg6 ;
+(id)notificationRequestWithSectionId:(id)arg0 notificationId:(id)arg1 threadId:(id)arg2 title:(id)arg3 message:(id)arg4 timestamp:(id)arg5 destination:(id)arg6 uuid:(id)arg7 ;
+(id)notificationRequestWithSectionId:(id)arg0 notificationId:(id)arg1 threadId:(id)arg2 title:(id)arg3 message:(id)arg4 timestamp:(id)arg5 destinations:(id)arg6 ;
+(id)notificationRequestWithSectionId:(id)arg0 notificationId:(id)arg1 timestamp:(id)arg2 ;
+(id)notificationRequestWithSectionId:(id)arg0 subSectionIds:(id)arg1 ;
+(id)notificationRequestWithSectionId:(id)arg0 threadId:(id)arg1 ;
+(id)notificationRequestWithSectionId:(id)arg0 threadId:(id)arg1 notificationId:(id)arg2 requestDestination:(id)arg3 ;
+(id)notificationRequestWithSectionId:(id)arg0 threadId:(id)arg1 notificationId:(id)arg2 requestDestinations:(id)arg3 ;
+(id)notificationRequestWithThreadId:(id)arg0 ;
+(id)notificationRequestWithThreadId:(id)arg0 timestamp:(id)arg1 ;
+(id)notificationRequestWithTimestamp:(id)arg0 ;
-(BOOL)isCollapsibleWithNotificationRequest:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesRequest:(id)arg0 ;
-(BOOL)matchesThreadForRequest:(id)arg0 ;
-(id)_actionsDescriptionForEnvironment:(id)arg0 ;
-(id)_actionsLoggingDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithNotificationRequest:(id)arg0 ;
-(id)loggingDescription;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif
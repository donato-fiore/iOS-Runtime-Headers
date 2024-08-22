// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNSNOTIFICATIONRECORD_H
#define UNSNOTIFICATIONRECORD_H

@class NSString, NSArray, NSNumber, NSURL, NSDate, NSSet, NSDateComponents, CLRegion, NSTimeZone, NSDictionary;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "UNSContactRecord.h"

@interface UNSNotificationRecord : NSObject <BSDescriptionProviding>



@property (copy, nonatomic) NSString *accessoryImageName; // ivar: _accessoryImageName
@property (nonatomic) BOOL allowsAlertDestination; // ivar: _allowsAlertDestination
@property (nonatomic) BOOL allowsCarPlayDestination; // ivar: _allowsCarPlayDestination
@property (nonatomic) BOOL allowsDefaultDestinations; // ivar: _allowsDefaultDestinations
@property (nonatomic) BOOL allowsLockScreenDestination; // ivar: _allowsLockScreenDestination
@property (nonatomic) BOOL allowsNotificationCenterDestination; // ivar: _allowsNotificationCenterDestination
@property (copy, nonatomic) NSArray *attachments; // ivar: _attachments
@property (copy, nonatomic) NSString *audioCategory; // ivar: _audioCategory
@property (copy, nonatomic) NSNumber *audioVolume; // ivar: _audioVolume
@property (copy, nonatomic) NSNumber *badge; // ivar: _badge
@property (copy, nonatomic) NSString *body; // ivar: _body
@property (copy, nonatomic) NSArray *bodyLocalizationArguments; // ivar: _bodyLocalizationArguments
@property (copy, nonatomic) NSString *bodyLocalizationKey; // ivar: _bodyLocalizationKey
@property (copy, nonatomic) NSString *categoryIdentifier; // ivar: _categoryIdentifier
@property (copy, nonatomic) NSString *communicationContextAssociatedObjectUri; // ivar: _communicationContextAssociatedObjectUri
@property (copy, nonatomic) NSString *communicationContextBundleIdentifier; // ivar: _communicationContextBundleIdentifier
@property (nonatomic) NSInteger communicationContextCapabilities; // ivar: _communicationContextCapabilities
@property (copy, nonatomic) NSURL *communicationContextContentURL; // ivar: _communicationContextContentURL
@property (copy, nonatomic) NSString *communicationContextDisplayName; // ivar: _communicationContextDisplayName
@property (copy, nonatomic) NSString *communicationContextIdentifier; // ivar: _communicationContextIdentifier
@property (copy, nonatomic) NSString *communicationContextImageName; // ivar: _communicationContextImageName
@property (nonatomic) BOOL communicationContextMentionsCurrentUser; // ivar: _communicationContextMentionsCurrentUser
@property (nonatomic) BOOL communicationContextNotifyRecipientAnyway; // ivar: _communicationContextNotifyRecipientAnyway
@property (nonatomic) NSUInteger communicationContextRecipientCount; // ivar: _communicationContextRecipientCount
@property (copy, nonatomic) NSArray *communicationContextRecipients; // ivar: _communicationContextRecipients
@property (nonatomic) BOOL communicationContextReplyToCurrentUser; // ivar: _communicationContextReplyToCurrentUser
@property (copy, nonatomic) UNSContactRecord *communicationContextSender; // ivar: _communicationContextSender
@property (nonatomic) BOOL communicationContextSystemImage; // ivar: _communicationContextSystemImage
@property (copy, nonatomic) NSNumber *contentAvailable; // ivar: _contentAvailable
@property (copy, nonatomic) NSDate *contentDate; // ivar: _contentDate
@property (copy, nonatomic) NSString *contentType; // ivar: _contentType
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultActionBundleIdentifier; // ivar: _defaultActionBundleIdentifier
@property (copy, nonatomic) NSString *defaultActionTitle; // ivar: _defaultActionTitle
@property (copy, nonatomic) NSString *defaultActionTitleLocalizationKey; // ivar: _defaultActionTitleLocalizationKey
@property (copy, nonatomic) NSURL *defaultActionURL; // ivar: _defaultActionURL
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (copy, nonatomic) NSString *filterCriteria; // ivar: _filterCriteria
@property (copy, nonatomic) NSString *footer; // ivar: _footer
@property (copy, nonatomic) NSArray *footerLocalizationArguments; // ivar: _footerLocalizationArguments
@property (copy, nonatomic) NSString *footerLocalizationKey; // ivar: _footerLocalizationKey
@property (readonly, nonatomic) BOOL hasAlertContent;
@property (readonly, nonatomic) BOOL hasBadge;
@property (nonatomic) BOOL hasCriticalAlertSound; // ivar: _hasCriticalAlertSound
@property (nonatomic) BOOL hasDefaultAction; // ivar: _hasDefaultAction
@property (readonly, nonatomic) BOOL hasPendingTrigger;
@property (readonly, nonatomic) BOOL hasSound;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *header; // ivar: _header
@property (copy, nonatomic) NSArray *headerLocalizationArguments; // ivar: _headerLocalizationArguments
@property (copy, nonatomic) NSString *headerLocalizationKey; // ivar: _headerLocalizationKey
@property (copy, nonatomic) NSString *iconApplicationIdentifier; // ivar: _iconApplicationIdentifier
@property (copy, nonatomic) NSString *iconName; // ivar: _iconName
@property (copy, nonatomic) NSString *iconPath; // ivar: _iconPath
@property (copy, nonatomic) NSString *iconSystemImageName; // ivar: _iconSystemImageName
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger interruptionLevel; // ivar: _interruptionLevel
@property (copy, nonatomic) NSString *launchImageName; // ivar: _launchImageName
@property (copy, nonatomic) NSNumber *mutableContent; // ivar: _mutableContent
@property (nonatomic) NSUInteger presentationOptions; // ivar: _presentationOptions
@property (nonatomic) NSUInteger realertCount; // ivar: _realertCount
@property (nonatomic) CGFloat relevanceScore; // ivar: _relevanceScore
@property (copy, nonatomic) NSDate *requestDate; // ivar: _requestDate
@property (nonatomic) BOOL shouldAuthenticateDefaultAction; // ivar: _shouldAuthenticateDefaultAction
@property (nonatomic) BOOL shouldBackgroundDefaultAction; // ivar: _shouldBackgroundDefaultAction
@property (nonatomic) BOOL shouldBadgeApplicationIcon; // ivar: _shouldBadgeApplicationIcon
@property (nonatomic) BOOL shouldDisplayActionsInline; // ivar: _shouldDisplayActionsInline
@property (nonatomic) BOOL shouldHideDate; // ivar: _shouldHideDate
@property (nonatomic) BOOL shouldHideTime; // ivar: _shouldHideTime
@property (nonatomic) BOOL shouldIgnoreAccessibilityDisabledVibrationSetting; // ivar: _shouldIgnoreAccessibilityDisabledVibrationSetting
@property (nonatomic) BOOL shouldIgnoreDoNotDisturb; // ivar: _shouldIgnoreDoNotDisturb
@property (nonatomic) BOOL shouldIgnoreDowntime; // ivar: _shouldIgnoreDowntime
@property (nonatomic) BOOL shouldIgnoreRingerSwitch; // ivar: _shouldIgnoreRingerSwitch
@property (nonatomic) BOOL shouldPlaySound; // ivar: _shouldPlaySound
@property (nonatomic) BOOL shouldPreemptPresentedNotification; // ivar: _shouldPreemptPresentedNotification
@property (nonatomic) BOOL shouldPresentAlert; // ivar: _shouldPresentAlert
@property (nonatomic) BOOL shouldPreventNotificationDismissalAfterDefaultAction; // ivar: _shouldPreventNotificationDismissalAfterDefaultAction
@property (nonatomic) BOOL shouldShowSubordinateIcon; // ivar: _shouldShowSubordinateIcon
@property (nonatomic) BOOL shouldSoundRepeat; // ivar: _shouldSoundRepeat
@property (nonatomic) BOOL shouldSuppressScreenLightUp; // ivar: _shouldSuppressScreenLightUp
@property (nonatomic) BOOL shouldSuppressSyncDismissalWhenRemoved; // ivar: _shouldSuppressSyncDismissalWhenRemoved
@property (nonatomic) BOOL shouldUseRequestIdentifierForDismissalSync; // ivar: _shouldUseRequestIdentifierForDismissalSync
@property (nonatomic) CGFloat soundMaximumDuration; // ivar: _soundMaximumDuration
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSArray *subtitleLocalizationArguments; // ivar: _subtitleLocalizationArguments
@property (copy, nonatomic) NSString *subtitleLocalizationKey; // ivar: _subtitleLocalizationKey
@property (copy, nonatomic) NSString *summaryArgument; // ivar: _summaryArgument
@property (nonatomic) NSUInteger summaryArgumentCount; // ivar: _summaryArgumentCount
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *targetContentIdentifier; // ivar: _targetContentIdentifier
@property (copy, nonatomic) NSString *threadIdentifier; // ivar: _threadIdentifier
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSArray *titleLocalizationArguments; // ivar: _titleLocalizationArguments
@property (copy, nonatomic) NSString *titleLocalizationKey; // ivar: _titleLocalizationKey
@property (copy, nonatomic) NSString *toneAlertTopic; // ivar: _toneAlertTopic
@property (nonatomic) NSInteger toneAlertType; // ivar: _toneAlertType
@property (copy, nonatomic) NSString *toneFileName; // ivar: _toneFileName
@property (copy, nonatomic) NSURL *toneFileURL; // ivar: _toneFileURL
@property (copy, nonatomic) NSString *toneIdentifier; // ivar: _toneIdentifier
@property (nonatomic) NSUInteger toneMediaLibraryItemIdentifier; // ivar: _toneMediaLibraryItemIdentifier
@property (copy, nonatomic) NSSet *topicIdentifiers; // ivar: _topicIdentifiers
@property (copy, nonatomic) NSDate *triggerDate; // ivar: _triggerDate
@property (copy, nonatomic) NSDateComponents *triggerDateComponents; // ivar: _triggerDateComponents
@property (copy, nonatomic) CLRegion *triggerRegion; // ivar: _triggerRegion
@property (copy, nonatomic) NSString *triggerRepeatCalendarIdentifier; // ivar: _triggerRepeatCalendarIdentifier
@property (nonatomic) NSUInteger triggerRepeatInterval; // ivar: _triggerRepeatInterval
@property (nonatomic) BOOL triggerRepeats; // ivar: _triggerRepeats
@property (nonatomic) CGFloat triggerTimeInterval; // ivar: _triggerTimeInterval
@property (copy, nonatomic) NSTimeZone *triggerTimeZone; // ivar: _triggerTimeZone
@property (copy, nonatomic) NSString *triggerType; // ivar: _triggerType
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (copy, nonatomic) NSString *vibrationIdentifier; // ivar: _vibrationIdentifier
@property (copy, nonatomic) NSURL *vibrationPatternFileURL; // ivar: _vibrationPatternFileURL


-(BOOL)hasCommunicationContext;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSimilar:(id)arg0 ;
-(BOOL)willNotifyUser;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationWithTruncation:(BOOL)arg0 ;
-(id)init;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif
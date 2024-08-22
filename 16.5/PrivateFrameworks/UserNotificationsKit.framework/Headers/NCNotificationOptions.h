// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONOPTIONS_H
#define NCNOTIFICATIONOPTIONS_H

@class NSSet, NSString;
@protocol BSDescriptionProviding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface NCNotificationOptions : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>



@property (readonly, nonatomic) BOOL addToLockScreenWhenUnlocked; // ivar: _addToLockScreenWhenLocked
@property (readonly, copy, nonatomic) NSSet *alertSuppressionContexts; // ivar: _alertSuppressionContexts
@property (readonly, nonatomic) BOOL alertsWhenLocked; // ivar: _alertsWhenLocked
@property (readonly, nonatomic) BOOL allowActionsForCarPlay; // ivar: _allowActionsForCarPlay
@property (readonly, copy, nonatomic) NSString *alternateActionLabel; // ivar: _alternateActionLabel
@property (readonly, nonatomic) BOOL canPlaySound; // ivar: _canPlaySound
@property (readonly, nonatomic) BOOL canTurnOnDisplay; // ivar: _canTurnOnDisplay
@property (readonly, nonatomic) BOOL coalescesWhenLocked; // ivar: _coalescesWhenLocked
@property (readonly, nonatomic) NSUInteger contentPreviewSetting; // ivar: _contentPreviewSetting
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dismissAutomatically; // ivar: _dismissAutomatically
@property (readonly, nonatomic) BOOL dismissAutomaticallyForCarPlay; // ivar: _dismissAutomaticallyForCarPlay
@property (readonly, nonatomic) BOOL displaysActionsInline; // ivar: _displaysActionsInline
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hideClearActionInList; // ivar: _hideClearActionInList
@property (readonly, nonatomic) BOOL hideCloseActionForCarPlay; // ivar: _hideCloseActionForCarPlay
@property (readonly, nonatomic) BOOL lauchUsingSiriForCarPlayDefaultAction; // ivar: _lauchUsingSiriForCarPlayDefaultAction
@property (readonly, nonatomic) NSUInteger lockScreenPersistence; // ivar: _lockScreenPersistence
@property (readonly, nonatomic) NSUInteger lockScreenPriority; // ivar: _lockScreenPriority
@property (readonly, nonatomic, getter=isNumberOfLinesInfinite) BOOL numberOfLinesInfinite; // ivar: _numberOfLinesInfinite
@property (readonly, nonatomic) BOOL overridesDowntime; // ivar: _overridesDowntime
@property (readonly, nonatomic) BOOL overridesPocketMode; // ivar: _overridesPocketMode
@property (readonly, nonatomic) BOOL overridesQuietMode; // ivar: _overridesQuietMode
@property (readonly, nonatomic) BOOL playMediaWhenRaised; // ivar: _playMediaWhenRaised
@property (readonly, nonatomic) BOOL preemptsPresentedNotification; // ivar: _preemptsPresentedNotification
@property (readonly, nonatomic) BOOL preventsAutomaticLock; // ivar: _preventsAutomaticLock
@property (readonly, nonatomic) NSUInteger realertCount; // ivar: _realertCount
@property (readonly, nonatomic) BOOL requestsFullScreenPresentation; // ivar: _requestsFullScreenPresentation
@property (readonly, nonatomic) BOOL revealsAdditionalContentIfNoDefaultAction; // ivar: _revealsAdditionalContentIfNoDefaultAction
@property (readonly, nonatomic) BOOL revealsAdditionalContentOnPresentation; // ivar: _revealsAdditionalContentOnPresentation
@property (readonly, nonatomic) BOOL shouldAnnounceForCarPlay; // ivar: _shouldAnnounceForCarPlay
@property (readonly, nonatomic) BOOL silencedByMenuButtonPress; // ivar: _silencedByMenuButtonPress
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suppressesAlertsWhenAppIsActive; // ivar: _suppressesAlertsWhenAppIsActive
@property (readonly, nonatomic) BOOL suppressesBodyWhenLocked; // ivar: _suppressesBodyWhenLocked
@property (readonly, nonatomic) BOOL suppressesSubtitleWhenLocked; // ivar: _suppressesSubtitleWhenLocked
@property (readonly, nonatomic) BOOL suppressesTitleWhenLocked; // ivar: _suppressesTitleWhenLocked


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithNotificationOptions:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif
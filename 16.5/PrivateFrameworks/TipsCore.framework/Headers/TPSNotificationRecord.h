// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSNOTIFICATIONRECORD_H
#define TPSNOTIFICATIONRECORD_H

@class NSSet, NSString;
@protocol MLFeatureProvider;


#import "TPSRecord.h"
#import "TPSTimeframeRecordUtilities.h"

@interface TPSNotificationRecord : TPSRecord <MLFeatureProvider>



@property (readonly, nonatomic) NSInteger classification; // ivar: _classification
@property (readonly, nonatomic) BOOL collectionWithNotificationTextIsAvailable;
@property (readonly, nonatomic) BOOL contentAvailableInUsersPreferredLanguage;
@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly, nonatomic) BOOL hasNetworkConnection;
@property (readonly, nonatomic) BOOL highPriorityContentThatOverridesSoftOptOutIsAvailable;
@property (readonly, nonatomic) BOOL instructionalContentIsAvailableForNewPairedHardware;
@property (nonatomic) NSInteger internalCollectionWithNotificationTextIsAvailable; // ivar: _internalCollectionWithNotificationTextIsAvailable
@property (nonatomic) NSInteger internalContentAvailableInUsersPreferredLanguage; // ivar: _internalContentAvailableInUsersPreferredLanguage
@property (nonatomic) NSInteger internalHasNetworkConnection; // ivar: _internalHasNetworkConnection
@property (nonatomic) NSInteger internalHighPriorityContentThatOverridesSoftOptOutIsAvailable; // ivar: _internalHighPriorityContentThatOverridesSoftOptOutIsAvailable
@property (nonatomic) NSInteger internalInstructionalContentIsAvailableForNewPairedHardware; // ivar: _internalInstructionalContentIsAvailableForNewPairedHardware
@property (nonatomic) NSInteger internalLockscreenEmpty; // ivar: _internalLockscreenEmpty
@property (nonatomic) NSInteger internalPreviousNotificationSentMoreThan24HoursAgo; // ivar: _internalPreviousNotificationSentMoreThan24HoursAgo
@property (nonatomic) NSInteger internalPreviousNotificationSentMoreThanOneMonthAgo; // ivar: _internalPreviousNotificationSentMoreThanOneMonthAgo
@property (nonatomic) NSInteger internalPreviousNotificationSentMoreThanOneWeekAgo; // ivar: _internalPreviousNotificationSentMoreThanOneWeekAgo
@property (nonatomic) NSInteger internalShouldNotify; // ivar: _internalShouldNotify
@property (nonatomic) NSInteger internalUnviewedTipsAvailable; // ivar: _internalUnviewedTipsAvailable
@property (nonatomic) NSInteger internalUserHasAlreadySeenNotificationForCollectionWithNotificationText; // ivar: _internalUserHasAlreadySeenNotificationForCollectionWithNotificationText
@property (nonatomic) NSInteger internalUserHasAlreadySeenWelcomeTipMatchingHardware; // ivar: _internalUserHasAlreadySeenWelcomeTipMatchingHardware
@property (nonatomic) NSInteger internalUserHasAlreadySeenWelcomeTipMatchingSoftware; // ivar: _internalUserHasAlreadySeenWelcomeTipMatchingSoftware
@property (nonatomic) NSInteger internalUserHasAlreadyViewedContentForThisPairedHardware; // ivar: _internalUserHasAlreadyViewedContentForThisPairedHardware
@property (nonatomic) NSInteger internalUserHasLaunchedTipsApp; // ivar: _internalUserHasLaunchedTipsApp
@property (nonatomic) NSInteger internalUserHasLaunchedTipsAppWithinLastMonth; // ivar: _internalUserHasLaunchedTipsAppWithinLastMonth
@property (nonatomic) NSInteger internalUserHasLaunchedTipsAppWithinLastWeek; // ivar: _internalUserHasLaunchedTipsAppWithinLastWeek
@property (nonatomic) NSInteger internalUserHasPairedNewHardware; // ivar: _internalUserHasPairedNewHardware
@property (nonatomic) NSInteger internalUserHasRespondedToAtLeast1ofPast3Notifications; // ivar: _internalUserHasRespondedToAtLeast1ofPast3Notifications
@property (nonatomic) NSInteger internalUserIsNewToThisHardware; // ivar: _internalUserIsNewToThisHardware
@property (nonatomic) NSInteger internalUserIsNewToThisSoftware; // ivar: _internalUserIsNewToThisSoftware
@property (nonatomic) NSInteger internalWelcomeTipAvailableMatchingSoftware; // ivar: _internalWelcomeTipAvailableMatchingSoftware
@property (nonatomic) NSInteger internalWelcomeTipAvailableMatchingUsersHardware; // ivar: _internalWelcomeTipAvailableMatchingUsersHardware
@property (readonly, nonatomic) BOOL lockscreenLikelyEmpty;
@property (readonly, copy, nonatomic) NSString *origin; // ivar: _origin
@property (readonly, nonatomic) BOOL previousNotificationSentMoreThan24HoursAgo;
@property (readonly, nonatomic) BOOL previousNotificationSentMoreThanOneMonthAgo;
@property (readonly, nonatomic) BOOL previousNotificationSentMoreThanOneWeekAgo;
@property (readonly, nonatomic) BOOL shouldNotify;
@property (retain, nonatomic) TPSTimeframeRecordUtilities *timeframe; // ivar: _timeframe
@property (readonly, nonatomic) BOOL unviewedTipsAvailable;
@property (readonly, nonatomic) BOOL userHasAlreadySeenNotificationForCollectionWithNotificationText;
@property (readonly, nonatomic) BOOL userHasAlreadySeenWelcomeTipMatchingHardware;
@property (readonly, nonatomic) BOOL userHasAlreadySeenWelcomeTipMatchingSoftware;
@property (readonly, nonatomic) BOOL userHasAlreadyViewedContentForThisPairedHardware;
@property (readonly, nonatomic) BOOL userHasLaunchedTipsApp;
@property (readonly, nonatomic) BOOL userHasLaunchedTipsAppWithinLastMonth;
@property (readonly, nonatomic) BOOL userHasLaunchedTipsAppWithinLastWeek;
@property (readonly, nonatomic) BOOL userHasPairedNewHardware;
@property (readonly, nonatomic) BOOL userHasRespondedToAtLeast1ofPast3Notifications;
@property (readonly, nonatomic) BOOL userIsNewToThisHardware;
@property (readonly, nonatomic) BOOL userIsNewToThisSoftware;
@property (readonly, nonatomic) BOOL welcomeTipAvailableMatchingSoftware;
@property (readonly, nonatomic) BOOL welcomeTipAvailableMatchingUsersHardware;


+(BOOL)shouldLogNegativeSample;
+(BOOL)supportsSecureCoding;
+(id)keyOrder;
+(id)lastPairedHardwareDate;
+(id)recordWithOrigin:(id)arg0 ;
+(id)recordWithOrigin:(id)arg0 andClassification:(NSInteger)arg1 ;
+(void)pairedHardware:(id)arg0 paired:(BOOL)arg1 ;
+(void)persistRecordWithOrigin:(id)arg0 andClassification:(NSInteger)arg1 ;
-(BOOL)boolFromUncertainBool:(NSInteger)arg0 ;
-(BOOL)checkInternalValue:(*NSInteger)arg0 otherwiseUse:(BOOL)arg1 ;
-(BOOL)date:(id)arg0 isWithinTheLast:(CGFloat)arg1 ;
-(NSInteger)uncertainBoolFromBool:(BOOL)arg0 ;
-(id)dataDictionary;
-(id)description;
-(id)featureValueForName:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOrigin:(id)arg0 ;
-(id)initWithOrigin:(id)arg0 andClassification:(NSInteger)arg1 ;
-(id)recordData;
-(id)recordDescription;
-(id)recordInfo;
-(id)task;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
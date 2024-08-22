// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPKCONTENTCONTROLLER_H
#define TPKCONTENTCONTROLLER_H

@class NSDate, NSString, NSHashTable, TPSMiniTipContentManager;
@protocol TPKContentViewDelegate, TPKEligibleContentsMonitoringControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TPKContent.h"
#import "TPKContentPopoverViewController.h"
#import "TPKEligibleContentsMonitoringController.h"

@interface TPKContentController : NSObject <TPKContentViewDelegate, TPKEligibleContentsMonitoringControllerDelegate>

 {
    BOOL _registeredApplicationStateNotification;
    NSDate *_nextAllowedCheckDate;
    NSDate *_lastContentValidateDate;
}


@property (retain, nonatomic, getter=_contentText, setter=_setContentText:) NSString *_contentText;
@property (retain, nonatomic, getter=_contentTitle, setter=_setContentTitle:) NSString *_contentTitle;
@property (readonly, nonatomic) BOOL allowsOverrides;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *checkQueue; // ivar: _checkQueue
@property (copy, nonatomic) TPKContent *content;
@property (nonatomic) BOOL contentCheckInProgress; // ivar: _contentCheckInProgress
@property (nonatomic) BOOL contentDidDisplayDelayInProgress; // ivar: _contentDidDisplayDelayInProgress
@property (readonly, nonatomic) BOOL contentDismissedByUser; // ivar: _contentDismissedByUser
@property (retain, nonatomic) NSString *context; // ivar: _context
@property (retain, nonatomic) TPKContentPopoverViewController *currentPopOverController; // ivar: _currentPopOverController
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSHashTable *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didEnterBackground; // ivar: _didEnterBackground
@property (nonatomic) NSInteger dismissalReason; // ivar: _dismissalReason
@property (nonatomic) BOOL displayTestContent; // ivar: _displayTestContent
@property (retain, nonatomic) TPKEligibleContentsMonitoringController *eligibleContentsMonitoringController;
@property (retain, nonatomic) TPKEligibleContentsMonitoringController *eligibleContentsMonitoringController; // ivar: _eligibleContentsMonitoringController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *lastRestartDisplayTrackingIdentifier; // ivar: _lastRestartDisplayTrackingIdentifier
@property (retain, nonatomic) TPSMiniTipContentManager *miniTipContentManager; // ivar: _miniTipContentManager
@property (nonatomic) NSInteger state;
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *testContentText;
@property (retain, nonatomic) NSString *testContentText; // ivar: _testContentText
@property (retain, nonatomic) NSString *testContentTitle;
@property (retain, nonatomic) NSString *testContentTitle; // ivar: _testContentTitle


+(BOOL)_setNotifyForDisplayForController:(id)arg0 ;
+(id)notifiedContentController;
+(void)_resetNotifyForDisplayForController:(id)arg0 ;
+(void)setNotifiedContentController:(id)arg0 ;
-(BOOL)_isEligibleImmediateContentAvailableError:(id)arg0 ;
-(BOOL)prepareTipContent:(id)arg0 bundleID:(id)arg1 ;
-(id)_createContentViewWithContent:(id)arg0 asPopover:(BOOL)arg1 ;
-(id)contentView:(id)arg0 iconForCustomizationID:(NSInteger)arg1 ;
-(id)contentView:(id)arg0 personalizedStringForID:(NSInteger)arg1 ;
-(id)createContentViewControllerWithContent:(id)arg0 sourceViewController:(id)arg1 ;
-(id)createContentViewWithContent:(id)arg0 ;
-(id)createContentViewWithContent:(id)arg0 annotatedView:(id)arg1 ;
-(id)eligibleContentsMonitoringController:(id)arg0 clientContextMapForKeys:(id)arg1 ;
-(id)initWithContext:(id)arg0 ;
-(void)_contentDidDismiss:(id)arg0 ;
-(void)_contentDidDisplay:(id)arg0 ;
-(void)_evaluateClientContextMap:(id)arg0 forKeys:(id)arg1 ;
-(void)_isContentValid:(id)arg0 synchronous:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_notifyDelegate:(id)arg0 contentDidBecomeAvailable:(id)arg1 animated:(BOOL)arg2 ;
-(void)_notifyDelegate:(id)arg0 didFinishWithContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)addDelegate:(id)arg0 ;
-(void)addDelegate:(id)arg0 content:(id)arg1 ;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)cancelContentDisplayDelay;
-(void)checkCurrentEligibility;
-(void)checkForContent;
-(void)contentView:(id)arg0 actionTapped:(id)arg1 ;
-(void)contentView:(id)arg0 needsLayoutForReason:(NSInteger)arg1 ;
-(void)contentView:(id)arg0 viewTappedForIdentifier:(id)arg1 ;
-(void)contentViewCloseButtonTapped:(id)arg0 ;
-(void)contentViewWasCreated:(id)arg0 ;
-(void)contentViewWillBeRemoved:(id)arg0 ;
-(void)contentViewWillBeShown:(id)arg0 ;
-(void)dealloc;
-(void)dismissContent:(id)arg0 reason:(NSInteger)arg1 ;
-(void)displayContent:(id)arg0 synchronous:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)eligibleContentsMonitoringController:(id)arg0 restartTrackingForContents:(id)arg1 ;
-(void)eligibleContentsMonitoringController:(id)arg0 shouldDismissContent:(id)arg1 reason:(NSInteger)arg2 ;
-(void)eligibleContentsMonitoringController:(id)arg0 shouldDisplayContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)invalidateClientContextIfNeeded;
-(void)notifyContentForDisplay:(id)arg0 immediateContent:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)notifyDelegate:(id)arg0 contentDidBecomeAvailable:(id)arg1 animated:(BOOL)arg2 ;
-(void)notifyDelegate:(id)arg0 didFinishWithContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)notifyEventOccurred:(NSInteger)arg0 content:(id)arg1 context:(id)arg2 ;
-(void)registerApplicationStateNotification;
-(void)registerCustomContentView:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)removeDelegate:(id)arg0 content:(id)arg1 ;
-(void)scheduleContentDisplayDelay;
-(void)showTestContent;
-(void)unregisterApplicationStateNotification;


@end


#endif
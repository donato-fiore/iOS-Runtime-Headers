// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONOPTIONSMENU_H
#define NCNOTIFICATIONOPTIONSMENU_H

@class NSString, UIContextMenuInteraction, UIView, NCNotificationRequest;
@protocol UIContextMenuInteractionDelegate, NCNotificationOptionsMenuSettingsDelegate;

#import <Foundation/Foundation.h>


@interface NCNotificationOptionsMenu : NSObject <UIContextMenuInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIContextMenuInteraction *menu; // ivar: _menu
@property (nonatomic, getter=areOptionsForSection) BOOL optionsForSection; // ivar: _optionsForSection
@property (retain, nonatomic) UIView *presentingView; // ivar: _presentingView
@property (retain, nonatomic) NCNotificationRequest *request; // ivar: _request
@property (retain, nonatomic) NSObject<NCNotificationOptionsMenuSettingsDelegate> *settingsDelegate; // ivar: _settingsDelegate
@property (readonly) Class superclass;


-(BOOL)_canAddToContacts;
-(BOOL)_didApplicationBreakthroughMode:(id)arg0 ;
-(BOOL)_didBreakthroughMode:(id)arg0 ;
-(BOOL)_didContactBreakthroughMode:(id)arg0 ;
-(BOOL)_isApplicationAllowedForMode:(id)arg0 ;
-(BOOL)_isCommunicationThread;
-(BOOL)_isContactAllowedForMode:(id)arg0 ;
-(id)_addToContactsAction;
-(id)_clearSectionAction;
-(id)_criticalOffAction;
-(id)_criticalOnAction;
-(id)_customSettingsActionForSectionSettings:(id)arg0 ;
-(id)_deliverImmediatelyAcion;
-(id)_muteForOneHourAction;
-(id)_muteForTodayAction;
-(id)_offActionForApplicationForMode:(id)arg0 ;
-(id)_offActionForContactForMode:(id)arg0 ;
-(id)_offActionWithSectionDisplayName:(id)arg0 ;
-(id)_onActionWithSectionDisplayName:(id)arg0 ;
-(id)_sectionIdentifier;
-(id)_sendToDigestAction;
-(id)_sender;
-(id)_settingsActionForSectionSettings:(id)arg0 ;
-(id)_threadIdentifierOrNil;
-(id)_threadName;
-(id)_timeSensitiveOffAction;
-(id)_timeSensitiveOnAction;
-(id)_unmuteActionForMuteAssertionLevel:(NSUInteger)arg0 ;
-(id)contextMenuInteraction:(id)arg0 configuration:(id)arg1 highlightPreviewForItemWithIdentifier:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithNotificationRequest:(id)arg0 presentingView:(id)arg1 settingsDelegate:(id)arg2 optionsForSection:(BOOL)arg3 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)dismissMenu;
-(void)presentMenu;


@end


#endif
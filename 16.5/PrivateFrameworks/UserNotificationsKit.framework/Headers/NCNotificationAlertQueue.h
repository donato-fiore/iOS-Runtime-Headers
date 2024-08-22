// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONALERTQUEUE_H
#define NCNOTIFICATIONALERTQUEUE_H

@class NSString, BSServiceConnectionEndpoint;
@protocol NCNotificationAlertDestinationDelegate, NCNotificationAlertDestination;

#import <Foundation/Foundation.h>

#import "NCNotificationRequest.h"
#import "NCNotificationDestinationsRegistry.h"
#import "NCNotificationCollapsingQueue.h"

@interface NCNotificationAlertQueue : NSObject <NCNotificationAlertDestinationDelegate, NCNotificationAlertDestination>



@property (readonly, nonatomic, getter=isAlertDestination) BOOL alertDestination;
@property (retain, nonatomic) NCNotificationRequest *coalescingRequest; // ivar: _coalescingRequest
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationAlertDestinationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NCNotificationDestinationsRegistry *destinationsRegistry; // ivar: _destinationsRegistry
@property (readonly, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NCNotificationCollapsingQueue *queue; // ivar: _queue
@property (readonly) Class superclass;


-(BOOL)_destinations:(id)arg0 canReceiveNotificationRequest:(id)arg1 ;
-(BOOL)_performDestinationOperationForRequest:(id)arg0 block:(id)arg1 ;
-(BOOL)_postNotificationRequest:(id)arg0 ;
-(BOOL)_readyToReceiveForNotificationRequest:(id)arg0 ;
-(BOOL)canReceiveNotificationRequest:(id)arg0 ;
-(BOOL)isRegisteredDestination:(id)arg0 ;
-(id)destinationsForRequestDestinations:(id)arg0 ;
-(id)init;
-(id)notificationSectionSettingsForDestination:(id)arg0 ;
-(id)notificationSectionSettingsForDestination:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(id)notificationSystemSettingsForDestination:(id)arg0 ;
-(void)_postEnqueuedNotificationRequestsCoalescingWith:(id)arg0 ;
-(void)_postNextNotificationRequest;
-(void)_postNextNotificationRequestPassingTest:(id)arg0 ;
-(void)_prepareDestinationsToReceiveCriticalNotificationRequest:(id)arg0 ;
-(void)destination:(id)arg0 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)arg1 ;
-(void)destination:(id)arg0 didBecomeReadyToReceiveNotificationsPassingTest:(id)arg1 ;
-(void)destination:(id)arg0 didDismissNotificationRequest:(id)arg1 ;
-(void)destination:(id)arg0 didPresentNotificationRequest:(id)arg1 ;
-(void)destination:(id)arg0 executeAction:(id)arg1 forNotificationRequest:(id)arg2 requestAuthentication:(BOOL)arg3 withParameters:(id)arg4 completion:(id)arg5 ;
-(void)destination:(id)arg0 requestPermissionToExecuteAction:(id)arg1 forNotificationRequest:(id)arg2 withParameters:(id)arg3 completion:(id)arg4 ;
-(void)destination:(id)arg0 requestsClearingNotificationRequests:(id)arg1 ;
-(void)destination:(id)arg0 requestsClearingNotificationRequests:(id)arg1 fromDestinations:(id)arg2 ;
-(void)destination:(id)arg0 requestsClearingNotificationRequestsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3 ;
-(void)destination:(id)arg0 requestsClearingNotificationRequestsInSections:(id)arg1 ;
-(void)destination:(id)arg0 setAllowsCriticalAlerts:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg0 setAllowsDirectMessages:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg0 setAllowsNotifications:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg0 setAllowsTimeSensitive:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg0 setDeliverQuietly:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg0 setMuted:(BOOL)arg1 untilDate:(id)arg2 forSectionIdentifier:(id)arg3 threadIdentifier:(id)arg4 ;
-(void)destination:(id)arg0 setNotificationSystemSettings:(id)arg1 ;
-(void)destination:(id)arg0 setScheduledDelivery:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg0 setSystemScheduledDeliveryEnabled:(BOOL)arg1 scheduledDeliveryTimes:(id)arg2 ;
-(void)destination:(id)arg0 willDismissNotificationRequest:(id)arg1 ;
-(void)destination:(id)arg0 willPresentNotificationRequest:(id)arg1 ;
-(void)destination:(id)arg0 willPresentNotificationRequest:(id)arg1 suppressAlerts:(BOOL)arg2 ;
-(void)destinationDidBecomeReadyToReceiveNotifications:(id)arg0 ;
-(void)modifyNotificationRequest:(id)arg0 ;
-(void)postNotificationRequest:(id)arg0 ;
-(void)registerDestination:(id)arg0 ;
-(void)setDestination:(id)arg0 enabled:(BOOL)arg1 ;
-(void)setDestination:(id)arg0 ready:(BOOL)arg1 ;
-(void)unregisterDestination:(id)arg0 ;
-(void)updateNotificationSectionSettings:(id)arg0 previousSectionSettings:(id)arg1 ;
-(void)withdrawNotificationRequest:(id)arg0 ;


@end


#endif
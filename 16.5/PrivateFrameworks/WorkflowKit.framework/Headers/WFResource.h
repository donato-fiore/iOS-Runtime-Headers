// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFRESOURCE_H
#define WFRESOURCE_H

@class NSError, NSString, NSDictionary;
@protocol WFApplicationStateObserver, WFErrorRecoveryAttempting, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFResource : NSObject <WFApplicationStateObserver, WFErrorRecoveryAttempting>



@property (readonly, nonatomic) NSError *availabilityError; // ivar: _availabilityError
@property (readonly, nonatomic, getter=isAvailable) BOOL available; // ivar: _available
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *definition; // ivar: _definition
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *eventDictionary;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldRefreshAvailability; // ivar: _shouldRefreshAvailability
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue; // ivar: _stateAccessQueue
@property (readonly) Class superclass;


+(BOOL)alwaysMakeAvailable;
+(BOOL)isSingleton;
+(BOOL)mustBeAvailableForDisplay;
+(BOOL)refreshesAvailabilityOnApplicationResume;
+(id)sharedInstance;
-(BOOL)shouldNotifyResourcesAfterAvailabilityUpdateWithForcedNotification:(BOOL)arg0 ;
-(id)init;
-(id)initWithDefinition:(id)arg0 ;
-(void)applicationContext:(id)arg0 applicationStateDidChange:(NSInteger)arg1 ;
-(void)attemptRecoveryFromError:(id)arg0 optionIndex:(NSUInteger)arg1 userInterface:(id)arg2 completionHandler:(id)arg3 ;
-(void)dealloc;
-(void)invalidateAvailability;
-(void)notifyResourcesAboutAvailabilityChange;
-(void)refreshAvailability;
-(void)refreshAvailabilityIfNeeded;
-(void)refreshAvailabilityWithForcedNotification;
-(void)refreshAvailabilityWithNotification;
-(void)refreshAvailabilityWithNotification:(BOOL)arg0 ;
-(void)updateAvailability:(BOOL)arg0 withError:(id)arg1 ;


@end


#endif
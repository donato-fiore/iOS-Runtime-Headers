// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIACTIVITYCONTINUATIONMANAGER_H
#define UIACTIVITYCONTINUATIONMANAGER_H

@class NSProgress, NSString;
@protocol NSUserActivityDelegate, UIActivityContinuationManagerApplicationContext;

#import <Foundation/Foundation.h>


@interface UIActivityContinuationManager : NSObject <NSUserActivityDelegate>

 {
    id<UIActivityContinuationManagerApplicationContext> *_context;
}


@property (retain, nonatomic, getter=_currentActivityContinuationProgress, setter=_setCurrentActivityContinuationProgress:) NSProgress *currentActivityContinuationProgress; // ivar: _currentActivityContinuationProgress
@property (copy, nonatomic, getter=_currentActivityContinuationType, setter=_setCurrentActivityContinuationType:) NSString *currentActivityContinuationType; // ivar: _currentActivityContinuationType
@property (copy, nonatomic, getter=_currentActivityContinuationUUIDString, setter=_setCurrentActivityContinuationUUIDString:) NSString *currentActivityContinuationUUIDString; // ivar: _currentActivityContinuationUUIDString
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_continueUserActivity:(id)arg0 ;
-(BOOL)_delegateHandledContinueActivityWithType:(id)arg0 ;
-(BOOL)activityContinuationsAreBeingTracked;
-(id)_fetchUserActivityWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(id)activityContinuationDictionaryWithAction:(id)arg0 sourceApplication:(id)arg1 originatingProcess:(id)arg2 ;
-(id)init;
-(id)initWithApplicationContext:(id)arg0 ;
-(void)_cleanupUserActivity:(id)arg0 activityIdentifier:(id)arg1 ;
-(void)_clearCurrentActivityContinuationCancelingProgress:(BOOL)arg0 ;
-(void)_didFailToContinueUserActivityWithType:(id)arg0 error:(id)arg1 ;
-(void)_displayCurrentActivityContinuationProgressUI;
-(void)_endCurrentActivityContinuationAndDisplayError:(id)arg0 ;
-(void)_endCurrentActivityContinuationWithCompletion:(id)arg0 ;
-(void)_hideCurrentActivityContinuationProgressUI;
-(void)_userActivityWillSave:(id)arg0 ;
-(void)addResponder:(id)arg0 document:(id)arg1 forUserActivity:(id)arg2 ;
-(void)handleActivityContinuation:(id)arg0 isSuspended:(BOOL)arg1 ;
-(void)removeResponder:(id)arg0 document:(id)arg1 forUserActivity:(id)arg2 ;
-(void)userActivityWillSave:(id)arg0 ;


@end


#endif
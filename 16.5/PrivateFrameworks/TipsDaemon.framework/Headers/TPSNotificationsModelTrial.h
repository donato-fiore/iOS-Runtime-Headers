// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSNOTIFICATIONSMODELTRIAL_H
#define TPSNOTIFICATIONSMODELTRIAL_H

@class NSString, TRILevel;
@protocol TPSTrialUpdateHandler;


#import "TPSTrial.h"

@interface TPSNotificationsModelTrial : TPSTrial <TPSTrialUpdateHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TRILevel *modelBasedNotifications; // ivar: _modelBasedNotifications
@property (retain, nonatomic) TRILevel *notificationsModel; // ivar: _notificationsModel
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)shouldNotify;
-(BOOL)shouldUseModelBasedNotifications;
-(id)_shouldNotifyWithModelInputs:(id)arg0 ;
-(id)init;
-(id)namespaceName;
-(id)notificationsClassifier;
-(int)projectID;
-(void)handleUpdate;


@end


#endif
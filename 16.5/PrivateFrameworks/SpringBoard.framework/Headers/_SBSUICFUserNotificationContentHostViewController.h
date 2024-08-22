// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBSUICFUSERNOTIFICATIONCONTENTHOSTVIEWCONTROLLER_H
#define _SBSUICFUSERNOTIFICATIONCONTENTHOSTVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol _SBSUICFUserNotificationContentExtensionHostInterface;


#import "SBUserNotificationAlert.h"

@interface _SBSUICFUserNotificationContentHostViewController : UIRemoteViewController <_SBSUICFUserNotificationContentExtensionHostInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) SBUserNotificationAlert *userNotification; // ivar: _userNotification


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)_canShowWhileLocked;
-(void)configureWithCompletion:(id)arg0 ;
-(void)invalidateWithCompletion:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCUSERNOTIFICATIONSUIKITDEFAULTS_H
#define NCUSERNOTIFICATIONSUIKITDEFAULTS_H

@class BSAbstractDefaultDomain;



@interface NCUserNotificationsUIKitDefaults : BSAbstractDefaultDomain

@property (nonatomic) BOOL shouldForceHapticTouchForPreview;


+(id)standardDefaults;
-(id)init;
-(void)_bindAndRegisterDefaults;


@end


#endif
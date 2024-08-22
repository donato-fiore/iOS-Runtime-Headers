// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBROTATIONLOCKHUDVIEWCONTROLLER_H
#define SBROTATIONLOCKHUDVIEWCONTROLLER_H



#import "SBHUDViewController.h"

@interface SBRotationLockHUDViewController : SBHUDViewController

@property (nonatomic, getter=isLocked) BOOL locked; // ivar: _locked


-(id)init;
-(void)_updateLockedImage;


@end


#endif
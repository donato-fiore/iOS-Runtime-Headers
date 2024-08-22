// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPOPOVERHOSTMANAGERPOPOVERCLOSECONFIGURATION_H
#define _UIPOPOVERHOSTMANAGERPOPOVERCLOSECONFIGURATION_H

@protocol UIViewControllerTransitionCoordinator;

#import <Foundation/Foundation.h>

#import "UIWindow.h"

@interface _UIPopoverHostManagerPopoverCloseConfiguration : NSObject

@property (retain, nonatomic) UIWindow *parentWindow; // ivar: _parentWindow
@property (retain, nonatomic) UIWindow *popoverWindow; // ivar: _popoverWindow
@property (retain, nonatomic) NSObject<UIViewControllerTransitionCoordinator> *transitionCoordinator; // ivar: _transitionCoordinator




@end


#endif
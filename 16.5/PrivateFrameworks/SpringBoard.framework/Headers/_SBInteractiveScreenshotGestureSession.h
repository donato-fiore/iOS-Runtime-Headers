// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBINTERACTIVESCREENSHOTGESTURESESSION_H
#define _SBINTERACTIVESCREENSHOTGESTURESESSION_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "SBInteractiveScreenshotGestureHostRootViewController.h"
#import "SBInteractiveScreenshotGestureHostWindow.h"
#import "SBInteractiveScreenshotGestureRootViewController.h"
#import "SBInteractiveScreenshotGestureRootWindow.h"

@interface _SBInteractiveScreenshotGestureSession : NSObject

@property (readonly, nonatomic) SBInteractiveScreenshotGestureHostRootViewController *hostRootViewController;
@property (retain, nonatomic) SBInteractiveScreenshotGestureHostWindow *hostWindow; // ivar: _hostWindow
@property (readonly, nonatomic) SBInteractiveScreenshotGestureRootViewController *rootViewController;
@property (retain, nonatomic) SBInteractiveScreenshotGestureRootWindow *rootWindow; // ivar: _rootWindow
@property (readonly, copy, nonatomic) NSUUID *sessionID; // ivar: _sessionID


-(id)initWithSessionID:(id)arg0 ;


@end


#endif
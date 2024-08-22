// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUITVAPPLICATIONCONTROLLER_H
#define VUITVAPPLICATIONCONTROLLER_H

@class NSDictionary, NSDate, UIViewController<VUITVAppRootViewController>, NSString, UINavigationController, UIWindow;
@protocol VUIAppContextDelegate, VUITVApplicationControllerDelegate, UITraitEnvironment;

#import <Foundation/Foundation.h>

#import "_VUICoreApplication.h"
#import "VUIAppContext.h"
#import "VUITVApplicationControllerContext.h"

@interface VUITVApplicationController : NSObject <VUIAppContextDelegate>

 {
    _VUICoreApplication *_application;
    NSDictionary *_openURLResumeOptions;
    NSDictionary *_openURLReloadOptions;
    BOOL _suspended;
    BOOL _reloadInProgress;
    BOOL _reloadOnResume;
    CGFloat _reloadOnResumeMinInterval;
    NSDate *_reloadOnResumeBackgroundedDate;
    BOOL _doLaunchOpenURLHandling;
    NSDictionary *_launchOpenURLOptions;
    BOOL _popViewControllerOnBackground;
    UIViewController<VUITVAppRootViewController> *_appRootViewController;
    NSInteger _interfaceOrientation;
}


@property (readonly, nonatomic) VUIAppContext *appContext; // ivar: _appContext
@property (readonly, nonatomic) VUITVApplicationControllerContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<VUITVApplicationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<UITraitEnvironment> *keyTraitEnvironment; // ivar: _keyTraitEnvironment
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIWindow *window; // ivar: _window


+(id)_jsLaunchOptionsWithApplicationOptions:(id)arg0 ;
+(void)initialize;
-(BOOL)_hasReloadOnResumeMinIntervalPassed;
-(BOOL)_shouldReloadOnResume;
-(BOOL)openURL:(id)arg0 options:(id)arg1 ;
-(id)_currentNavigationController;
-(id)_rootViewController;
-(id)appRootViewController;
-(id)init;
-(id)initWithContext:(id)arg0 window:(id)arg1 delegate:(id)arg2 ;
-(id)rootViewController;
-(void)_applicationDidBecomeActiveNotification:(id)arg0 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)_applicationWillResignActiveNotification:(id)arg0 ;
-(void)_applicationWillTerminateNotification:(id)arg0 ;
-(void)_launchApp;
-(void)_openURLControllerDidDisplay:(id)arg0 ;
-(void)_openURLControllerHandler:(BOOL)arg0 ;
-(void)_openURLOnAppLaunchControllerDidDisplay:(id)arg0 ;
-(void)_reloadControllerDidDisplay:(id)arg0 ;
-(void)_statusBarOrientationDidChange:(id)arg0 ;
-(void)appContext:(id)arg0 didFailWithError:(id)arg1 ;
-(void)appContext:(id)arg0 didStartWithOptions:(id)arg1 ;
-(void)appContext:(id)arg0 didStopWithOptions:(id)arg1 ;
-(void)appContext:(id)arg0 evaluateAppJavaScriptInContext:(id)arg1 ;
-(void)appContext:(id)arg0 needsReloadWithUrgency:(NSUInteger)arg1 options:(id)arg2 ;
-(void)appContext:(id)arg0 scriptForURL:(id)arg1 cachePolicy:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)applicationDidResume:(id)arg0 ;
-(void)applicationWillSuspend:(id)arg0 ;
-(void)dealloc;
// -(void)evaluateInJavaScriptContext:(id)arg0 completion:(unk)arg1  ;
-(void)registerForApplicationNotifications;
-(void)reload;
-(void)stop;


@end


#endif
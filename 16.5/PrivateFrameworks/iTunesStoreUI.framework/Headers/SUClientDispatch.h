// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUCLIENTDISPATCH_H
#define SUCLIENTDISPATCH_H


#import <Foundation/Foundation.h>


@interface SUClientDispatch : NSObject



+(BOOL)composeReviewWithViewController:(id)arg0 animated:(BOOL)arg1 ;
+(BOOL)enterAccountFlowWithViewController:(id)arg0 animated:(BOOL)arg1 ;
+(BOOL)hidePreviewOverlayAnimated:(BOOL)arg0 ;
+(BOOL)isTabBarControllerLoaded;
+(BOOL)matchesClientApplication:(id)arg0 ;
+(BOOL)presentOverlayBackgroundViewController:(id)arg0 ;
+(BOOL)sendActionForDialog:(id)arg0 button:(id)arg1 ;
+(BOOL)showPreviewOverlayAnimated:(BOOL)arg0 ;
+(BOOL)wasLaunchedFromLibrary;
+(id)clientInterface;
+(id)exitStoreButtonTitle;
+(id)imageCache;
+(id)imagePool;
+(id)newScriptInterface;
+(id)overlayBackgroundViewController;
+(id)overlayConfigurationForStorePage:(id)arg0 ;
+(id)previewOverlayViewController;
+(id)scriptExecutionContext;
+(id)tabBarController;
+(void)composeEmailWithSubject:(id)arg0 body:(id)arg1 ;
+(void)dismissOverlayBackgroundViewController;
+(void)setClientBridge:(id)arg0 ;


@end


#endif
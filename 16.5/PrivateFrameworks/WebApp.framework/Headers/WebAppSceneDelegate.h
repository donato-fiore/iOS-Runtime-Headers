// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBAPPSCENEDELEGATE_H
#define WEBAPPSCENEDELEGATE_H

@class UIResponder, UIWindow, NSString;
@protocol UIWindowSceneDelegate;


#import "WebAppViewController.h"

@interface WebAppSceneDelegate : UIResponder <UIWindowSceneDelegate>

 {
    WebAppViewController *_webApp;
    UIWindow *_window;
    BOOL _wasSuspendedUnderLock;
    BOOL _sceneHasEverEnteredForeground;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIWindow *window;


-(void)_tearDownWindowAndWebApp;
-(void)connectWebClipIdentifier:(id)arg0 toScene:(id)arg1 forWebPush:(BOOL)arg2 ;
-(void)scene:(id)arg0 openURLContexts:(id)arg1 ;
-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;
-(void)sceneDidBecomeActive:(id)arg0 ;
-(void)sceneDidDisconnect:(id)arg0 ;
-(void)sceneDidEnterBackground:(id)arg0 ;
-(void)sceneWillEnterForeground:(id)arg0 ;


@end


#endif
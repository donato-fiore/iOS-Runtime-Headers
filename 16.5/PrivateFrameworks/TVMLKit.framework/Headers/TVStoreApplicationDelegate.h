// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVSTOREAPPLICATIONDELEGATE_H
#define TVSTOREAPPLICATIONDELEGATE_H

@class UIResponder, NSDictionary, NSURL, IKURLBagCache, NSString, UIWindow;
@protocol UIApplicationDelegate, TVApplicationControllerDelegate;


#import "TVStoreApplicationSetupHelper.h"
#import "TVApplicationController.h"

@interface TVStoreApplicationDelegate : UIResponder <UIApplicationDelegate, TVApplicationControllerDelegate>

 {
    TVStoreApplicationSetupHelper *_setupHelper;
    NSDictionary *_launchOptions;
    NSURL *_launchOpenURL;
    NSDictionary *_launchOpenURLOptions;
    BOOL _shouldTerminateOnEnterBackground;
    BOOL _headLess;
}


@property (readonly, nonatomic) TVApplicationController *appController; // ivar: _appController
@property (readonly, nonatomic) IKURLBagCache *bagCache; // ivar: _bagCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL overrideOrientation; // ivar: _overrideOrientation
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsIdleModeVisualEffects;
@property (retain, nonatomic) UIWindow *window; // ivar: _window


-(BOOL)application:(id)arg0 didFinishLaunchingWithOptions:(id)arg1 ;
-(BOOL)application:(id)arg0 openURL:(id)arg1 options:(id)arg2 ;
-(BOOL)shouldBeForcedLeftToRight;
-(NSUInteger)application:(id)arg0 supportedInterfaceOrientationsForWindow:(id)arg1 ;
-(id)_bagBootURL;
-(id)appLocalBootURL;
-(id)bagBootURLKey;
-(id)bootURL;
-(id)cachedBagPath;
-(id)init;
-(id)offlineJSURL;
-(void)_controllerDidDisplay:(id)arg0 ;
-(void)_launchApp;
-(void)_loadWithBootURL:(id)arg0 ;
-(void)_presetDialogWithError:(NSInteger)arg0 appController:(id)arg1 ;
-(void)appController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)dealloc;
-(void)didShowViewController;
-(void)reload;
-(void)setupWithBootURL:(id)arg0 ;
-(void)updateIdleModeVisualEffectsStatus:(BOOL)arg0 ;


@end


#endif
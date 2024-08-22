// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUWEBVIEWCONTROLLER_H
#define SUWEBVIEWCONTROLLER_H

@class NSURL, ISURLRequestPerformance, ACAccount, SSAuthenticationContext, NSString, NSDictionary;
@protocol SUWebViewManagerDelegate, SUWebViewDelegate;


#import "SUViewController.h"
#import "SUWebView.h"
#import "SUDelayedNavigationItem.h"
#import "SUObjectPool.h"
#import "SUStorePageProtocol.h"
#import "SUWebViewManager.h"
#import "SUMescalSession.h"

@interface SUWebViewController : SUViewController <SUWebViewManagerDelegate, SUWebViewDelegate>

 {
    SUWebView *_webView;
    SUDelayedNavigationItem *_delayedNavigationItem;
    NSURL *_displayedURL;
    BOOL _hasEverAppeared;
    NSInteger _lastKnownOrientation;
    id *_loadBlock;
    SUObjectPool *_objectPool;
    NSInteger _scheduledOrientation;
    SUStorePageProtocol *_storePageProtocol;
    NSURL *_url;
    SUWebViewManager *_webViewManager;
}


@property (retain, nonatomic, getter=_mescalSession, setter=_setMescalSession:) SUMescalSession *_mescalSession; // ivar: _mescalSession
@property (retain, nonatomic, getter=_performanceMetrics, setter=_setPerformanceMetrics:) ISURLRequestPerformance *_performanceMetrics; // ivar: _performanceMetrics
@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (copy, nonatomic) SSAuthenticationContext *authenticationContext; // ivar: _authenticationContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldSignRequests; // ivar: _shouldSignRequests
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *tidHeaders; // ivar: _tidHeaders
@property (nonatomic) BOOL viewIsReady; // ivar: _viewIsReady
@property (readonly, nonatomic) SUWebView *webView;


-(id)_defaultBackgroundColor;
-(id)_placeholderBackgroundView;
-(id)copyArchivableContext;
-(id)copyDefaultScriptProperties;
-(id)copyObjectForScriptFromPoolWithClass:(Class)arg0 ;
-(id)copyScriptProperties;
-(id)displayedURL;
-(id)navigationItemForScriptInterface;
-(id)newRotationController;
-(id)newScriptInterface;
-(id)newScriptInterfaceForWebViewManager:(id)arg0 ;
-(id)storePageProtocol;
-(id)viewControllerForWebViewManager:(id)arg0 ;
-(struct CGRect )documentBounds;
-(struct CGSize )minimumViewSize;
-(void)_addPlaceholderBackgroundView;
-(void)_applySavedScrollOffsetIfPossible;
-(void)_applyScriptProperties:(id)arg0 ;
-(void)_finishLoadWithResult:(BOOL)arg0 error:(id)arg1 ;
-(void)_getURLRequestForOperation:(id)arg0 block:(id)arg1 ;
-(void)_loadURLRequest:(id)arg0 ;
-(void)_loadWithURLOperation:(id)arg0 completionBlock:(id)arg1 ;
-(void)_prepareToLoadURL:(id)arg0 ;
-(void)_reloadBackgroundViewPropertiesWithScriptProperties:(id)arg0 ;
-(void)_reloadObjectPool;
-(void)_reloadPlaceholderBackgroundView;
-(void)_reloadUI;
-(void)_removePlaceholderBackgroundView;
-(void)_requestWebScriptReloadWithContext:(id)arg0 ;
-(void)_sendOrientationWillChangeToInterfaceOrientation:(NSInteger)arg0 ;
-(void)_setExistingNavigationItem:(id)arg0 ;
-(void)_setLastKnownOrientation:(NSInteger)arg0 ;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)dealloc;
-(void)invalidate;
-(void)keyboardDidHideWithInfo:(id)arg0 ;
-(void)keyboardWillShowWithInfo:(id)arg0 ;
-(void)loadView;
-(void)parentViewControllerHierarchyDidChange;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)reloadWithStorePage:(id)arg0 forURL:(id)arg1 ;
-(void)setScriptProperties:(id)arg0 ;
-(void)setStorePageProtocol:(id)arg0 ;
-(void)storePageCleanupBeforeTearDown;
-(void)storePageProtocolDidChange;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)webViewManager:(id)arg0 didFailLoadWithError:(id)arg1 ;
-(void)webViewManager:(id)arg0 didReceivePrimaryResponse:(id)arg1 ;
-(void)webViewManager:(id)arg0 didReceiveTitle:(id)arg1 ;
-(void)webViewManager:(id)arg0 didRejectInvalidRequest:(id)arg1 ;
-(void)webViewManager:(id)arg0 webDocumentViewDidSetFrame:(struct CGRect )arg1 ;
-(void)webViewManager:(id)arg0 willInjectScriptInterface:(id)arg1 ;
-(void)webViewManagerDidFinishLoad:(id)arg0 ;
-(void)webViewManagerDidStartLoad:(id)arg0 ;


@end


#endif
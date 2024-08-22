// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKPRODUCTPAGEVIEWCONTROLLER_H
#define SKPRODUCTPAGEVIEWCONTROLLER_H

@class SUViewController, SUDialogManager, SUBarButtonItem, SSMetricsPageEvent, NSURL, SUPreviewOverlayViewController, NSDictionary, SUPurchaseManager, NSString;
@protocol SKUIBannerViewDelegate, SKUIIPadProductPageDelegate, SKUIIPhoneProductPageDelegate, SUClientInterfaceDelegatePrivate, SUPurchaseManagerDelegate, SKUIItemStateCenterObserver, SKProductPageViewControllerDelegate;


#import "SKUIBannerViewController.h"
#import "SKUIClientContext.h"
#import "SKUIIPadProductPageViewController.h"
#import "SKUIIPhoneProductPageViewController.h"
#import "SKUIItemStateCenter.h"
#import "SKUIITunesStoreUIPageViewController.h"

@interface SKProductPageViewController : SUViewController <SKUIBannerViewDelegate, SKUIIPadProductPageDelegate, SKUIIPhoneProductPageDelegate, SUClientInterfaceDelegatePrivate, SUPurchaseManagerDelegate, SKUIItemStateCenterObserver>

 {
    SKUIBannerViewController *_bannerViewController;
    SKUIClientContext *_clientContext;
    SUDialogManager *_dialogManager;
    SUBarButtonItem *_gotoStoreButtonItem;
    SUBarButtonItem *_rightBarButtonItem;
    SKUIIPadProductPageViewController *_ipadProductPageViewController;
    SKUIIPhoneProductPageViewController *_iphoneProductPageViewController;
    SKUIItemStateCenter *_itemStateCenter;
    SSMetricsPageEvent *_lastPageEvent;
    NSURL *_nativeURL;
    SUPreviewOverlayViewController *_previewOverlay;
    NSDictionary *_productParameters;
    SUPurchaseManager *_purchaseManager;
    SKUIITunesStoreUIPageViewController *_storePageViewController;
}


@property (nonatomic) NSInteger URLBagType; // ivar: _urlBagType
@property (copy, nonatomic) NSString *additionalPurchaseParameters; // ivar: _additionalPurchaseParameters
@property (copy, nonatomic) NSString *affiliateIdentifier; // ivar: _affiliateIdentifier
@property (nonatomic) BOOL askToBuy; // ivar: _askToBuy
@property (copy, nonatomic) NSString *cancelButtonTitle; // ivar: _cancelButtonTitle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKProductPageViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *mainDocumentURL; // ivar: _mainDocumentURL
@property (nonatomic, getter=isPreview) BOOL preview; // ivar: _preview
@property (nonatomic) NSInteger productPageStyle; // ivar: _style
@property (copy, nonatomic) NSString *promptString; // ivar: _promptString
@property (copy, nonatomic) NSString *rightBarButtonTitle; // ivar: _rightBarButtonTitle
@property (copy, nonatomic) NSDictionary *scriptContextDictionary;
@property (nonatomic) BOOL showsRightBarButton; // ivar: _showsRightBarButton
@property (nonatomic) BOOL showsStoreButton; // ivar: _showsStoreButton
@property (readonly) Class superclass;


+(id)_defaultClientIdentifier;
+(id)_defaultClientInterface;
+(void)_validateURL:(id)arg0 withURLBag:(id)arg1 completionBlock:(id)arg2 ;
+(void)getCanLoadWithURL:(id)arg0 completionBlock:(id)arg1 ;
-(BOOL)iPhoneProductPage:(id)arg0 shouldOpenItem:(id)arg1 ;
-(BOOL)iPhoneProductPage:(id)arg0 shouldOpenURL:(id)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_initSKProductPageViewController;
-(id)_newRequestPropertiesWithRequest:(id)arg0 ;
-(id)_previewOverlay;
-(id)cancelButtonTitle:(id)arg0 ;
-(id)init;
-(id)initWithProductPageStyle:(NSInteger)arg0 ;
-(id)initWithTabBarItem:(id)arg0 ;
-(id)previewOverlayForClientInterface:(id)arg0 ;
-(id)scriptInterfaceForClientInterface:(id)arg0 ;
-(void)_applicationWillEnterForeground;
-(void)_failWithError:(id)arg0 ;
-(void)_gotoStoreButtonAction:(id)arg0 ;
-(void)_loadClientContextWithCompletionBlock:(id)arg0 ;
-(void)_loadProductWithRequest:(id)arg0 ;
-(void)_loadRequestForProductParameters;
-(void)_purchaseFailedNotification:(id)arg0 ;
-(void)_purchaseFinishedNotification:(id)arg0 ;
-(void)_reloadGotoStoreButton;
-(void)_reloadViews;
-(void)_rightBarButtonAction:(id)arg0 ;
-(void)_sendDidFailLoadWithError:(id)arg0 ;
-(void)_sendDidFinishWithResult:(NSInteger)arg0 ;
-(void)_setClientContext:(id)arg0 ;
-(void)_setResponse:(id)arg0 forProperties:(id)arg1 error:(id)arg2 ;
-(void)_setShowsCancelButton:(BOOL)arg0 ;
-(void)_showPageWithRequest:(id)arg0 animated:(BOOL)arg1 ;
-(void)_showPreviewOverlayAnimated:(BOOL)arg0 ;
-(void)_showProductPage:(id)arg0 pageEvent:(id)arg1 ;
-(void)bannerView:(id)arg0 didFailWithError:(id)arg1 ;
-(void)bannerViewDidClose:(id)arg0 ;
-(void)clientInterface:(id)arg0 exitStoreWithReason:(NSInteger)arg1 ;
-(void)clientInterface:(id)arg0 hidePreviewOverlayAnimated:(BOOL)arg1 ;
-(void)clientInterface:(id)arg0 presentDialog:(id)arg1 ;
-(void)clientInterface:(id)arg0 setStatusBarHidden:(BOOL)arg1 withAnimation:(NSInteger)arg2 ;
-(void)clientInterface:(id)arg0 setStatusBarStyle:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)clientInterface:(id)arg0 showPreviewOverlayAnimated:(BOOL)arg1 ;
-(void)clientInterface:(id)arg0 willDismissViewController:(id)arg1 ;
-(void)clientInterface:(id)arg0 willPresentViewController:(id)arg1 ;
-(void)dealloc;
-(void)iPadProductPage:(id)arg0 openItem:(id)arg1 ;
-(void)iPadProductPage:(id)arg0 openURL:(id)arg1 viewControllerBlock:(id)arg2 ;
-(void)itemStateCenter:(id)arg0 didFinishPurchases:(id)arg1 ;
-(void)itemStateCenter:(id)arg0 didFinishSoftwarePurchases:(id)arg1 ;
-(void)loadProductWithParameters:(id)arg0 ;
-(void)loadProductWithRequest:(id)arg0 ;
-(void)loadView;
-(void)loadWithProductPage:(id)arg0 ;
-(void)loadWithStorePageRequest:(id)arg0 ;
-(void)purchaseManager:(id)arg0 didFinishPurchaseRequest:(id)arg1 withError:(id)arg2 ;
-(void)purchaseManager:(id)arg0 willAddPurchases:(id)arg1 ;
-(void)setClientInterface:(id)arg0 ;
-(void)storePage:(id)arg0 finishedWithSuccess:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif
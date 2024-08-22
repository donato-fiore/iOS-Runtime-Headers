// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIBANNERVIEWCONTROLLER_H
#define SKUIBANNERVIEWCONTROLLER_H

@class UIViewController, UIImage, SSLookupItem, NSMutableArray, NSString, NSOperationQueue, NSDictionary;
@protocol SKUIItemStateCenterObserver, SKUIBannerViewDelegate;


#import "SKUIBannerView.h"
#import "SKUIItemStateCenter.h"
#import "SKUIItemArtworkContext.h"
#import "SKUIClientContext.h"

@interface SKUIBannerViewController : UIViewController <SKUIItemStateCenterObserver>

 {
    SKUIBannerView *_bannerView;
    UIImage *_iconImage;
    SSLookupItem *_item;
    NSInteger _itemIdentifier;
    SKUIItemStateCenter *_itemStateCenter;
    NSMutableArray *_screenshotImages;
    SKUIItemArtworkContext *_itemArtworkContext;
}


@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIBannerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSOperationQueue *resourceOperationQueue; // ivar: _resourceOperationQueue
@property (copy, nonatomic) NSDictionary *scriptContextDictionary; // ivar: _scriptContextDictionary
@property (readonly) Class superclass;


-(id)_iconImage;
-(id)_itemArtworkContext;
-(id)_itemState;
-(id)_screenshotConsumerWithSize:(struct CGSize )arg0 ;
-(void)_bannerViewAction:(id)arg0 ;
-(void)_closeButtonAction:(id)arg0 ;
-(void)_finishWithResponse:(id)arg0 error:(id)arg1 ;
-(void)_launchApp;
-(void)_launchURL:(id)arg0 withBundleIdentifier:(id)arg1 ;
-(void)_loadImages;
-(void)_reloadBannerView;
-(void)_setIcon:(id)arg0 error:(id)arg1 ;
-(void)_setScreenshot:(id)arg0 forIndex:(NSInteger)arg1 error:(id)arg2 ;
-(void)_warmItemStateCenter;
-(void)dealloc;
-(void)itemStateCenter:(id)arg0 itemStatesChanged:(id)arg1 ;
-(void)loadView;
-(void)loadWithProductParameters:(id)arg0 mainDocumentURL:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIURLRESOLVER_H
#define SKUIURLRESOLVER_H

@class NSString, NSOperationQueue;
@protocol SKUIPassbookLoaderDelegate, SKUIURLResolverDelegate, UINavigationControllerDelegate;

#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"
#import "SKUIPassbookLoader.h"

@interface SKUIURLResolver : NSObject <SKUIPassbookLoaderDelegate>

 {
    SKUIClientContext *_clientContext;
    SKUIPassbookLoader *_passbookLoader;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIURLResolverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<UINavigationControllerDelegate> *navigationControllerDelegate; // ivar: _navigationControllerDelegate
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly) Class superclass;


+(id)tabIdentifierForURL:(id)arg0 ;
-(id)_newHTMLViewControllerWithSection:(id)arg0 ;
-(id)initWithClientContext:(id)arg0 ;
-(id)presentationViewControllerForPassbookLoader:(id)arg0 ;
-(void)_addPassbookPassWithURL:(id)arg0 ;
-(void)_handleSafariScriptDataUpdate:(id)arg0 ;
-(void)_performLookupWithURL:(id)arg0 ;
-(void)_presentViewController:(id)arg0 ;
-(void)_resolveURLRequest:(id)arg0 withOriginURL:(id)arg1 ;
-(void)_selectTabWithIdentifier:(id)arg0 ;
-(void)_sendDidFinishWithResult:(BOOL)arg0 ;
-(void)_showAccountViewControllerWithURL:(id)arg0 ;
-(void)_showBagURLWithURL:(id)arg0 ;
-(void)_showDonationViewControllerWithURL:(id)arg0 ;
-(void)_showGiftViewControllerWithURL:(id)arg0 ;
-(void)_showPlaceholderViewController;
-(void)_showRedeemViewControllerWithURL:(id)arg0 ;
-(void)_showSearchWithURL:(id)arg0 ;
-(void)_showViewControllerWithResponse:(id)arg0 fromOperation:(id)arg1 ;
-(void)amsResolveURL:(id)arg0 forURLType:(NSInteger)arg1 ;
-(void)dealloc;
-(void)passbookLoaderDidFinish:(id)arg0 ;
-(void)resolveURL:(id)arg0 ;


@end


#endif
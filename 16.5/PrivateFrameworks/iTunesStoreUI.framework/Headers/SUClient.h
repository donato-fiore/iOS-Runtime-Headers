// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUCLIENT_H
#define SUCLIENT_H

@class NSLock, ISURLOperationPool, NSString;
@protocol SUClientDelegate;

#import <Foundation/Foundation.h>

#import "SUClientInterface.h"
#import "SUImageCache.h"
#import "SUScriptExecutionContext.h"

@interface SUClient : NSObject {
    *__CFArray _assetTypes;
    SUClientInterface *_clientInterface;
    NSLock *_lock;
}


@property (readonly) SUClientInterface *clientInterface;
@property (nonatomic) NSObject<SUClientDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL dontSaveNavigationPath; // ivar: _dontSaveNavigationPath
@property (retain, nonatomic) SUImageCache *imageCache; // ivar: _imageCache
@property (retain, nonatomic) ISURLOperationPool *imagePool; // ivar: _imagePool
@property (readonly, nonatomic) SUScriptExecutionContext *scriptExecutionContext; // ivar: _scriptExecutionContext
@property (retain, nonatomic) NSString *searchHintsURLBagKey;
@property (retain, nonatomic) NSString *searchURLBagKey;


+(id)sharedClient;
+(id)viewControllerFactory;
+(void)setSharedClient:(id)arg0 ;
-(BOOL)_presentModalViewController:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)composeReviewWithViewController:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)dismissTopViewControllerAnimated:(BOOL)arg0 ;
-(BOOL)enterAccountFlowWithViewController:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)openExternalURL:(id)arg0 ;
-(BOOL)openInternalURL:(id)arg0 ;
-(BOOL)openURL:(id)arg0 inClientApplication:(id)arg1 ;
-(BOOL)sendActionForDialog:(id)arg0 button:(id)arg1 ;
-(id)_newAccountViewControllerForButtonAction:(id)arg0 ;
-(id)_newComposeReviewViewControllerForButtonAction:(id)arg0 ;
-(id)clientIdentifier;
-(id)init;
-(id)initWithClientInterface:(id)arg0 ;
-(id)queueSessionManager;
-(id)viewControllerFactory;
-(struct __CFArray *)assetTypes;
-(void)_applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)_bagDidLoadNotification:(id)arg0 ;
-(void)_memoryWarningNotification:(id)arg0 ;
-(void)_purgeCaches;
-(void)_reloadScriptExecutionContext;
-(void)dealloc;
-(void)setAssetTypes:(struct __CFArray *)arg0 ;
-(void)setClientIdentifier:(id)arg0 ;
-(void)setQueueSessionManager:(id)arg0 ;
-(void)setViewControllerFactory:(id)arg0 ;


@end


#endif
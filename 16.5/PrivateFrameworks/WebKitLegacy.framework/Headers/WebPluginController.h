// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBPLUGINCONTROLLER_H
#define WEBPLUGINCONTROLLER_H

@class WAKView, NSMutableArray, NSMutableSet, NSString;
@protocol WebPluginManualLoader, WebPluginContainerCheckController;

#import <Foundation/Foundation.h>

#import "WebDataSource.h"

@interface WebPluginController : NSObject <WebPluginManualLoader, WebPluginContainerCheckController>

 {
    WAKView *_documentView;
    WebDataSource *_dataSource;
    NSMutableArray *_views;
    BOOL _started;
    NSMutableSet *_checksInProgress;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isPlugInView:(id)arg0 ;
+(void)addPlugInView:(id)arg0 ;
-(BOOL)plugInsAreRunning;
-(BOOL)processingUserGesture;
-(id)URLPolicyCheckReferrer;
-(id)_webPluginContainerCheckIfAllowedToLoadRequest:(id)arg0 inFrame:(id)arg1 resultObject:(id)arg2 selector:(SEL)arg3 ;
-(id)initWithDocumentView:(id)arg0 ;
-(id)plugInViewWithArguments:(id)arg0 fromPluginPackage:(id)arg1 ;
-(id)superlayerForPluginView:(id)arg0 ;
-(id)webFrame;
-(id)webView;
-(void)_cancelOutstandingChecks;
-(void)_webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)arg0 ;
-(void)addPlugin:(id)arg0 ;
-(void)dealloc;
-(void)destroyAllPlugins;
-(void)destroyOnePlugin:(id)arg0 ;
-(void)destroyPlugin:(id)arg0 ;
-(void)pluginView:(id)arg0 receivedData:(id)arg1 ;
-(void)pluginView:(id)arg0 receivedError:(id)arg1 ;
-(void)pluginView:(id)arg0 receivedResponse:(id)arg1 ;
-(void)pluginViewFinishedLoading:(id)arg0 ;
-(void)restorePluginsFromCache;
-(void)setDataSource:(id)arg0 ;
-(void)showStatus:(id)arg0 ;
-(void)startAllPlugins;
-(void)stopAllPlugins;
-(void)stopOnePlugin:(id)arg0 ;
-(void)stopOnePluginForPageCache:(id)arg0 ;
-(void)stopPluginsForPageCache;
-(void)webPlugInContainerDidHideFullScreenForView:(id)arg0 ;
-(void)webPlugInContainerLoadRequest:(id)arg0 inFrame:(id)arg1 ;
-(void)webPlugInContainerShowStatus:(id)arg0 ;
-(void)webPlugInContainerWillShowFullScreenForView:(id)arg0 ;


@end


#endif
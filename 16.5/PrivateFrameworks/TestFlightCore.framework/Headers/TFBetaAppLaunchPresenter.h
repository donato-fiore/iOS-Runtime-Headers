// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TFBETAAPPLAUNCHPRESENTER_H
#define TFBETAAPPLAUNCHPRESENTER_H

@class NSURL;
@protocol TFBetaAppLaunchDataProvider, TFBetaAppLaunchPresenterView;

#import <Foundation/Foundation.h>

#import "TFImageFetcher.h"
#import "TFLaunchScreen.h"

@interface TFBetaAppLaunchPresenter : NSObject

@property (readonly, copy, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (readonly, nonatomic) TFImageFetcher *imageFetcher; // ivar: _imageFetcher
@property (readonly, nonatomic) NSObject<TFBetaAppLaunchDataProvider> *launchDataProvider; // ivar: _launchDataProvider
@property (retain, nonatomic) TFLaunchScreen *launchScreen; // ivar: _launchScreen
@property (weak, nonatomic) NSObject<TFBetaAppLaunchPresenterView> *presenterView; // ivar: _presenterView


-(id)initWithBundleURL:(id)arg0 launchDataProvider:(id)arg1 launchScreenSidepack:(id)arg2 ;
-(void)_abortLaunchScreenLoadWithError:(id)arg0 ;
-(void)_showHowToViewWithLaunchScreen:(id)arg0 ;
-(void)_showLoading;
-(void)_showTestNotesViewWithLaunchScreen:(id)arg0 ;
-(void)exitLaunchScreen;
-(void)openHowToSupportLink;
-(void)showHowToScreen;
-(void)update;


@end


#endif
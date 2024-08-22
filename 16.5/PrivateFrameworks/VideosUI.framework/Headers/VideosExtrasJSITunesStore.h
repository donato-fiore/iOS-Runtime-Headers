// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIDEOSEXTRASJSITUNESSTORE_H
#define VIDEOSEXTRASJSITUNESSTORE_H

@class IKJSITunesStore, NSString, UIViewController;
@protocol SKStoreProductViewControllerDelegatePrivate, VideosExtrasJSITunesStore, IKJSITunesStore;



@interface VideosExtrasJSITunesStore : IKJSITunesStore <SKStoreProductViewControllerDelegatePrivate, VideosExtrasJSITunesStore, IKJSITunesStore>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UIViewController *formPresentationViewController; // ivar: _formPresentationViewController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)loadStoreURL:(id)arg0 playOnLaunch:(id)arg1 ;


@end


#endif
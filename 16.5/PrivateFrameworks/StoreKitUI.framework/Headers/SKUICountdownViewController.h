// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICOUNTDOWNVIEWCONTROLLER_H
#define SKUICOUNTDOWNVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol SKUIArtworkRequestDelegate;


#import "SKUIResourceLoader.h"
#import "SKUIClientContext.h"
#import "SKUICountdownComponent.h"

@interface SKUICountdownViewController : UIViewController <SKUIArtworkRequestDelegate>



@property (readonly, nonatomic) SKUIResourceLoader *artworkLoader; // ivar: _artworkLoader
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, nonatomic) SKUICountdownComponent *countdownComponent; // ivar: _countdownComponent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCountdownComponent:(id)arg0 artworkLoader:(id)arg1 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif
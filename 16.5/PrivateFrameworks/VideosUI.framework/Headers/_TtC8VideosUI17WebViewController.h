// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI17WEBVIEWCONTROLLER_H
#define _TTC8VIDEOSUI17WEBVIEWCONTROLLER_H

@class UIViewController;
@protocol WKNavigationDelegate;



@interface _TtC8VideosUI17WebViewController : UIViewController <WKNavigationDelegate>

 {
    ? activityIndicator;
    ? webView;
    ? url;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1 ;


@end


#endif
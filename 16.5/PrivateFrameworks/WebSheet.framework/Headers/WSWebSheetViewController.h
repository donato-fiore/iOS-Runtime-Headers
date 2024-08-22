// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WSWEBSHEETVIEWCONTROLLER_H
#define WSWEBSHEETVIEWCONTROLLER_H

@class UIViewController;



@interface WSWebSheetViewController : UIViewController



-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;
-(id)webSheetView;
-(void)dismissViewController:(NSInteger)arg0 ;
-(void)handleProbeResult:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)loadView;
-(void)startWithURL:(id)arg0 ssid:(id)arg1 interface:(id)arg2 proxyConfiguration:(id)arg3 enableTVMode:(BOOL)arg4 delegate:(id)arg5 ;
-(void)startWithURL:(id)arg0 ssid:(id)arg1 interface:(id)arg2 proxyConfiguration:(id)arg3 showCancelMenu:(BOOL)arg4 delegate:(id)arg5 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif
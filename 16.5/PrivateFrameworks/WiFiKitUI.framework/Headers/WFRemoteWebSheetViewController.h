// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREMOTEWEBSHEETVIEWCONTROLLER_H
#define WFREMOTEWEBSHEETVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol WFRemoteWebSheetViewControllerDelegate;



@interface WFRemoteWebSheetViewController : UIRemoteViewController

@property (weak, nonatomic) NSObject<WFRemoteWebSheetViewControllerDelegate> *delegate; // ivar: _delegate


+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(id)arg0 ;
+(id)serviceViewControllerInterface;
-(void)_setupButtonListener;
-(void)_wheelChangedWithEvent:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;
-(void)webSheetViewControllerContentDidFinishLoading;
-(void)webSheetViewControllerContentDidStartLoading;
-(void)webSheetViewControllerContentReadyForPresentation;


@end


#endif
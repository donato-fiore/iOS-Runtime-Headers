// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSLOADINGVIEWCONTROLLER_IOS_H
#define VSLOADINGVIEWCONTROLLER_IOS_H

@class UIViewController, NSString, UIActivityIndicatorView;
@protocol VSLoadingViewController, VSLoadingViewControllerDelegate;



@interface VSLoadingViewController_iOS : UIViewController <VSLoadingViewController>



@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed; // ivar: _cancellationAllowed
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSLoadingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // ivar: _loadingIndicator
@property (readonly) Class superclass;


-(void)_cancelButtonPressed:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif
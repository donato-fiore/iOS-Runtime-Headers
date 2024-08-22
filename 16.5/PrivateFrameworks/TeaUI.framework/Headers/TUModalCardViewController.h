// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUMODALCARDVIEWCONTROLLER_H
#define TUMODALCARDVIEWCONTROLLER_H

@class UIViewController, UIVisualEffectView, UIButton, NSString;
@protocol UIPopoverPresentationControllerDelegate;



@interface TUModalCardViewController : UIViewController <UIPopoverPresentationControllerDelegate>



@property (readonly, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *onDisappear; // ivar: _onDisappear
@property (readonly, nonatomic) UIViewController *rootViewController; // ivar: _rootViewController
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesMaterialBackground; // ivar: _usesMaterialBackground


-(id)initWithRootViewController:(id)arg0 ;
-(id)initWithRootViewController:(id)arg0 useMaterialBackground:(BOOL)arg1 ;
-(void)_presentationController:(id)arg0 prepareAdaptivePresentationController:(id)arg1 ;
-(void)handleClose;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif
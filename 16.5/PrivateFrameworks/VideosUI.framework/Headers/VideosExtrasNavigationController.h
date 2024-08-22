// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIDEOSEXTRASNAVIGATIONCONTROLLER_H
#define VIDEOSEXTRASNAVIGATIONCONTROLLER_H

@class UINavigationController, UIViewController, NSString;
@protocol VideosExtrasLoadingViewDelegate, IKAppNavigationController;


#import "VideosExtrasLoadingView.h"
#import "VideosExtrasContext.h"
#import "VideosExtrasMainTemplateViewController.h"

@interface VideosExtrasNavigationController : UINavigationController <VideosExtrasLoadingViewDelegate, IKAppNavigationController>

 {
    VideosExtrasLoadingView *_loadingView;
    UIViewController *_emptyViewController;
    BOOL _clearStackOnPush;
}


@property (readonly, weak, nonatomic) VideosExtrasContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) VideosExtrasMainTemplateViewController *mainTemplateViewController;
@property (nonatomic) BOOL showsBuiltInNavControls; // ivar: _showsBuiltInNavControls
@property (readonly) Class superclass;


-(id)_viewControllerForDocument:(id)arg0 index:(*NSInteger)arg1 ;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)documents;
-(id)initWithContext:(id)arg0 ;
-(void)_dismissViewController:(id)arg0 ;
-(void)_installBackButtonOnNavigationItem:(id)arg0 withTitle:(id)arg1 ;
-(void)_installDoneButtonOnNavigationItem:(id)arg0 ;
-(void)_popViewControllerFromBackButton;
-(void)_presentDialogTemplate:(id)arg0 ;
-(void)applyMainTemplateOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)finalizeMainTemplateOffset:(BOOL)arg0 ;
-(void)insertDocument:(id)arg0 beforeDocument:(id)arg1 options:(id)arg2 ;
-(void)loadingView:(id)arg0 documentDidUpdate:(id)arg1 options:(id)arg2 ;
-(void)popDocument;
-(void)popToDocument:(id)arg0 ;
-(void)popToRootDocument;
-(void)pushDocument:(id)arg0 options:(id)arg1 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)removeDocument:(id)arg0 ;
-(void)replaceDocument:(id)arg0 withDocument:(id)arg1 options:(id)arg2 ;
-(void)setClearsStackOnNextPush;
-(void)setViewControllers:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willShowViewController:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif
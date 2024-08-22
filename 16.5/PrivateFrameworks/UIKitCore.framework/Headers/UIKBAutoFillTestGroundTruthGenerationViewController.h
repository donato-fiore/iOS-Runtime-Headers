// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBAUTOFILLTESTGROUNDTRUTHGENERATIONVIEWCONTROLLER_H
#define UIKBAUTOFILLTESTGROUNDTRUTHGENERATIONVIEWCONTROLLER_H

@class NSLayoutConstraint, NSString;
@protocol UIKBAutoFillTestTaggerViewDelegate, UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate;


#import "UIViewController.h"
#import "UIKBAutoFillTestExpectedResult.h"
#import "UIScrollView.h"
#import "UIKBAutoFillTestTaggerView.h"
#import "UIView.h"
#import "UIBarButtonItem.h"
#import "UIKBAutoFillTestViewController.h"

@interface UIKBAutoFillTestGroundTruthGenerationViewController : UIViewController <UIKBAutoFillTestTaggerViewDelegate>

 {
    UIKBAutoFillTestExpectedResult *_expectedResult;
    UIScrollView *_scrollView;
    UIKBAutoFillTestTaggerView *_taggerView;
    NSLayoutConstraint *_scrollViewBottomConstraint;
    UIView *_highlightView;
    UIView *_highlightBox;
    UIBarButtonItem *_doneBarButtonItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIKBAutoFillTestViewController *testViewController; // ivar: _testViewController


-(NSInteger)taggerView:(id)arg0 selectedTypeForFormRequest:(id)arg1 ;
-(NSInteger)taggerView:(id)arg0 selectedTypeForTextFieldRequest:(id)arg1 ;
-(id)initWithAutoFillTestViewController:(id)arg0 ;
-(void)_cancelBarButtonItemAction:(id)arg0 ;
-(void)_enumerateSubviewsOfRootView:(id)arg0 usingBlock:(id)arg1 ;
-(void)_moveTaggerHighlightViewOverView:(id)arg0 ;
-(void)_removeTaggerHighlightView;
-(void)taggerView:(id)arg0 didTagFormRequest:(id)arg1 withSelectedType:(NSInteger)arg2 ;
-(void)taggerView:(id)arg0 didTagTextFieldRequest:(id)arg1 withSelectedType:(NSInteger)arg2 ;
-(void)taggerView:(id)arg0 willTagRequest:(id)arg1 ;
-(void)taggerViewDidFinish:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif
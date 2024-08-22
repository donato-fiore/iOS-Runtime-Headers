// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIPRODUCTPAGEPLACEHOLDERVIEWCONTROLLER_H
#define SKUIPRODUCTPAGEPLACEHOLDERVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, NSString, UIScrollView;
@protocol UIScrollViewDelegate, SKUIProductPageChildViewController, SKUIProductPageChildViewControllerDelegate;


#import "SKUIProductPagePlaceholderScrollView.h"
#import "SKUIClientContext.h"
#import "SKUIColorScheme.h"
#import "SKUIProductPageHeaderViewController.h"

@interface SKUIProductPagePlaceholderViewController : UIViewController <UIScrollViewDelegate, SKUIProductPageChildViewController>

 {
    SKUIProductPagePlaceholderScrollView *_scrollView;
    NSInteger _style;
    UIActivityIndicatorView *_indicator;
}


@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (retain, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIProductPageChildViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController; // ivar: _headerViewController
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly) Class superclass;


-(id)initWithStyle:(NSInteger)arg0 ;
-(void)_addHeaderView;
-(void)loadView;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif
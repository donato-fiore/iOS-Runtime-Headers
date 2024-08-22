// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIMODERNCHARTSVIEW_H
#define SKUIMODERNCHARTSVIEW_H

@class UIView, _UIBackdropView, NSMutableArray, UIScrollView, NSArray, NSString;
@protocol UIScrollViewDelegate;



@interface SKUIModernChartsView : UIView <UIScrollViewDelegate>

 {
    _UIBackdropView *_backdropView;
    UIView *_headerView;
    NSMutableArray *_headerViews;
    BOOL _hideHeader;
    UIScrollView *_scrollView;
    NSArray *_viewControllers;
}


@property (readonly, nonatomic) _UIBackdropView *backdropView;
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_layoutHeadersWithColumnSize:(struct CGSize )arg0 ;
-(void)_layoutViewControllersWithColumnSize:(struct CGSize )arg0 contentInset:(struct UIEdgeInsets )arg1 ;
-(void)_updateHeader;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setColumnViewControllers:(id)arg0 ;


@end


#endif
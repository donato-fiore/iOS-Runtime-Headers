// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDRAWERPANESEARCHHEADERVIEW_H
#define WFDRAWERPANESEARCHHEADERVIEW_H

@class UIView, UIButton, NSString, UISearchBar;
@protocol WFDrawerPaneHeaderView, WFDrawerPaneHeaderViewDelegate;



@interface WFDrawerPaneSearchHeaderView : UIView <WFDrawerPaneHeaderView>



@property (readonly, weak, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFDrawerPaneHeaderViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) UISearchBar *searchBar; // ivar: _searchBar
@property (readonly, weak, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (readonly) Class superclass;


-(id)initWithSearchBar:(id)arg0 ;
-(id)layoutConstraints;


@end


#endif
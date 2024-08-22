// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHWIDGETSEARCHCONTROLLER_H
#define SBHWIDGETSEARCHCONTROLLER_H

@class UISearchController, NSMapTable, UIView;
@protocol SBIconListLayoutProvider;



@interface SBHWidgetSearchController : UISearchController {
    NSMapTable *_scrollProgressByClient;
}


@property (readonly, nonatomic) NSObject<SBIconListLayoutProvider> *listLayoutProvider; // ivar: _listLayoutProvider
@property (retain, nonatomic) UIView *searchBarBackgroundView; // ivar: _searchBarBackgroundView
@property (readonly, nonatomic) UIView *searchBarTextFieldBackgroundView; // ivar: _searchBarTextFieldBackgroundView


-(CGFloat)grabberTopSpacing;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_textFieldFont;
-(id)initWithListLayoutProvider:(id)arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_setupBarBackground;
-(void)_setupSearchBar;
-(void)_setupTextField;
-(void)_setupTextFieldBackground;
-(void)dealloc;
-(void)updateSearchBarBackgroundForScrollDistance:(CGFloat)arg0 forClient:(id)arg1 ;
-(void)updateSearchBarContentInsetsWithWidth:(CGFloat)arg0 ;


@end


#endif
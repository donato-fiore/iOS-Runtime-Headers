// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUISYSTEMINPUTASSISTANTPAGEVIEW_H
#define TUISYSTEMINPUTASSISTANTPAGEVIEW_H

@class UIView, NSString, UIScrollView;
@protocol UIScrollViewDelegate, TUISystemInputAssistantPageViewDelegate;


#import "TUIPredictionCellButton.h"

@interface TUISystemInputAssistantPageView : UIView <UIScrollViewDelegate>

 {
    NSUInteger _currentChevronStyle;
    BOOL _secondaryViewInitialized;
    BOOL _layoutIsDirty;
}


@property (retain, nonatomic) UIView *clipView; // ivar: _clipView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TUIPredictionCellButton *expandButton; // ivar: _expandButton
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesExpandButton; // ivar: _hidesExpandButton
@property (weak, nonatomic) NSObject<TUISystemInputAssistantPageViewDelegate> *pageViewDelegate; // ivar: _pageViewDelegate
@property (retain, nonatomic) UIView *primaryContainerView; // ivar: _primaryContainerView
@property (retain, nonatomic) UIView *primaryView; // ivar: _primaryView
@property (nonatomic) BOOL scrollEnabled; // ivar: _scrollEnabled
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) UIView *secondaryView; // ivar: _secondaryView
@property (nonatomic) BOOL secondaryViewVisible; // ivar: _secondaryViewVisible
@property (readonly) Class superclass;


-(NSUInteger)_expandChevronImageStyleForRenderConfig:(id)arg0 ;
-(id)_createExpandButtonIfNecessary;
-(id)imageSymbolConfigurationForAssistantItem;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_contentSize;
-(void)_checkOldBounds:(struct CGRect )arg0 forContentOffsetChangeWithNewBounds:(struct CGRect )arg1 ;
-(void)_setRenderConfig:(id)arg0 ;
-(void)_updateExpandButtonChevronImage;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNeedsLayout;
-(void)updateScrollEnabled;


@end


#endif
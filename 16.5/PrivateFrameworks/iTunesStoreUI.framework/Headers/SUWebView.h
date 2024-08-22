// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUWEBVIEW_H
#define SUWEBVIEW_H

@class UIWebView, UIColor, UIView, NSString;
@protocol SUWebViewDelegate;



@interface SUWebView : UIWebView {
    BOOL _isPinned;
    UIColor *_originalBackgroundColor;
    char _originalShowsBackgroundShadow;
    CGFloat _pinnedHeaderInsetAdjustment;
    UIView *_pinnedHeaderView;
    BOOL _scrollingDisabled;
    NSInteger _synchronousLayoutCount;
}


@property (nonatomic) NSObject<SUWebViewDelegate> *delegate;
@property (nonatomic, getter=isScrollingEnabled) BOOL scrollingEnabled;
@property (nonatomic) BOOL showsTopBackgroundShadow; // ivar: _showsTopBackgroundShadow
@property (readonly, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *topBackgroundColor; // ivar: _topBackgroundColor
@property (readonly, nonatomic) id *windowScriptObject;


-(BOOL)getStatusBarStyle:(*NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setPinnedHeaderView:(id)arg0 withTopInsetAdjustment:(CGFloat)arg1 ;
-(void)_setRichTextReaderViewportSettings;
-(void)beginSynchronousLayout;
-(void)endSynchronousLayout;
-(void)loadArchive:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)view:(id)arg0 didSetFrame:(struct CGRect )arg1 oldFrame:(struct CGRect )arg2 ;


@end


#endif
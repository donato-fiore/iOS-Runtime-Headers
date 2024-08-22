// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIWEBPDFVIEWHANDLER_H
#define UIWEBPDFVIEWHANDLER_H

@class NSMapTable, NSDictionary, NSArray, NSString;
@protocol UIWebPDFViewPrivateDelegate, UIDocumentPasswordViewDelegate, _UIRotatingAlertControllerDelegate, UIWebPDFViewDelegate, _UIWebDoubleTapDelegate, _UIWebRotationDelegate, UIWebPDFViewHandlerDelegate;

#import <Foundation/Foundation.h>

#import "UIWebPDFView.h"
#import "_UIHighlightView.h"
#import "UIWebPDFLabelView.h"
#import "UIDocumentPasswordView.h"
#import "WebPDFNSNumberFormatter.h"
#import "_UIRotatingAlertController.h"
#import "UIColor.h"
#import "UIView.h"

@interface UIWebPDFViewHandler : NSObject <UIWebPDFViewPrivateDelegate, UIDocumentPasswordViewDelegate, _UIRotatingAlertControllerDelegate, UIWebPDFViewDelegate, _UIWebDoubleTapDelegate, _UIWebRotationDelegate>

 {
    UIWebPDFView *_pdfView;
    CGFloat _initialZoomScale;
    _UIHighlightView *_linkHighlightView;
    UIWebPDFLabelView *_pageLabelView;
    BOOL _showsShadowsForHTMLContent;
    BOOL _cachedScrollViewShadowsState;
    UIDocumentPasswordView *_passwordEntryView;
    NSMapTable *_searchControllers;
    WebPDFNSNumberFormatter *_labelViewFormatter;
    _PDFHistoryItem _pendingHistoryItemRestore;
    _UIRotatingAlertController *_linkActionSheet;
    NSDictionary *_linkActionInfo;
    NSArray *_linkActions;
    CGRect _rectOfInterest;
    BOOL _rectOfInterestConsidersHeight;
}


@property (retain, nonatomic) UIColor *backgroundColorForUnRenderedContent; // ivar: _backgroundColorForUnRenderedContent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView *frontView;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideActivityIndicatorForUnRenderedContent; // ivar: _hideActivityIndicatorForUnRenderedContent
@property (nonatomic) BOOL hidePageViewsUntilReadyToRender; // ivar: _hidePageViewsUntilReadyToRender
@property (nonatomic) NSObject<UIWebPDFViewHandlerDelegate> *pdfHandlerDelegate; // ivar: _pdfHandlerDelegate
@property (readonly, nonatomic) UIWebPDFView *pdfView;
@property (nonatomic) BOOL scalesPageToFit; // ivar: _scalesPageToFit
@property (nonatomic) BOOL showPageLabels; // ivar: _showPageLabels
@property (readonly) Class superclass;


-(BOOL)considerHeightForDoubleTap;
-(BOOL)considerHeightOfRectOfInterestForRotation;
-(CGFloat)_pinValueForVerticalEdge:(NSUInteger)arg0 inScrollView:(id)arg1 ;
-(CGFloat)currentDocumentScale;
-(CGFloat)heightToKeepVisible;
-(CGFloat)minimumScaleForSize:(struct CGSize )arg0 ;
-(CGFloat)minimumVerticalContentOffset;
-(CGFloat)zoomedDocumentScale;
-(NSUInteger)_verticalEdgeForContentOffsetInScrollView:(id)arg0 ;
-(id)_absoluteUrlRelativeToDocumentURL:(id)arg0 ;
-(id)_actionForType:(int)arg0 ;
-(id)_actionForType:(int)arg0 withActionInfo:(id)arg1 ;
-(id)_actionsForInteractionInfo:(id)arg0 ;
-(id)_getLabelViewFormatter;
-(id)_getPDFDocumentViewForWebView:(id)arg0 ;
-(id)_scroller:(id)arg0 ;
-(id)contentView;
-(id)createLinkHighlight;
-(id)createPageLabel;
-(id)enclosingScrollView;
-(id)findOnPageHighlighter;
-(id)hostViewForSheet:(id)arg0 ;
-(id)init;
-(id)passwordForPDFView:(id)arg0 ;
-(id)searchControllerForHighlighter:(id)arg0 ;
-(struct ? )doubleTapScalesForSize:(struct CGSize )arg0 ;
-(struct ? )scalesForContainerSize:(struct CGSize )arg0 ;
-(struct CGRect )_frameForDocumentBounds:(struct CGRect )arg0 ;
-(struct CGRect )_rectForPasswordView:(id)arg0 ;
-(struct CGRect )_rectForPdfView:(struct CGRect )arg0 ;
-(struct CGRect )activeRectForRectOfInterest:(struct CGRect )arg0 ;
-(struct CGRect )initialPresentationRectInHostViewForSheet:(id)arg0 ;
-(struct CGRect )presentationRectInHostViewForSheet:(id)arg0 ;
-(struct CGRect )rectOfInterestForPoint:(struct CGPoint )arg0 ;
-(struct CGRect )rectOfInterestForRotation;
-(struct CGRect )visibleContentRect;
-(void)_adjustContentOffsetForKeyboardIfNeeded;
-(void)_adjustZoomScalesForScrollViewInternal:(id)arg0 ;
-(void)_completeLinkClickWithURL:(id)arg0 ;
-(void)_completeLinkClickWithURLString:(id)arg0 ;
-(void)_createPDFViewIfNeeded:(id)arg0 ;
-(void)_ensurePDFViewInHierarchyForWebDocView:(id)arg0 ;
-(void)_keyboardDidShow:(id)arg0 ;
-(void)_notifyDelegateDidClickLink:(id)arg0 ;
-(void)_notifyDelegateWillClickLink:(id)arg0 ;
-(void)_postdidDetermineDocumentBounds;
-(void)_removePDFViewIfWebDocViewIsNotPDF:(id)arg0 ;
-(void)_removePDFViewIfWebDocViewIsNotSamePDF:(id)arg0 ;
-(void)_replacePDFViewIfPresentWithWebDocView:(id)arg0 ;
-(void)_resultRects:(id)arg0 andResultViews:(id)arg1 forSearchResult:(id)arg2 inViewCoordinates:(id)arg3 ;
-(void)_setSearchControllerDocumentToSearch:(id)arg0 ;
-(void)_showLinkSheet:(id)arg0 ;
-(void)_showPasswordEntryViewForFile:(id)arg0 ;
-(void)_showPasswordErrorAlert;
-(void)_updateViewHierarchyForDocumentView:(id)arg0 ignoreIfSame:(BOOL)arg1 ;
-(void)adjustZoomScalesForScrollView;
-(void)clearActionSheet;
-(void)clearAllViews;
-(void)clearLinkHighlight;
-(void)clearPageLabel;
-(void)clearSearchControllerForHighlighter:(id)arg0 ;
-(void)dealloc;
-(void)didBeginEditingPassword:(id)arg0 inView:(id)arg1 ;
-(void)didDetermineDocumentBounds:(id)arg0 ;
-(void)didEndEditingPassword:(id)arg0 inView:(id)arg1 ;
-(void)didReceiveMemoryWarning:(id)arg0 ;
-(void)didScroll:(id)arg0 ;
-(void)ensureCorrectPagesAreInstalled:(BOOL)arg0 ;
-(void)handleLinkClick:(id)arg0 inRect:(struct CGRect )arg1 ;
-(void)handleLongPressOnLink:(id)arg0 atPoint:(struct CGPoint )arg1 inRect:(struct CGRect )arg2 contentRect:(struct CGRect )arg3 ;
-(void)handleScrollToAnchor:(id)arg0 ;
-(void)highlightRect:(struct CGRect )arg0 ;
-(void)pdfView:(id)arg0 zoomToRect:(struct CGRect )arg1 forPoint:(struct CGPoint )arg2 considerHeight:(BOOL)arg3 ;
-(void)performAction:(id)arg0 fromAlertController:(id)arg1 ;
-(void)removeViewFromSuperview;
-(void)resetZoom:(id)arg0 ;
-(void)restoreStateFromHistoryItem:(id)arg0 forWebView:(id)arg1 ;
-(void)restoreStateFromPendingHistoryItem;
-(void)revealSearchResult:(id)arg0 andZoomIn:(BOOL)arg1 ;
-(void)rotateEnclosingScrollViewToFrame:(struct CGRect )arg0 ;
-(void)saveStateToHistoryItem:(id)arg0 forWebView:(id)arg1 ;
-(void)scrollToPageNumber:(NSInteger)arg0 animate:(BOOL)arg1 ;
-(void)updateBoundariesOfScrollView:(id)arg0 withScales:(struct ? )arg1 ;
-(void)updatePageNumberLabelWithUserScrolling:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateViewHierarchyForDocumentViewLoadComplete:(id)arg0 ;
-(void)updateViewHierarchyForDocumentViewNewLoad:(id)arg0 ;
-(void)updateViewHierarchyForDocumentViewTabSwitch:(id)arg0 ;
-(void)updateViewHierarchyForDocumentViewTabSwitch:(id)arg0 restoringZoomScale:(CGFloat)arg1 andScrollPt:(struct CGPoint )arg2 ;
-(void)updateViewHierarchyForFirstNonEmptyLayoutInFrame:(id)arg0 ;
-(void)updateViewSettings;
-(void)userDidEnterPassword:(id)arg0 forPasswordView:(id)arg1 ;


@end


#endif
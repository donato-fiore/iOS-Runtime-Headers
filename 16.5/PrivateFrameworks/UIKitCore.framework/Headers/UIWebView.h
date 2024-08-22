// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIWEBVIEW_H
#define UIWEBVIEW_H

@class NSString, NSURLRequest;
@protocol WebPolicyDelegate, NSCoding, UIScrollViewDelegate, UIWebViewDelegate;


#import "UIView.h"
#import "UIWebViewInternal.h"
#import "UIScrollView.h"

@interface UIWebView : UIView <WebPolicyDelegate, NSCoding, UIScrollViewDelegate>

 {
    UIWebViewInternal *_internal;
}


@property (nonatomic) BOOL allowsInlineMediaPlayback;
@property (nonatomic) BOOL allowsLinkPreview;
@property (nonatomic) BOOL allowsPictureInPictureMediaPlayback;
@property (readonly, nonatomic, getter=canGoBack) BOOL canGoBack;
@property (readonly, nonatomic, getter=canGoForward) BOOL canGoForward;
@property (nonatomic) NSUInteger dataDetectorTypes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<UIWebViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL detectsPhoneNumbers;
@property (nonatomic) CGFloat gapBetweenPages;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL keyboardDisplayRequiresUserAction;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic) BOOL mediaPlaybackAllowsAirPlay;
@property (nonatomic) BOOL mediaPlaybackRequiresUserAction;
@property (readonly, nonatomic) NSUInteger pageCount;
@property (nonatomic) CGFloat pageLength;
@property (nonatomic) NSInteger paginationBreakingMode;
@property (nonatomic) NSInteger paginationMode;
@property (readonly, nonatomic) NSURLRequest *request;
@property (nonatomic) BOOL scalesPageToFit;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesIncrementalRendering;


+(id)_relativePathFromAbsolutePath:(id)arg0 removingPathComponents:(NSUInteger)arg1 ;
+(void)_fixPathsForSandboxDirectoryChange;
+(void)_updatePersistentStoragePaths;
+(void)initialize;
-(BOOL)_allowsPictureInPictureVideo;
-(BOOL)_alwaysConstrainsScale;
-(BOOL)_alwaysDispatchesScrollEvents;
-(BOOL)_appliesExclusiveTouchToSubviewTree;
-(BOOL)_effectiveAppearanceIsDark;
-(BOOL)_effectiveTraitsUseElevatedUserInterfaceLevel;
-(BOOL)_paginationBehavesLikeColumns;
-(BOOL)_shouldUseViewForSceneDraggingBehavior;
-(BOOL)_webView:(id)arg0 previewIsAllowedForPosition:(struct CGPoint )arg1 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)webView:(id)arg0 resource:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 forDataSource:(id)arg3 ;
-(BOOL)webView:(id)arg0 runJavaScriptConfirmPanelWithMessage:(id)arg1 initiatedByFrame:(id)arg2 ;
-(NSUInteger)_audioSessionCategoryOverride;
-(id)_browserView;
-(id)_documentView;
-(id)_initWithFrame:(struct CGRect )arg0 enableReachability:(BOOL)arg1 ;
-(id)_initWithWebView:(id)arg0 ;
-(id)_networkInterfaceName;
-(id)_pdfViewHandler;
-(id)_webView:(id)arg0 presentationRectsForPreview:(id)arg1 ;
-(id)_webView:(id)arg0 presentationSnapshotForPreview:(id)arg1 ;
-(id)_webView:(id)arg0 previewViewControllerForURL:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)stringByEvaluatingJavaScriptFromString:(id)arg0 ;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(id)webThreadWebView:(id)arg0 resource:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 fromDataSource:(id)arg4 ;
-(id)webView:(id)arg0 connectionPropertiesForResource:(id)arg1 dataSource:(id)arg2 ;
-(id)webView:(id)arg0 identifierForInitialRequest:(id)arg1 fromDataSource:(id)arg2 ;
-(id)webView:(id)arg0 runJavaScriptTextInputPanelWithPrompt:(id)arg1 defaultText:(id)arg2 initiatedByFrame:(id)arg3 ;
-(struct CGImage *)newSnapshotWithRect:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_addShortcut:(id)arg0 ;
-(void)_beginRotation;
-(void)_define:(id)arg0 ;
-(void)_didCompleteScrolling;
-(void)_didRotate:(id)arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_finishRotation;
-(void)_frameOrBoundsChanged;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_reportError:(id)arg0 ;
-(void)_rescaleDocument;
-(void)_setAllowsPictureInPictureVideo:(BOOL)arg0 ;
-(void)_setAlwaysConstrainsScale:(BOOL)arg0 ;
-(void)_setAlwaysDispatchesScrollEvents:(BOOL)arg0 ;
-(void)_setAudioSessionCategoryOverride:(NSUInteger)arg0 ;
-(void)_setDrawInWebThread:(BOOL)arg0 ;
-(void)_setDrawsCheckeredPattern:(BOOL)arg0 ;
-(void)_setNetworkInterfaceName:(id)arg0 ;
-(void)_setOverridesOrientationChangeEventHandling:(BOOL)arg0 ;
-(void)_setPaginationBehavesLikeColumns:(BOOL)arg0 ;
-(void)_setRichTextReaderViewportSettings;
-(void)_setSelectionEnabled:(BOOL)arg0 ;
-(void)_setWebSelectionEnabled:(BOOL)arg0 ;
-(void)_share:(id)arg0 ;
-(void)_translate:(id)arg0 ;
-(void)_updateBrowserViewExposedScrollViewRect;
-(void)_updateCheckeredPattern;
-(void)_updateOpaqueAndBackgroundColor;
-(void)_updateRequest;
-(void)_updateScrollViewInsetAdjustmentBehavior;
-(void)_updateScrollerViewForInputView:(id)arg0 ;
-(void)_updateViewSettings;
-(void)_webView:(id)arg0 commitPreview:(id)arg1 ;
-(void)_webView:(id)arg0 didChangeAvoidsUnsafeArea:(BOOL)arg1 ;
-(void)_webView:(id)arg0 didDismissPreview:(id)arg1 committing:(BOOL)arg2 ;
-(void)_webView:(id)arg0 willPresentPreview:(id)arg1 ;
-(void)_webViewCommonInitWithWebView:(id)arg0 scalesPageToFit:(BOOL)arg1 ;
-(void)copy:(id)arg0 ;
-(void)dealloc;
-(void)decodeRestorableStateWithCoder:(id)arg0 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)goBack;
-(void)goForward;
-(void)loadData:(id)arg0 MIMEType:(id)arg1 textEncodingName:(id)arg2 baseURL:(id)arg3 ;
-(void)loadHTMLString:(id)arg0 baseURL:(id)arg1 ;
-(void)loadRequest:(id)arg0 ;
-(void)reload;
-(void)restoreStateFromHistoryItem:(id)arg0 forWebView:(id)arg1 ;
-(void)saveStateToHistoryItem:(id)arg0 forWebView:(id)arg1 ;
-(void)scrollViewDidChangeAdjustedContentInset:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(CGFloat)arg2 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidScrollToTop:(id)arg0 ;
-(void)scrollViewDidZoom:(id)arg0 ;
-(void)scrollViewWasRemoved:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1 ;
-(void)select:(id)arg0 ;
-(void)selectAll:(id)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setOpaque:(BOOL)arg0 ;
-(void)stopLoading;
-(void)view:(id)arg0 didSetFrame:(struct CGRect )arg1 oldFrame:(struct CGRect )arg2 ;
-(void)webView:(id)arg0 decidePolicyForGeolocationRequestFromOrigin:(id)arg1 frame:(id)arg2 listener:(id)arg3 ;
-(void)webView:(id)arg0 decidePolicyForMIMEType:(id)arg1 request:(id)arg2 frame:(id)arg3 decisionListener:(id)arg4 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 request:(id)arg2 frame:(id)arg3 decisionListener:(id)arg4 ;
-(void)webView:(id)arg0 decidePolicyForNewWindowAction:(id)arg1 request:(id)arg2 newFrameName:(id)arg3 decisionListener:(id)arg4 ;
-(void)webView:(id)arg0 didChangeLocationWithinPageForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didClearWindowObject:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didCommitLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didFailLoadWithError:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalLoadWithError:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didFinishLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didFirstLayoutInFrame:(id)arg1 ;
-(void)webView:(id)arg0 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didReceiveTitle:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didStartProvisionalLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg1 totalSpaceNeeded:(NSUInteger)arg2 ;
-(void)webView:(id)arg0 frame:(id)arg1 exceededDatabaseQuotaForSecurityOrigin:(id)arg2 database:(id)arg3 ;
-(void)webView:(id)arg0 printFrameView:(id)arg1 ;
-(void)webView:(id)arg0 resource:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 fromDataSource:(id)arg3 ;
-(void)webView:(id)arg0 resource:(id)arg1 didFailLoadingWithError:(id)arg2 fromDataSource:(id)arg3 ;
-(void)webView:(id)arg0 resource:(id)arg1 didFinishLoadingFromDataSource:(id)arg2 ;
-(void)webView:(id)arg0 resource:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 fromDataSource:(id)arg3 ;
-(void)webView:(id)arg0 runJavaScriptAlertPanelWithMessage:(id)arg1 initiatedByFrame:(id)arg2 ;
-(void)webView:(id)arg0 unableToImplementPolicyWithError:(id)arg1 frame:(id)arg2 ;
-(void)webViewClose:(id)arg0 ;
-(void)webViewMainFrameDidCommitLoad:(id)arg0 ;
-(void)webViewMainFrameDidFailLoad:(id)arg0 withError:(id)arg1 ;
-(void)webViewMainFrameDidFinishLoad:(id)arg0 ;
-(void)webViewMainFrameDidFirstVisuallyNonEmptyLayoutInFrame:(id)arg0 ;
-(void)webViewSupportedOrientationsUpdated:(id)arg0 ;


@end


#endif
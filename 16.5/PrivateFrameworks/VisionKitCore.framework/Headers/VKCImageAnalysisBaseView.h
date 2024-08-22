// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCIMAGEANALYSISBASEVIEW_H
#define VKCIMAGEANALYSISBASEVIEW_H

@class UIFont, NSString, UIImage, UIImageView, NSArray, NSIndexSet, UIScrollView, UILabel, UIView;
@protocol VKCImageBaseOverlayViewDelegate, VKCImageDataDetectorViewDelegate, VKCImageTextSelectionViewDelegate, VKCImageVisualSearchViewDelegate, VKCImageCustomHighlightViewDelegate, VKCImageSubjectHighlightViewDelegate, VKCImageSubjectBaseViewDelegate, VKAnalysisDebugInfoProvider, VKCActionInfoButtonDelegate, _UIScrollViewScrollObserver, OS_dispatch_queue, VKCImageAnalysisBaseViewDelegate;


#import "VKPlatformView.h"
#import "VKCActionInfoView.h"
#import "VKCImageAnalysisResult.h"
#import "VKCActionInfoButton.h"
#import "VKCImageDataDetectorView.h"
#import "VKCAnalysisDebugMenuProvider.h"
#import "VKCRemoveBackgroundRequest.h"
#import "VKCRemoveBackgroundResult.h"
#import "VKCImageCustomHighlightView.h"
#import "VKCRemoveBackgroundRequestHandler.h"
#import "VKTextRange.h"
#import "VKCImageSubjectHighlightView.h"
#import "VKCImageTextSelectionView.h"
#import "VKCImageTranslationView.h"
#import "VKCImageVisualSearchView.h"

@interface VKCImageAnalysisBaseView : VKPlatformView <VKCImageBaseOverlayViewDelegate, VKCImageDataDetectorViewDelegate, VKCImageTextSelectionViewDelegate, VKCImageVisualSearchViewDelegate, VKCImageCustomHighlightViewDelegate, VKCImageSubjectHighlightViewDelegate, VKCImageSubjectBaseViewDelegate, VKAnalysisDebugInfoProvider, VKCActionInfoButtonDelegate, _UIScrollViewScrollObserver>



@property (nonatomic) BOOL _hasActiveTextSelection; // ivar: __hasActiveTextSelection
@property (retain, nonatomic) UIFont *actionInfoCustomFont; // ivar: _actionInfoCustomFont
@property (nonatomic) BOOL actionInfoHiddenForZoomAnimation; // ivar: _actionInfoHiddenForZoomAnimation
@property (retain, nonatomic) VKCActionInfoView *actionInfoView; // ivar: _actionInfoView
@property (nonatomic) NSUInteger activeInteractionTypes; // ivar: _activeInteractionTypes
@property (retain, nonatomic) VKCImageAnalysisResult *analysisResult; // ivar: _analysisResult
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // ivar: _backgroundQueue
@property (nonatomic) NSUInteger checkForQuickActionsIndex; // ivar: _checkForQuickActionsIndex
@property (nonatomic) BOOL clientDidSetNormalizedRect; // ivar: _clientDidSetNormalizedRect
@property (nonatomic) CGRect contentsRect; // ivar: _contentsRect
@property (retain, nonatomic) VKCActionInfoButton *copyAllQuickAction; // ivar: _copyAllQuickAction
@property (readonly, nonatomic) CGFloat currentExtraOffsetForViewScale;
@property (copy, nonatomic) NSString *customAnalyticsIdentifier; // ivar: _customAnalyticsIdentifier
@property (retain, nonatomic) UIImage *customImageForRemoveBackground; // ivar: _customImageForRemoveBackground
@property (nonatomic) NSUInteger dataDetectorTypes; // ivar: _dataDetectorTypes
@property (retain, nonatomic) VKCImageDataDetectorView *dataDetectorView; // ivar: _dataDetectorView
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIImageView *debugImageView; // ivar: _debugImageView
@property (retain, nonatomic) VKCAnalysisDebugMenuProvider *debugMenuProvider; // ivar: _debugMenuProvider
@property (weak, nonatomic) NSObject<VKCImageAnalysisBaseViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAddVisualSearchCornerView; // ivar: _didAddVisualSearchCornerView
@property (nonatomic) BOOL didLogContentsRectError; // ivar: _didLogContentsRectError
@property (readonly, nonatomic) NSArray *filteredNormalizedRectangleQuads;
@property (readonly, nonatomic) NSArray *filteredRectangleQuads;
@property (nonatomic) CGRect frameWhenResigningActive; // ivar: _frameWhenResigningActive
@property (readonly, nonatomic) BOOL hasActiveTextSelection;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlightSelectableItems;
@property (retain, nonatomic) NSArray *highlightStrings; // ivar: _highlightStrings
@property (retain, nonatomic) NSIndexSet *highlightStringsIndexSet; // ivar: _highlightStringsIndexSet
@property (retain, nonatomic) VKCRemoveBackgroundRequest *inProcessMaskRemoveBackgroundRequest; // ivar: _inProcessMaskRemoveBackgroundRequest
@property (nonatomic) BOOL isAnalysisVisible; // ivar: _isAnalysisVisible
@property (nonatomic) BOOL isPublicAPI; // ivar: _isPublicAPI
@property (nonatomic) BOOL isShowingTranslation; // ivar: _isShowingTranslation
@property (readonly, nonatomic) BOOL isSubjectAnalysisComplete;
@property (readonly, nonatomic) BOOL isSubjectHighlightAvailable;
@property (readonly, nonatomic) NSArray *keyPathsAffectingContentMode;
@property (weak, nonatomic) id *loggingParentObject; // ivar: _loggingParentObject
@property (nonatomic) BOOL longPressDataDetectorsInTextMode; // ivar: _longPressDataDetectorsInTextMode
@property (retain, nonatomic) VKCRemoveBackgroundResult *maskRemoveBackgroundResult; // ivar: _maskRemoveBackgroundResult
@property (nonatomic) CGRect normalizedVisibleRect; // ivar: _normalizedVisibleRect
@property (readonly, nonatomic) NSArray *quickActions; // ivar: _quickActions
@property (readonly, nonatomic) NSArray *rawRectangleObservations;
@property (retain, nonatomic) VKCImageCustomHighlightView *regexHighlightView; // ivar: _regexHighlightView
@property (readonly, nonatomic) VKCImageCustomHighlightView *regexHighlightViewIfExists;
@property (retain, nonatomic) VKCRemoveBackgroundRequestHandler *removeBackgroundRequestHandler; // ivar: _removeBackgroundRequestHandler
@property (weak, nonatomic) UIScrollView *scrollViewToObserve; // ivar: _scrollViewToObserve
@property (nonatomic) NSInteger scrollViewToObserveCount; // ivar: _scrollViewToObserveCount
@property (readonly, nonatomic) _NSRange selectedRange;
@property (retain, nonatomic) VKTextRange *selectedTextRangeBeforeDataDetectorMenu; // ivar: _selectedTextRangeBeforeDataDetectorMenu
@property (nonatomic) BOOL stringHighlightsActive; // ivar: _stringHighlightsActive
@property (readonly, nonatomic) CGRect subjectFrame;
@property (nonatomic) BOOL subjectHighlightActive;
@property (nonatomic) BOOL subjectHighlightFeatureFlagEnabled; // ivar: _subjectHighlightFeatureFlagEnabled
@property (retain, nonatomic) VKCImageSubjectHighlightView *subjectHighlightView; // ivar: _subjectHighlightView
@property (readonly, nonatomic) NSUInteger subjectRequestStatus;
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *textInfoView; // ivar: _textInfoView
@property (retain, nonatomic) VKCImageTextSelectionView *textSelectionView; // ivar: _textSelectionView
@property (readonly, nonatomic) CGFloat totalBoundingBoxTextArea;
@property (readonly, nonatomic) CGFloat totalQuadTextArea;
@property (retain, nonatomic) VKCActionInfoButton *translateQuickAction; // ivar: _translateQuickAction
@property (retain, nonatomic) VKCImageTranslationView *translationView; // ivar: _translationView
@property (weak, nonatomic) UIView *viewForObservingContentMode; // ivar: _viewForObservingContentMode
@property (readonly, nonatomic) CGRect visibleImageRect;
@property (nonatomic) VKVisibleTextAreaInfo visibleTextAreaInfo; // ivar: _visibleTextAreaInfo
@property (nonatomic) BOOL visibleTextAreaInfoIsValid; // ivar: _visibleTextAreaInfoIsValid
@property (retain, nonatomic) VKCImageVisualSearchView *visualSearchView; // ivar: _visualSearchView
@property (nonatomic) BOOL wantsAutomaticContentsRectCalculation; // ivar: _wantsAutomaticContentsRectCalculation


+(id)keyPathsForValuesAffectingContentsRect;
+(id)keyPathsForValuesAffectingHasActiveTextSelection;
-(BOOL)analysisContainsTextAtPoint:(struct CGPoint )arg0 ;
-(BOOL)analysisIsAllDataDetectors;
-(BOOL)containsActionInfoItemAtPoint:(struct CGPoint )arg0 ;
-(BOOL)containsImageSubjectAtPoint:(struct CGPoint )arg0 ;
-(BOOL)containsInteractiveItemAtPoint:(struct CGPoint )arg0 ;
-(BOOL)containsTextAtPoint:(struct CGPoint )arg0 ;
-(BOOL)containsVisualSearchItemAtPoint:(struct CGPoint )arg0 ;
-(BOOL)dataDetectorView:(id)arg0 dataDetectorInteractionShouldBeginAtPoint:(struct CGPoint )arg1 ;
-(BOOL)isSubjectHighlightShowingLivePhoto:(id)arg0 delegateHasImplementation:(*BOOL)arg1 ;
-(BOOL)subjectHighlightView:(id)arg0 shouldBeginInteractionAtPoint:(struct CGPoint )arg1 withType:(NSUInteger)arg2 ;
-(BOOL)textSelectionView:(id)arg0 dataDetectorExistsAtPoint:(struct CGPoint )arg1 ;
-(BOOL)textSelectionView:(id)arg0 shouldBeginAtPoint:(struct CGPoint )arg1 ;
-(BOOL)visualSearchItemView:(id)arg0 shouldBeginAtPoint:(struct CGPoint )arg1 ;
-(NSUInteger)dataDetectorTypeAtPoint:(struct CGPoint )arg0 ;
-(id)dataDetectorElementAtPoint:(struct CGPoint )arg0 fromTextSelectionView:(id)arg1 ;
-(id)dataDetectorElementPoint:(struct CGPoint )arg0 requestingView:(id)arg1 ;
-(id)disposableFolderPath;
-(id)disposableSubjectPNGURL;
-(id)generateSubjectImage;
-(id)highlightView:(id)arg0 selectionRectsForRanges:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 usingSubviewsOf:(id)arg2 ;
-(id)init;
-(id)nonTextNormalizedHighlightAllQuadsForTextSelectionView:(id)arg0 ;
-(id)presentingViewControllerForImageAnalysisInteraction;
-(id)presentingViewControllerForInteractionWithDataDetectorView:(id)arg0 ;
-(id)presentingViewControllerForSubjectHighlightView:(id)arg0 ;
-(id)previewForDataDetectorElementView:(id)arg0 ;
-(id)previewImageForDataDetectorElementView:(id)arg0 ;
-(id)summaryDescription;
-(id)tempPNGURLForSubjectHighlightView:(id)arg0 ;
-(id)textSelectionView:(id)arg0 closestVisualSearchItemForRange:(id)arg1 ;
-(id)viewForImageSnapshotForTextSelectionView:(id)arg0 ;
-(struct CGRect )calculateNormalizedVisibleRect;
-(struct VKVisibleTextAreaInfo )calculateVisibleTextAreaInfo;
-(void)_logVisualSearchHintAvailabilityUpdate;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)_updateAnalysisVisibility;
-(void)actionInfoButtonDidActivatePrimaryAction:(id)arg0 ;
-(void)addMetadataToVSFeedbackItem:(id)arg0 ;
-(void)analysisDidUpdateForTypes:(NSUInteger)arg0 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)automaticallyShowVisualSearchResultsIfApplicable;
-(void)beginImageSubjectAnalysisIfNecessary;
-(void)beginImageSubjectAnalysisWithDelayIfNecessary;
-(void)checkForTranslationResultsWithCompletion:(id)arg0 ;
-(void)clearDataDetectorViewIfNecessary;
-(void)clearRegexHighlightsAnimated:(BOOL)arg0 updateActiveTypes:(BOOL)arg1 ;
-(void)clearSelection;
-(void)clearStringHighlightsAnimated:(BOOL)arg0 ;
-(void)clearTextSelectionViewIfNecessary;
-(void)clearTranslationViewIfNecessary;
-(void)clearVisualSearchViewIfNecessary;
-(void)configureForActiveTypes:(NSUInteger)arg0 ;
-(void)configureForCurrentActiveInteractionTypes;
-(void)convertButtonPressed:(id)arg0 ;
-(void)copyAllToClipboard;
-(void)copyButtonPressed:(id)arg0 ;
-(void)dataDetectorView:(id)arg0 analyticsEventOccured:(id)arg1 ;
-(void)dealloc;
-(void)debugButtonDidTap:(id)arg0 ;
-(void)deleteDisposableFiles;
-(void)didMoveToWindow;
-(void)generateTextualVisualSearchResultForQueryInfo:(id)arg0 completionHandler:(id)arg1 ;
-(void)generateVisualSearchResultForItems:(id)arg0 queryID:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)highlightMatchesWithString:(id)arg0 animated:(BOOL)arg1 ;
-(void)invalidateVisibleTextAreaInfo;
-(void)layoutSubviews;
-(void)loadImageSubjectIfAvailableWithCompletion:(id)arg0 ;
-(void)loadQuickActionsIfNecessary;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)resetSelection;
-(void)safeAreaInsetsDidChange;
-(void)scrollViewDidChange:(id)arg0 ;
-(void)scrollViewDidZoomToUnitRect:(struct CGRect )arg0 ;
-(void)scrollViewWillChange:(id)arg0 ;
-(void)selectAll;
-(void)sendActiveInteractionTypesDidChangeAnalyticsEvent:(NSInteger)arg0 ;
-(void)sendAnalysisDidChangeAnalyticsEvent;
-(void)sendQuickActionAnalyticsWithDidBecomeVisible:(BOOL)arg0 ;
-(void)sendVisualSearchAnalyticsWithDidBecomeActive:(BOOL)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)showTopVisualSearchResult;
-(void)subjectBaseView:(id)arg0 analyticsEventOccurred:(id)arg1 ;
-(void)subjectBaseViewGlowLayerActiveDidChange:(id)arg0 ;
-(void)subjectBaseViewViewDidBeginSubjectAnalysis:(id)arg0 ;
-(void)subjectBaseViewViewDidCompletePath:(id)arg0 ;
-(void)subjectBaseViewViewDidCompleteSubjectAnalysis:(id)arg0 ;
-(void)subjectHighlightView:(id)arg0 livePhotoShouldPlay:(BOOL)arg1 ;
-(void)subjectHighlightView:(id)arg0 willBeginInteractionAtPoint:(struct CGPoint )arg1 withType:(NSUInteger)arg2 ;
-(void)submitVisualSearchUserFeedbackForReportIdentifier:(id)arg0 userFeedbackPayload:(id)arg1 sfReportData:(id)arg2 ;
-(void)tearDownQuickActions;
-(void)textSelectionView:(id)arg0 analyticsEventOccured:(id)arg1 ;
-(void)textSelectionView:(id)arg0 boundsDidChangeFromRect:(struct CGRect )arg1 toRect:(struct CGRect )arg2 ;
-(void)textSelectionView:(id)arg0 prepareForCalloutAction:(SEL)arg1 completion:(id)arg2 ;
-(void)textSelectionView:(id)arg0 requestsDataDetectorActivationAtPoint:(struct CGPoint )arg1 ;
-(void)textSelectionView:(id)arg0 selectionDidChange:(id)arg1 ;
-(void)translateButtonPressed:(id)arg0 ;
-(void)triggerTapToRadar;
-(void)updateAndNotifyAfterValidNormalizedVisibleRectChange;
-(void)updateAndNotifyAfterValidNormalizedVisibleRectChangeIfNecessary;
-(void)updateCurrentDisplayedViewContentsRect;
-(void)updateDebugButtonIfNecessary;
-(void)updateNormalizedVisibleRect;
-(void)updateNormalizedVisibleRectIfNecessary;
-(void)updateSubviewsToMatchBounds;
-(void)useInteractionOptions:(NSUInteger)arg0 ;
-(void)visualSearchItemView:(id)arg0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect )arg1 ;
-(void)visualSearchItemViewDidDismissController:(id)arg0 ;
-(void)visualSearchView:(id)arg0 analyticsEventOccured:(id)arg1 ;
-(void)willDismissMenuForDataDetectorView:(id)arg0 ;
-(void)willDisplayMenuForActionInfoButton:(id)arg0 ;
-(void)willDisplayMenuForDataDetectorView:(id)arg0 ;
-(void)willHideMenuForActionInfoButton:(id)arg0 ;


@end


#endif
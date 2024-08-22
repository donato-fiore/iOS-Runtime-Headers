// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCIMAGEANALYSISINTERACTION_H
#define VKCIMAGEANALYSISINTERACTION_H

@class NSArray, NSString, UIImage, UIFont, UIActivity, UIGestureRecognizer, UIView;
@protocol VKCImageAnalysisBaseViewDelegate, VKCVisualSearchCornerViewDelegate, UIInteraction, VKInteractionAnalyticsDelegate, VKCImageAnalysisInteractionDelegate;

#import <Foundation/Foundation.h>

#import "VKImageAnalysisButton.h"
#import "VKCVisualSearchCornerView.h"
#import "VKCActionInfoView.h"
#import "VKCImageAnalysis.h"
#import "VKImageAnalysisBarButtonItem.h"
#import "VKAnalyticsProcessor.h"
#import "VKAnalyticsSessionAccumulator.h"
#import "VKCImageAnalysisBaseView.h"

@interface VKCImageAnalysisInteraction : NSObject <VKCImageAnalysisBaseViewDelegate, VKCVisualSearchCornerViewDelegate, UIInteraction>



@property (readonly, copy, nonatomic) NSArray *_actionInfoButtons;
@property (weak, nonatomic) NSObject<VKInteractionAnalyticsDelegate> *_analyticsDelegate; // ivar: __analyticsDelegate
@property (copy, nonatomic) NSString *_customAnalyticsIdentifier;
@property (nonatomic) BOOL _highlightSelectableItems;
@property (nonatomic) BOOL _isInPublicAutomaticMode; // ivar: __isInPublicAutomaticMode
@property (nonatomic) BOOL _isPublicAPI;
@property (nonatomic) BOOL _manuallyManagesActionInfoButtons; // ivar: __manuallyManagesActionInfoButtons
@property (retain, nonatomic) UIImage *_photosImageForRemoveBackground;
@property (nonatomic) BOOL _publicAPIDelegateExists; // ivar: __publicAPIDelegateExists
@property (retain, nonatomic) NSArray *actionButtons; // ivar: _actionButtons
@property (retain, nonatomic) VKImageAnalysisButton *actionInfoAnalysisButton; // ivar: _actionInfoAnalysisButton
@property (readonly, nonatomic) VKImageAnalysisButton *actionInfoAnalysisButtonIfExists;
@property (retain, nonatomic) VKCVisualSearchCornerView *actionInfoCornerButtonView; // ivar: _actionInfoCornerButtonView
@property (readonly, nonatomic) VKCVisualSearchCornerView *actionInfoCornerButtonViewIfExists;
@property (retain, nonatomic) UIFont *actionInfoCustomFont; // ivar: _actionInfoCustomFont
@property (nonatomic) UIEdgeInsets actionInfoEdgeInsets;
@property (nonatomic) BOOL actionInfoLayoutUpdatesSuspended;
@property (nonatomic) BOOL actionInfoLiveTextButtonDisabled;
@property (nonatomic) BOOL actionInfoQuickActionsDisabled;
@property (retain, nonatomic) VKCActionInfoView *actionInfoView; // ivar: _actionInfoView
@property (nonatomic) BOOL actionInfoViewHidden; // ivar: _actionInfoViewHidden
@property (nonatomic) BOOL actionInfoVisualSearchCornerViewDisabled;
@property (nonatomic) NSUInteger activeInteractionTypes;
@property (nonatomic) BOOL allowLongPressForDataDetectorsInTextMode;
@property (retain, nonatomic) VKCImageAnalysis *analysis; // ivar: _analysis
@property (retain, nonatomic) VKImageAnalysisBarButtonItem *analysisBarButtonItem; // ivar: _analysisBarButtonItem
@property (retain, nonatomic) VKImageAnalysisButton *analysisButton; // ivar: _analysisButton
@property (nonatomic) BOOL analysisButtonPrefersDarkGlyphWhenSelected;
@property (nonatomic) BOOL analysisButtonRequiresVisibleContentGating; // ivar: _analysisButtonRequiresVisibleContentGating
@property (retain, nonatomic) VKAnalyticsProcessor *analyticsProcessor; // ivar: _analyticsProcessor
@property (retain, nonatomic) VKAnalyticsSessionAccumulator *analyticsSession; // ivar: _analyticsSession
@property (nonatomic) NSUInteger analyticsTimeoutIndex; // ivar: _analyticsTimeoutIndex
@property (nonatomic) BOOL automaticallyShowVisualSearchResults; // ivar: _automaticallyShowVisualSearchResults
@property (retain, nonatomic) VKCImageAnalysisBaseView *baseView; // ivar: _baseView
@property (retain, nonatomic) NSArray *baseViewConstraints; // ivar: _baseViewConstraints
@property (nonatomic) BOOL buttonsVisible; // ivar: _buttonsVisible
@property (readonly, nonatomic) CGRect contentsRect;
@property (nonatomic) NSUInteger dataDetectorTypes;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VKCImageAnalysisInteractionDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL deriveQuickActionsVisibilityFromState; // ivar: _deriveQuickActionsVisibilityFromState
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAddVisualSearchCornerView; // ivar: _didAddVisualSearchCornerView
@property (nonatomic) BOOL didInteractWithVisualSearchItem; // ivar: _didInteractWithVisualSearchItem
@property (nonatomic) BOOL didLogAnalysisButtonVisible; // ivar: _didLogAnalysisButtonVisible
@property (nonatomic) BOOL didToggleAAButton; // ivar: _didToggleAAButton
@property (readonly, nonatomic) UIActivity *feedbackActivity;
@property (retain, nonatomic) UIGestureRecognizer *feedbackGestureRecognizer; // ivar: _feedbackGestureRecognizer
@property (nonatomic) BOOL forceAnalysisBarButtonItemEnabled; // ivar: _forceAnalysisBarButtonItemEnabled
@property (readonly, nonatomic) BOOL hasActiveTextSelection;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlightSelectableItems;
@property (nonatomic) NSUInteger interactionTypesSetByClient; // ivar: _interactionTypesSetByClient
@property (nonatomic) BOOL isSettingAnalysis; // ivar: _isSettingAnalysis
@property (readonly, nonatomic) BOOL isSubjectAnalysisComplete;
@property (readonly, nonatomic) BOOL isSubjectHighlightAvailable;
@property (nonatomic) BOOL isUpdatingActiveTypes; // ivar: _isUpdatingActiveTypes
@property (readonly, nonatomic) BOOL liveTextButtonVisible;
@property (nonatomic) CGFloat preferredQuickActionButtonHeight; // ivar: _preferredQuickActionButtonHeight
@property (copy, nonatomic) id *quickActionConfigurationUpdateHandler; // ivar: _quickActionConfigurationUpdateHandler
@property (readonly, nonatomic) CGRect subjectFrame;
@property (nonatomic) BOOL subjectHighlightActive;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view
@property (weak, nonatomic) UIView *viewForObservingContentMode;
@property (nonatomic) CGFloat visibleTextAreaThreshold; // ivar: _visibleTextAreaThreshold
@property (retain, nonatomic) VKCVisualSearchCornerView *visualSearchCornerButtonView; // ivar: _visualSearchCornerButtonView
@property (readonly, nonatomic) UIView *visualSearchCornerView;
@property (nonatomic) BOOL wantsAutomaticContentsRectCalculation;
@property (nonatomic) BOOL wantsTranslucentActionInfoButtons; // ivar: _wantsTranslucentActionInfoButtons


+(id)keyPathsForValuesAffectingHasActiveTextSelection;
-(BOOL)actionInfoItemExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)analysisContainsTextAtPoint:(struct CGPoint )arg0 ;
-(BOOL)baseOverlayView:(id)arg0 shouldBeginInteractionAtPoint:(struct CGPoint )arg1 withTypes:(NSUInteger)arg2 ;
-(BOOL)dataDetectorExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)imageSubjectExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)interactableItemExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)isBaseOverlayViewShowingLivePhoto:(id)arg0 delegateHasImplementation:(*BOOL)arg1 ;
-(BOOL)textExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)topLevelImplementsContentsRectDelegateForBaseView:(id)arg0 ;
-(BOOL)visualSearchExistsAtPoint:(struct CGPoint )arg0 ;
-(NSUInteger)deriveCurrentAutomaticState;
-(id)_filteredNormalizedRectangleQuads;
-(id)_filteredRectangleQuads;
-(id)_rawRectangleObservations;
-(id)createAnalysisButton;
-(id)customLayoutActionInfoView;
-(id)generatePlistsForScalingAndAlignment;
-(id)generateSubjectImage;
-(id)imageForImageSnapshotForBaseView:(id)arg0 ;
-(id)init;
-(id)initWithInteractionOptions:(NSUInteger)arg0 ;
-(id)presentingViewControllerForFeedbackProvider;
-(id)presentingViewControllerForImageAnalysisInteraction;
-(id)previewForDataDetectorElementView:(id)arg0 ;
-(id)resultItems;
-(id)summaryDescription;
-(id)viewForImageSnapshotForBaseView:(id)arg0 ;
-(struct CGRect )contentsRectForImageRecognitionBaseView:(id)arg0 ;
-(void)_highlightFilteredRectangleQuads;
-(void)_highlightRectangleObservations;
-(void)_provideFeedback;
-(void)aAAnalysisButtonPressed:(id)arg0 ;
-(void)addEventToAnalyticsSession:(id)arg0 ;
-(void)addMetadataToVSFeedbackItem:(id)arg0 ;
-(void)analysisDidUpdate:(id)arg0 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)baseOverlayView:(id)arg0 analyticsEventDidOccur:(id)arg1 ;
-(void)baseOverlayView:(id)arg0 didFinishTransitionToNormalizedVisibleRect:(struct CGRect )arg1 ;
-(void)baseOverlayView:(id)arg0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect )arg1 ;
-(void)baseOverlayView:(id)arg0 didUpdateToNormalizedVisibleRect:(struct CGRect )arg1 ;
-(void)baseOverlayView:(id)arg0 livePhotoShouldPlay:(BOOL)arg1 ;
-(void)baseOverlayView:(id)arg0 prepareForCalloutAction:(SEL)arg1 completion:(id)arg2 ;
-(void)baseOverlayViewDidBeginSubjectAnalysis:(id)arg0 ;
-(void)baseOverlayViewDidCompleteSubjectAnalysis:(id)arg0 ;
-(void)baseOverlayViewDidRequestButtonStateUpdate:(id)arg0 ;
-(void)baseOverlayViewDismissVisualSearchController:(id)arg0 ;
-(void)beginImageSubjectAnalysisIfNecessary;
-(void)beginImageSubjectAnalysisWithDelayIfNecessary;
-(void)beginNewAnalyticsSessionIfNecessary;
-(void)clearMatchedHighlightsIfNecessaryAnimated:(BOOL)arg0 ;
-(void)closeAndSendCurrentAnalyticsSession;
-(void)commonInit;
-(void)configureButtonsForState:(NSUInteger)arg0 updateActiveTypes:(BOOL)arg1 ;
-(void)configureForCurrentDerivedAutomaticStateWithUpdateActiveTypes:(BOOL)arg0 ;
-(void)dealloc;
-(void)didMoveToView:(id)arg0 ;
-(void)generateTextualVisualSearchResultForQueryInfo:(id)arg0 completionHandler:(id)arg1 ;
-(void)generateVisualSearchResultForItems:(id)arg0 queryID:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)hasActiveTextSelectionDidChangeForBaseOverlayView:(id)arg0 ;
-(void)highlightMatchesForString:(id)arg0 animated:(BOOL)arg1 ;
-(void)highlightMatchesForStrings:(id)arg0 animated:(BOOL)arg1 ;
-(void)logButtonsVisibleStatus;
-(void)navOrToolbarVisibilityDidChange:(id)arg0 ;
-(void)navOrToolbarVisibilityWillChange:(id)arg0 ;
-(void)openInfoPaneForTopItem;
-(void)resetSelection;
-(void)scrollViewDidZoomToUnitRect:(struct CGRect )arg0 ;
-(void)sendAAButtonPressedDelegateCallbackIfNecessaryForSender:(id)arg0 ;
-(void)sendAnalyticsEventWithType:(NSInteger)arg0 source:(NSInteger)arg1 analysisButtonActive:(BOOL)arg2 ;
-(void)submitVisualSearchUserFeedbackForReportIdentifier:(id)arg0 userFeedbackPayload:(id)arg1 sfReportData:(id)arg2 ;
-(void)triggerTapToRadar;
-(void)triggerTapToRadar:(id)arg0 ;
-(void)updateActionInfoLayout;
-(void)updateContentsRect;
-(void)updateForAnalyticsVisualSearchEventIfNecessary:(id)arg0 ;
-(void)visualSearchCornerView:(id)arg0 analyticsEventDidOccur:(id)arg1 ;
-(void)visualSearchCornerView:(id)arg0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect )arg1 ;
-(void)visualSearchCornerViewDidDismissVisualSearchController:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif
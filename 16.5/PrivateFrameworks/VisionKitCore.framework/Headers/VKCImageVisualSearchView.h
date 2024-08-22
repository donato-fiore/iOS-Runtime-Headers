// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCIMAGEVISUALSEARCHVIEW_H
#define VKCIMAGEVISUALSEARCHVIEW_H

@class NSMutableSet, NSString, NSMutableArray;
@protocol VKCVisualSearchResultItemViewDelegate, VKCImageVisualSearchViewDelegate;


#import "VKCImageBaseOverlayView.h"
#import "VKCVisualSearchResult.h"

@interface VKCImageVisualSearchView : VKCImageBaseOverlayView <VKCVisualSearchResultItemViewDelegate>



@property (retain, nonatomic) NSMutableSet *cachedResultItemsWithFocalDot; // ivar: _cachedResultItemsWithFocalDot
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VKCImageVisualSearchViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAddVisualSearchCornerView; // ivar: _didAddVisualSearchCornerView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *resultViews; // ivar: _resultViews
@property (nonatomic) BOOL shouldAutomaticallyShowVisualSearchResult; // ivar: _shouldAutomaticallyShowVisualSearchResult
@property (readonly) Class superclass;
@property (retain, nonatomic) VKCVisualSearchResult *visualSearchResult; // ivar: _visualSearchResult


-(BOOL)_shouldShowPulsingDot:(id)arg0 ;
-(BOOL)containsVisualSearchItemAtPoint:(struct CGPoint )arg0 ;
-(BOOL)visualSearchItemView:(id)arg0 shouldBeginAtPoint:(struct CGPoint )arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(id)topResultView;
-(void)_layoutResultViews;
-(void)addMetadataToVSFeedbackItem:(id)arg0 ;
-(void)animateDotsIn;
-(void)automaticallyShowVisualSearchResults;
-(void)generateVisualSearchResultForItems:(id)arg0 queryID:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)hideDots;
-(void)layoutSubviews;
-(void)sendDismissedAnalyticsEventEventWithItem:(id)arg0 ;
-(void)sendProcessingAnalyticsEventEventWithItem:(id)arg0 duration:(CGFloat)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setNormalizedVisibleRect:(struct CGRect )arg0 ;
-(void)showTopVisualSearchResult;
-(void)submitVisualSearchUserFeedbackForReportIdentifier:(id)arg0 userFeedbackPayload:(id)arg1 sfReportData:(id)arg2 ;
-(void)triggerTapToRadar;
-(void)updateUIForVisualSearchResultsClearExistingResults:(BOOL)arg0 ;
-(void)visualSearchItemView:(id)arg0 didProcessResultsWithDuration:(CGFloat)arg1 ;
-(void)visualSearchItemView:(id)arg0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect )arg1 ;
-(void)visualSearchItemViewDidDismissController:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUITRACKLISTLOCKUPCOLLECTIONVIEWCELL_H
#define SKUITRACKLISTLOCKUPCOLLECTIONVIEWCELL_H

@class NSMapTable, NSMutableDictionary, SUPlayerStatus, UIView, NSString;
@protocol SKUIItemOfferButtonDelegate, SKUIPreviewContainerView, SKUIViewElementView;


#import "SKUIViewReuseCollectionViewCell.h"
#import "SKUITracklistColumnData.h"
#import "SKUIGradientView.h"
#import "SKUIPreviewProgressIndicator.h"
#import "SKUITrackViewElement.h"

@interface SKUITracklistLockupCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIItemOfferButtonDelegate, SKUIPreviewContainerView, SKUIViewElementView>

 {
    NSMapTable *_buyButtonDescriptorToButton;
    SKUITracklistColumnData *_columnData;
    NSMutableDictionary *_columnViewsByIndex;
    NSMapTable *_imageViewToImageResourceCacheKey;
    SUPlayerStatus *_lastPlayerStatus;
    SKUIGradientView *_offerConfirmationGradientView;
    SKUIPreviewProgressIndicator *_previewProgressIndicator;
    NSInteger _previewState;
    UIView *_separatorView;
    SKUITrackViewElement *_track;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(id)_attributedStringForOrdinal:(id)arg0 context:(id)arg1 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)_addFlipContainerViewWithFrontView:(id)arg0 backView:(id)arg1 ;
-(id)_previewColumnView;
-(id)_previewControlViewElement;
-(id)_previewMediaURL;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)_audioPlayerStatusChangeNotification:(id)arg0 ;
-(void)_buttonAction:(id)arg0 ;
-(void)_cancelConfirmationAction:(id)arg0 ;
-(void)_enumerateViewElementViewsUsingBlock:(id)arg0 ;
-(void)_layoutConfirmationGradientRelativeToView:(id)arg0 alpha:(CGFloat)arg1 ;
-(void)_resolvePreviewStateAfterTransitionForFlipView:(id)arg0 ;
-(void)_showConfirmationAction:(id)arg0 ;
-(void)dealloc;
-(void)hidePreviewProgressAnimated:(BOOL)arg0 ;
-(void)itemOfferButtonDidAnimateTransition:(id)arg0 ;
-(void)itemOfferButtonWillAnimateTransition:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)showPreviewProgressWithStatus:(id)arg0 animated:(BOOL)arg1 ;
-(void)togglePreviewPlaybackAnimated:(BOOL)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICOLLECTIONREUSABLEVIEW_H
#define UICOLLECTIONREUSABLEVIEW_H

@class NSString;
@protocol UIEditable;


#import "UIView.h"
#import "UICollectionViewLayoutAttributes.h"
#import "UICollectionView.h"

@interface UICollectionReusableView : UIView <UIEditable>

 {
    UICollectionViewLayoutAttributes *_layoutAttributes;
    UICollectionView *_collectionView;
    NSInteger _updateAnimationCount;
    UIEdgeInsets _defaultLayoutMargins;
    ? _reusableViewFlags;
}


@property (nonatomic, setter=_setAutomaticIntrinsicContentSizeInvalidationEnabled:) BOOL _automaticIntrinsicContentSizeInvalidationEnabled;
@property (readonly, nonatomic) BOOL canBeEdited;
@property (weak, nonatomic, getter=_collectionView, setter=_setCollectionView:) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (copy, nonatomic, getter=_elementKind, setter=_setElementKind:) NSString *elementKind; // ivar: _elementKind
@property (readonly, nonatomic, getter=_hasBeenReused) BOOL hasBeenReused;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_isInUpdateAnimation) BOOL inUpdateAnimation;
@property (nonatomic, getter=_isBeingReused, setter=_setIsBeingReused:) BOOL isBeingReused;
@property (copy, nonatomic, getter=_layoutAttributes, setter=_setLayoutAttributes:) UICollectionViewLayoutAttributes *layoutAttributes;
@property (nonatomic, getter=_arePreferredAttributesValid) BOOL preferredAttributesValid; // ivar: _preferredAttributesValid
@property (copy, nonatomic, setter=_setReuseIdentifier:) NSString *reuseIdentifier; // ivar: _reuseIdentifier
@property (nonatomic, getter=_shouldConstrainHeight, setter=_setShouldConstrainHeight:) BOOL shouldConstrainHeight;
@property (nonatomic, getter=_shouldConstrainWidth, setter=_setShouldConstrainWidth:) BOOL shouldConstrainWidth;
@property (readonly) Class superclass;


-(BOOL)_appliesLayoutAttributesMaskingToReusableView;
-(BOOL)_disableGroupOpacityInAnimations;
-(BOOL)_disableRasterizeInAnimations;
-(BOOL)_isFocusableWhenStyledAsHeader;
-(BOOL)_isStyledAsHeaderOrFooterFromLayoutAttributes:(id)arg0 ;
-(BOOL)_wasDequeued;
-(NSInteger)_contentViewListStyleFromLayoutAttributes:(id)arg0 ;
-(NSInteger)_styleFromLayoutAttributes:(id)arg0 ;
-(id)_preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(struct UIEdgeInsets )_concreteDefaultLayoutMargins;
-(void)_addBackdropViewForMaskingIfNeeded;
-(void)_addUpdateAnimation;
-(void)_clearUpdateAnimation;
-(void)_invalidatePreferredAttributes;
-(void)_markAsDequeued;
-(void)_notifyIsDisplaying:(BOOL)arg0 ;
-(void)_performBlockWhenReused:(id)arg0 ;
-(void)_performBlocksForReuse;
-(void)_removeExistingBackdropViewForMasking;
-(void)_setBaseLayoutAttributes:(id)arg0 ;
-(void)_setHiddenForReuse:(BOOL)arg0 ;
-(void)_setMaskView:(id)arg0 ;
-(void)_updateDefaultLayoutMarginsUsingAttributes:(id)arg0 ;
-(void)_updateMaskViewUsingAttributes:(id)arg0 previousRemoveMaskAfterAnimation:(BOOL)arg1 ;
-(void)_updateMaskingUsingAttributes:(id)arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)didTransitionFromLayout:(id)arg0 toLayout:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidateIntrinsicContentSize;
-(void)prepareForReuse;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg0 ;
-(void)willTransitionFromLayout:(id)arg0 toLayout:(id)arg1 ;


@end


#endif
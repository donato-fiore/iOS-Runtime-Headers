// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUIKEYPLANEVIEW_H
#define TUIKEYPLANEVIEW_H

@class UIView, NSMutableArray, UIButton, NSLayoutConstraint, UILayoutGuide, NSString, NSMutableDictionary, UIKBRenderFactory, UIKBTree, UIPinchGestureRecognizer, UIKBRenderConfig, UIKBRenderingContext, UIKBScreenTraits;
@protocol TUIVariantSelectorDelegate;


#import "TUIKey.h"
#import "TUIKeyplane.h"

@interface TUIKeyplaneView : UIView <TUIVariantSelectorDelegate>



@property (retain, nonatomic) TUIKey *activeKey; // ivar: _activeKey
@property (retain, nonatomic) NSMutableArray *activeVariantViews; // ivar: _activeVariantViews
@property (nonatomic) BOOL allowsPaddles; // ivar: _allowsPaddles
@property (retain, nonatomic) UIButton *biasEscapeButton; // ivar: _biasEscapeButton
@property (retain, nonatomic) NSLayoutConstraint *bottomRowSizingConstraint; // ivar: _bottomRowSizingConstraint
@property (retain, nonatomic) UILayoutGuide *bottomRowSizingGuide; // ivar: _bottomRowSizingGuide
@property (retain, nonatomic) NSLayoutConstraint *bottomSpacing; // ivar: _bottomSpacing
@property (nonatomic) NSInteger currentHandBias; // ivar: _currentHandBias
@property (retain, nonatomic) TUIKeyplane *currentKeyplane; // ivar: _currentKeyplane
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *delayedDeactivationKeys; // ivar: _delayedDeactivationKeys
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissingKeyboardMenu; // ivar: _dismissingKeyboardMenu
@property (retain, nonatomic) NSString *displayedType; // ivar: _displayedType
@property (retain, nonatomic) UIKBRenderFactory *factory; // ivar: _factory
@property (nonatomic) NSInteger floatingControlKeyType; // ivar: _floatingControlKeyType
@property (nonatomic) NSInteger fullControlKeyType; // ivar: _fullControlKeyType
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (retain, nonatomic) NSLayoutConstraint *horizontalBiasButtonConstraint; // ivar: _horizontalBiasButtonConstraint
@property (nonatomic) BOOL isCurrentlySplit; // ivar: _isCurrentlySplit
@property (nonatomic) BOOL isFloating; // ivar: _isFloating
@property (nonatomic) BOOL isInSplitTransition; // ivar: _isInSplitTransition
@property (retain, nonatomic) NSString *keyLayout; // ivar: _keyLayout
@property (retain, nonatomic) NSMutableDictionary *keyRowViews; // ivar: _keyRowViews
@property (retain, nonatomic) UILayoutGuide *keySizeReferenceGuide; // ivar: _keySizeReferenceGuide
@property (retain, nonatomic) NSLayoutConstraint *keySizeSpacer; // ivar: _keySizeSpacer
@property (retain, nonatomic) UIView *keyboardContentView; // ivar: _keyboardContentView
@property (retain, nonatomic) UIKBTree *keyplane; // ivar: _keyplane
@property (nonatomic) BOOL layoutReadyForTreeUpdate; // ivar: _layoutReadyForTreeUpdate
@property (retain, nonatomic) NSLayoutConstraint *leadingSpacing; // ivar: _leadingSpacing
@property (retain, nonatomic) NSLayoutConstraint *leftSplitWidth; // ivar: _leftSplitWidth
@property (nonatomic) CGFloat maximumWidth; // ivar: _maximumWidth
@property (nonatomic) BOOL movingFromFloating; // ivar: _movingFromFloating
@property (nonatomic) BOOL movingToFloating; // ivar: _movingToFloating
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // ivar: _pinchGestureRecognizer
@property (nonatomic) CGSize preferredFloatingSize; // ivar: _preferredFloatingSize
@property (nonatomic) CGSize preferredSize; // ivar: _preferredSize
@property (retain, nonatomic) NSLayoutConstraint *preferredWidthConstraint; // ivar: _preferredWidthConstraint
@property (nonatomic) CGFloat previousWidth; // ivar: _previousWidth
@property (retain, nonatomic) UIKBRenderConfig *renderConfig; // ivar: _renderConfig
@property (retain, nonatomic) UIKBRenderingContext *renderingContext; // ivar: _renderingContext
@property (retain, nonatomic) NSLayoutConstraint *rightSplitWidth; // ivar: _rightSplitWidth
@property (retain, nonatomic) NSLayoutConstraint *scalingConstraint; // ivar: _scalingConstraint
@property (retain, nonatomic) UIKBScreenTraits *screenTraits; // ivar: _screenTraits
@property (retain, nonatomic) NSLayoutConstraint *sizeRatioConstraint; // ivar: _sizeRatioConstraint
@property (retain, nonatomic) NSLayoutConstraint *splitSpacing; // ivar: _splitSpacing
@property (retain, nonatomic) NSMutableDictionary *splitTransitionLayoutGuides; // ivar: _splitTransitionLayoutGuides
@property (nonatomic) UIEdgeInsets standardKeyInsets; // ivar: _standardKeyInsets
@property (nonatomic) CGFloat startingWidthConstant; // ivar: _startingWidthConstant
@property (retain, nonatomic) NSMutableDictionary *storedKeyViews; // ivar: _storedKeyViews
@property (retain, nonatomic) NSMutableDictionary *storedVariantViews; // ivar: _storedVariantViews
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *topSpacing; // ivar: _topSpacing
@property (retain, nonatomic) NSLayoutConstraint *trailingSpacing; // ivar: _trailingSpacing
@property (retain, nonatomic) NSLayoutConstraint *trailingTieConstraint; // ivar: _trailingTieConstraint
@property (nonatomic) CGFloat transitionProgress; // ivar: _transitionProgress
@property (nonatomic) CGSize unsplitSize; // ivar: _unsplitSize


+(id)dynamicKeyboardForName:(id)arg0 size:(struct CGSize )arg1 isLandscape:(BOOL)arg2 ;
+(id)keyplaneViewForKeyboard:(id)arg0 size:(struct CGSize )arg1 isLandscape:(BOOL)arg2 ;
+(id)keyplaneViewForKeyboard:(id)arg0 size:(struct CGSize )arg1 isLandscape:(BOOL)arg2 displayKeyplane:(NSUInteger)arg3 ;
+(id)keyplaneViewForLayout:(id)arg0 size:(struct CGSize )arg1 isLandscape:(BOOL)arg2 ;
+(id)updateDynamicKeyboard:(id)arg0 usingSize:(struct CGSize )arg1 isLandscape:(BOOL)arg2 ;
+(id)updateDynamicKeyplane:(id)arg0 usingSize:(struct CGSize )arg1 isLandscape:(BOOL)arg2 ;
-(BOOL)_shouldAllowKey:(id)arg0 ;
-(BOOL)isSplit;
-(BOOL)supportsSplit;
-(CGFloat)fullHeightForDockedKeyboard;
-(id)actualView;
-(id)cacheIdentifierForKey:(id)arg0 withState:(int)arg1 ;
-(id)cachedVariantViewForTree:(id)arg0 ;
-(id)cachedVariantViewForTree:(id)arg0 state:(int)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 keyplane:(id)arg1 ;
-(id)keyViewForKey:(id)arg0 ;
-(id)keyViewForTree:(id)arg0 ;
-(id)keyplaneFromTree:(id)arg0 size:(struct CGSize )arg1 controlKeyType:(NSInteger)arg2 ;
-(id)variantViewForKey:(id)arg0 cacheID:(id)arg1 ;
-(id)viewForBaseKey:(id)arg0 ;
-(id)viewForKey:(id)arg0 ;
-(int)stateForKey:(id)arg0 ;
-(struct CGRect )updateFrameForKey:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )leftSplitSize;
-(struct CGSize )rightSplitSize;
-(struct CGSize )sizeFromScreenTraitsAndClass;
-(struct CGSize )splitSizeForRightSide:(BOOL)arg0 ;
-(struct UIEdgeInsets )keycapInsets;
-(void)_generateFactoryIfNeeded;
-(void)_generateRenderingContextIfNeeded;
-(void)_regenerateFactoryPreservingUpdates:(BOOL)arg0 ;
-(void)_updateRenderingContext;
-(void)addKeyToDelayedDeactivationSet:(id)arg0 ;
-(void)changingSelectedVariantForKey:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)compareKeyplane:(id)arg0 toKeyplane:(id)arg1 ;
-(void)createContentViewsIfNeeded;
-(void)createSplitLayoutIfNeeded;
-(void)deactivateAdaptiveKey:(id)arg0 ;
-(void)deactivateKey:(id)arg0 previousState:(int)arg1 ;
-(void)deactivateKeys;
-(void)didTapBiasEscapeButton;
-(void)dimKeys:(id)arg0 ;
-(void)finalLayoutForSplit:(BOOL)arg0 ;
-(void)finishSplitTransition;
-(void)finishedSelectingVariantForKey:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)generateFactoryForKeyplane:(id)arg0 landscape:(BOOL)arg1 ;
-(void)layoutKeysInRows:(id)arg0 ;
-(void)layoutRows:(NSUInteger)arg0 ;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)prepareForSplitTransition;
-(void)presentSelectorView:(id)arg0 fromBaseKey:(id)arg1 ;
-(void)removeFromSuperview;
-(void)removeKeyFromDelayedDeactivationSet:(id)arg0 ;
-(void)resetLayoutAndApplyKeyplane:(id)arg0 ;
-(void)setKeyboardBias:(NSInteger)arg0 ;
-(void)setOverrideScreenTraits:(id)arg0 ;
-(void)setState:(int)arg0 forKey:(id)arg1 ;
-(void)tappedToDismissSelector;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transitionToKeyplane:(id)arg0 ;
-(void)transitionWillFinishWithProgress:(CGFloat)arg0 completion:(id)arg1 ;
-(void)updateAllTrees;
-(void)updateBiasEscapeButtonVisbility:(BOOL)arg0 ;
-(void)updateBottomRowSizingGuide;
-(void)updateKeyplaneSpacing;
-(void)updateKeysForFloating:(BOOL)arg0 ;
-(void)updateKeysForRow:(NSUInteger)arg0 withKeys:(id)arg1 ;
-(void)updateRowsForKeyplane:(id)arg0 ;
-(void)updateSplitProgress:(CGFloat)arg0 ;
-(void)updateToSize:(struct CGSize )arg0 ;
-(void)updateToSpecifiedSize:(struct CGSize )arg0 ;
-(void)updateTreeForAutomation;
-(void)updateVariantSelectorFramesForKey:(id)arg0 ;


@end


#endif
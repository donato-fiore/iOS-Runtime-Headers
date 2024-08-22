// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBNOTICEPRESENTABLEELEMENT_H
#define SBNOTICEPRESENTABLEELEMENT_H

@class UIView, NSHashTable, NSString, UIColor, FBScene;
@protocol SAUIElementViewProviding, SAUIContentTransitioning, SBSystemApertureContextProviding, SBPresentableElement, SAAlertBehavior, SAAlertHosting, SAElement, SAElementHosting, SAUILayoutHosting, BNPresentable, BNPresentable><BNTemplateContentProviding;

#import <Foundation/Foundation.h>


@interface SBNoticePresentableElement : NSObject <SAUIElementViewProviding, SAUIContentTransitioning, SBSystemApertureContextProviding, SBPresentableElement, SAAlertBehavior>

 {
    UIView *_primaryView;
    UIView *_secondaryView;
    NSHashTable *_observers;
}


@property (readonly, nonatomic, getter=isAffiliatedWithSessionMonitor) BOOL affiliatedWithSessionMonitor;
@property (weak, nonatomic) NSObject<SAAlertHosting> *alertHost;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView *detachedMinimalView;
@property (readonly, weak, nonatomic) NSObject<SAElement> *element;
@property (weak, nonatomic) NSObject<SAElementHosting> *elementHost;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInteractiveDismissalEnabled) BOOL interactiveDismissalEnabled;
@property (readonly, nonatomic) UIColor *keyColor;
@property (nonatomic) NSUInteger layoutAxis;
@property (weak, nonatomic) NSObject<SAUILayoutHosting> *layoutHost; // ivar: _layoutHost
@property (readonly, nonatomic) NSInteger layoutMode; // ivar: _layoutMode
@property (readonly, nonatomic) UIView *leadingView; // ivar: _leadingView
@property (readonly, nonatomic) NSInteger maximumSupportedLayoutMode;
@property (readonly, nonatomic, getter=isMinimalPresentationPossible) BOOL minimalPresentationPossible;
@property (readonly, nonatomic) UIView *minimalView;
@property (readonly, nonatomic) NSInteger minimumSupportedLayoutMode;
@property (readonly, nonatomic) NSInteger preferredLayoutMode; // ivar: _preferredLayoutMode
@property (readonly, nonatomic) BOOL prefersAlertKeyLineStyle;
@property (readonly, nonatomic) NSObject<BNPresentable> *presentable; // ivar: _presentable
@property (readonly, nonatomic, getter=isRequestingMenuPresentation) BOOL requestingMenuPresentation;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly, nonatomic) NSObject<BNPresentable><BNTemplateContentProviding> *templatePresentable;
@property (readonly, nonatomic) UIView *trailingView; // ivar: _trailingView


+(id)_preferredFont:(BOOL)arg0 textStyle:(id)arg1 weight:(CGFloat)arg2 additionalTraits:(unsigned int)arg3 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)handleElementViewEvent:(NSInteger)arg0 ;
-(BOOL)hasAlertBehavior;
-(BOOL)shouldSuppressElementWhileOnCoversheet;
-(id)_primaryView;
-(id)_secondaryView;
-(id)_templateItemViewFromProvider:(id)arg0 isPrimary:(BOOL)arg1 ;
-(id)initWithTemplatePresentable:(id)arg0 ;
-(id)viewProvider;
-(struct NSDirectionalEdgeInsets )preferredEdgeOutsetsForLayoutMode:(NSInteger)arg0 suggestedOutsets:(struct NSDirectionalEdgeInsets )arg1 maximumOutsets:(struct NSDirectionalEdgeInsets )arg2 ;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg0 usingBlock:(id)arg1 ;
-(void)_updateVisualStlyingOfView:(id)arg0 fromProvider:(id)arg1 ;
-(void)addElementLayoutSpecifierObserver:(id)arg0 ;
-(void)contentProviderWillTransitionToSize:(struct CGSize )arg0 inContainerView:(id)arg1 transitionCoordinator:(id)arg2 ;
-(void)layoutHostContainerViewDidLayoutSubviews:(id)arg0 ;
-(void)removeElementLayoutSpecifierObserver:(id)arg0 ;


@end


#endif
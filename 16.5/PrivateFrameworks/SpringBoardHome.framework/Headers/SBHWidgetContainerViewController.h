// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHWIDGETCONTAINERVIEWCONTROLLER_H
#define SBHWIDGETCONTAINERVIEWCONTROLLER_H

@class UIViewController, NSString, UIView;
@protocol SBHMultiplexingViewControllerObserver, SBHWidgetContainerViewControllerDelegate;



@interface SBHWidgetContainerViewController : UIViewController <SBHMultiplexingViewControllerObserver>



@property (nonatomic) BOOL allowsEdgeAntialiasing;
@property (readonly, copy, nonatomic) NSString *applicationName; // ivar: _applicationName
@property (nonatomic) SBIconApproximateLayoutPosition approximateLayoutPosition; // ivar: _approximateLayoutPosition
@property (nonatomic, getter=isBlockedForScreenTimeExpiration) BOOL blockedForScreenTimeExpiration;
@property (retain, nonatomic) UIView *deactivationSnapshotView; // ivar: _deactivationSnapshotView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHWidgetContainerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger gridSizeClass; // ivar: _gridSizeClass
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) NSUInteger presentationMode;
@property (nonatomic) BOOL requiresClippingToBounds; // ivar: _requiresClippingToBounds
@property (nonatomic) BOOL showsSnapshotWhenDeactivated; // ivar: _showsSnapshotWhenDeactivated
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger userVisibilityStatus; // ivar: _userVisibilityStatus
@property (readonly, nonatomic) BOOL wantsSystemMaterialBackground;
@property (readonly, nonatomic) UIViewController *widgetViewController; // ivar: _widgetViewController


-(BOOL)_canShowWhileLocked;
-(id)_avocadoViewController;
-(id)_avocadoWidget;
-(id)_widgetExtensionBundleIdentifier;
-(id)cancelTouchesForCurrentEventInHostedContent;
-(id)initWithWidgetViewController:(id)arg0 gridSizeClass:(NSUInteger)arg1 applicationName:(id)arg2 ;
-(id)snapshotView;
-(id)widgetContainerView;
-(id)widgetContextMenuController;
-(void)_clearDeactivationSnapshotView;
-(void)_updateWidgetVisibility;
-(void)loadView;
-(void)multiplexingViewControllerDidActivate:(id)arg0 ;
-(void)multiplexingViewControllerWillDeactivate:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif
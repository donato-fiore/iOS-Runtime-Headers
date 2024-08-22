// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WGWIDGETVIEWCONTROLLER_H
#define WGWIDGETVIEWCONTROLLER_H

@class UIViewController, NSString, UITraitCollection;
@protocol WGWidgetHostingViewControllerDelegate, WGWidgetHostingViewControllerHost, WGWidgetExtensionVisibilityProviding, WGWidgetViewControllerDelegate;


#import "WGWidgetHostingViewController.h"

@interface WGWidgetViewController : UIViewController <WGWidgetHostingViewControllerDelegate, WGWidgetHostingViewControllerHost, WGWidgetExtensionVisibilityProviding>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WGWidgetViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UITraitCollection *requestedTraitCollectionOverride;
@property (readonly) Class superclass;
@property (retain, nonatomic) WGWidgetHostingViewController *widgetHost; // ivar: _widgetHost


-(BOOL)isWidgetExtensionVisible:(id)arg0 ;
-(NSInteger)largestAvailableDisplayModeForWidget:(id)arg0 ;
-(NSInteger)userSpecifiedDisplayModeForWidget:(id)arg0 ;
-(id)_platterViewIfLoaded;
-(id)_platterViewLoadingIfNecessary:(BOOL)arg0 ;
-(id)initWithWidgetInfo:(id)arg0 ;
-(struct CGSize )maxSizeForWidget:(id)arg0 forDisplayMode:(NSInteger)arg1 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_addWidgetButtonTapped:(id)arg0 ;
-(void)loadView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)registerWidgetForRefreshEvents:(id)arg0 ;
-(void)remoteViewControllerDidConnectForWidget:(id)arg0 ;
-(void)remoteViewControllerViewDidAppearForWidget:(id)arg0 ;
-(void)unregisterWidgetForRefreshEvents:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)widget:(id)arg0 didRemoveSnapshotAtURL:(id)arg1 ;


@end


#endif
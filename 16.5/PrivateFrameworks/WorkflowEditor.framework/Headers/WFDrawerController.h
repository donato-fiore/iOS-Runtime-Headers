// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDRAWERCONTROLLER_H
#define WFDRAWERCONTROLLER_H

@class UIViewController, NSString, NSArray, NSMapTable;
@protocol WFDrawerPaneContainerDelegate, WFDrawerControllerDelegate;


#import "WFDrawerPaneContainer.h"

@interface WFDrawerController : UIViewController <WFDrawerPaneContainerDelegate>



@property (nonatomic) CGFloat bottomInset; // ivar: _bottomInset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFDrawerControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *drawerGroup; // ivar: _drawerGroup
@property (readonly, nonatomic) CGRect drawerRect;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inTransition; // ivar: _inTransition
@property (readonly, nonatomic) UIViewController *initializationViewController; // ivar: _initializationViewController
@property (readonly, nonatomic) NSArray *paneContainers; // ivar: _paneContainers
@property (readonly, nonatomic) NSMapTable *paneContainersByViewControllers; // ivar: _paneContainersByViewControllers
@property (readonly, nonatomic) NSUInteger previousVisibilityOfCoveredPaneContainer; // ivar: _previousVisibilityOfCoveredPaneContainer
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topInset; // ivar: _topInset
@property (readonly, nonatomic) WFDrawerPaneContainer *topPaneContainer;
@property (readonly, nonatomic) UIViewController *topViewController;
@property (nonatomic) BOOL userInteractionEnabled;
@property (readonly, nonatomic) NSArray *viewControllers;
@property (readonly, nonatomic) NSUInteger visibility;


-(BOOL)popViewControllerAnimated:(BOOL)arg0 ;
-(BOOL)popViewControllerToVisibility:(NSUInteger)arg0 dimming:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(BOOL)pushViewController:(id)arg0 withVisibility:(NSUInteger)arg1 dimming:(NSUInteger)arg2 animated:(BOOL)arg3 ;
-(CGFloat)bottomInsetForPaneContainer:(id)arg0 ;
-(CGFloat)heightForVisibility:(NSUInteger)arg0 ;
-(CGFloat)topInsetForPaneContainer:(id)arg0 ;
-(id)coveredPaneContainer;
-(id)drawerPaneWithViewController:(id)arg0 ;
-(id)init;
-(id)initWithRootViewController:(id)arg0 ;
-(id)mutablePaneControllers;
-(id)paneContainerForViewController:(id)arg0 ;
-(id)scrollViewOccludingDrawerPaneInsideContainer:(id)arg0 ;
-(void)drawerPaneContainer:(id)arg0 didTransitionToVisibility:(NSUInteger)arg1 ;
-(void)drawerPaneContainer:(id)arg0 willTransitionToVisibility:(NSUInteger)arg1 ;
-(void)loadView;
-(void)transitionToVisibility:(NSUInteger)arg0 withDimming:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)transitionToVisibility:(NSUInteger)arg0 withDimming:(NSUInteger)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDEBUGGINGINFORMATIONHIERARCHYVIEWCONTROLLER_H
#define UIDEBUGGINGINFORMATIONHIERARCHYVIEWCONTROLLER_H

@class NSArray, NSMutableDictionary, NSString, NSMutableArray;
@protocol UIDebuggingInformationTouchObserver, UICollectionViewDataSource, UIDebuggingInformationHierarchyLayoutDelegate, UICollectionViewDelegate, UIDebuggingInformationHierarchyCellDelegate, UIDebuggingInformationViewController;


#import "UIViewController.h"
#import "UICollectionView.h"
#import "UIDebuggingInformationInspectorDetailViewController.h"
#import "UIView.h"
#import "UIRefreshControl.h"

@interface UIDebuggingInformationHierarchyViewController : UIViewController <UIDebuggingInformationTouchObserver, UICollectionViewDataSource, UIDebuggingInformationHierarchyLayoutDelegate, UICollectionViewDelegate, UIDebuggingInformationHierarchyCellDelegate, UIDebuggingInformationViewController>

 {
    NSArray *_showingOverlayItems;
    NSArray *_normalItems;
}


@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) NSMutableDictionary *controlsForKeys; // ivar: _controlsForKeys
@property (retain, nonatomic) NSArray *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDebuggingInformationInspectorDetailViewController *detail; // ivar: _detail
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *highlightedView; // ivar: _highlightedView
@property (retain, nonatomic) NSMutableArray *keys; // ivar: _keys
@property (retain, nonatomic) NSMutableDictionary *managedValues; // ivar: _managedValues
@property (retain, nonatomic) NSMutableDictionary *observersForKeys; // ivar: _observersForKeys
@property (nonatomic) *CGColor originalBorderColor; // ivar: _originalBorderColor
@property (nonatomic) CGFloat originalBorderWidth; // ivar: _originalBorderWidth
@property (retain, nonatomic) UIRefreshControl *refreshControl; // ivar: _refreshControl
@property (retain, nonatomic) UIView *rootViewForInspection; // ivar: _rootViewForInspection
@property (readonly) Class superclass;


-(BOOL)shouldCollapseAtIndexPath:(id)arg0 ;
-(BOOL)shouldHighlightSelectedCells;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSUInteger)indentationLevelForIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)colorForIndentationLevel:(NSUInteger)arg0 ;
-(id)getViewsRecursiveWithLevel:(NSUInteger)arg0 forView:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_showWindowChange;
-(void)chooseNewTarget:(id)arg0 ;
-(void)collapseBeneathCell:(id)arg0 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)didReceiveNewView:(id)arg0 ;
-(void)displayDetailsForCell:(id)arg0 ;
-(void)expandBeneathCell:(id)arg0 ;
-(void)highlightView:(id)arg0 ;
-(void)refresh:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif
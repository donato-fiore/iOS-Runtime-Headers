// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIWISHLISTVIEWCONTROLLER_H
#define SKUIWISHLISTVIEWCONTROLLER_H

@class _UIBackdropView, UIBarButtonItem, _UIContentUnavailableView, NSString;
@protocol SKUIItemListTableDelegate, SKUIWishlistDelegate;


#import "SKUIViewController.h"
#import "SKUIItemListTableViewController.h"
#import "SKUISyncWishlistOperation.h"
#import "SKUIWishlist.h"

@interface SKUIWishlistViewController : SKUIViewController <SKUIItemListTableDelegate>

 {
    _UIBackdropView *_backdropView;
    UIBarButtonItem *_deleteButton;
    BOOL _editing;
    _UIContentUnavailableView *_emptyWishlistView;
    SKUIItemListTableViewController *_itemListViewController;
    BOOL _reloadOnNextAppear;
    SKUISyncWishlistOperation *_syncOperation;
    SKUIWishlist *_wishlist;
    NSInteger _wishlistState;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIWishlistDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)wishlistBarButtonItemWithClientContext:(id)arg0 ;
-(BOOL)_isEditingEnabled;
-(NSInteger)_wishlistState;
-(id)_emptyWishlistView;
-(id)_itemListViewController;
-(id)_wishlist;
-(id)contentScrollView;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_deleteAction:(id)arg0 ;
-(void)_deleteItemsAtIndexPaths:(id)arg0 ;
-(void)_destroyEmptyWishlistView;
-(void)_doneAction:(id)arg0 ;
-(void)_finishSignInWithResponse:(id)arg0 error:(id)arg1 ;
-(void)_finishSyncWithResult:(BOOL)arg0 didChange:(BOOL)arg1 error:(id)arg2 ;
-(void)_reloadChildView;
-(void)_reloadForAccountsChanged;
-(void)_reloadNavigationBarAnimated:(BOOL)arg0 ;
-(void)_reloadWishlist;
-(void)_setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_signInAction:(id)arg0 ;
-(void)_syncWishlist;
-(void)_toggleEditAction:(id)arg0 ;
-(void)_updateDeleteButton;
-(void)_wishlistDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)itemList:(id)arg0 didDeselectItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)itemList:(id)arg0 didRemoveItemAtIndexPath:(id)arg1 ;
-(void)itemList:(id)arg0 didSelectItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)loadView;
-(void)setClientContext:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif
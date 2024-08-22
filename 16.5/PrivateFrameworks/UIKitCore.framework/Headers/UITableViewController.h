// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITABLEVIEWCONTROLLER_H
#define UITABLEVIEWCONTROLLER_H

@class NSString, UIScrollView<_UIKeyboardAutoRespondingScrollView>;
@protocol _UIKeyboardAutoRespondingScrollViewController, UITableViewFocusDelegateLegacy, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Deprecated, UITableViewDelegate, UITableViewDataSource;


#import "UIViewController.h"
#import "UIAutoRespondingScrollViewControllerKeyboardSupport.h"
#import "UITableViewDataSource.h"
#import "_UIFilteredDataSource.h"
#import "UIRefreshControl.h"
#import "UITableView.h"

@interface UITableViewController : UIViewController <_UIKeyboardAutoRespondingScrollViewController, UITableViewFocusDelegateLegacy, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Deprecated, UITableViewDelegate, UITableViewDataSource>

 {
    NSInteger _tableViewStyle;
    UIAutoRespondingScrollViewControllerKeyboardSupport *_keyboardSupport;
    UITableViewDataSource *_staticDataSource;
    ? _tableViewControllerFlags;
    _UIFilteredDataSource *_filteredDataSource;
    NSInteger _filteredDataType;
}


@property (nonatomic) BOOL clearsSelectionOnViewWillAppear;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIRefreshControl *refreshControl;
@property (readonly, retain, nonatomic, getter=_scrollView) UIScrollView<_UIKeyboardAutoRespondingScrollView> *scrollView;
@property (retain, nonatomic, getter=_staticDataSource, setter=_setStaticDataSource:) UITableViewDataSource *staticDataSource;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView;


-(BOOL)_shouldRespondToPreviewingMethods;
-(BOOL)_viewControllerWasSelected;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_filteredDataType;
-(NSInteger)_resolvedDataSourceFilterTypeForScreen:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 indentationLevelForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_existingTableView;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)previewViewControllerForLocation:(struct CGPoint )arg0 inSourceView:(id)arg1 ;
-(id)previewViewControllerForRowAtIndexPath:(id)arg0 ;
-(id)previewingContext:(id)arg0 viewControllerForLocation:(struct CGPoint )arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_applyDefaultDataSourceToTable:(id)arg0 ;
-(void)_limitedUIDidChange;
-(void)_refreshFilteredDataSourceFilterTypeForScreen:(id)arg0 ;
-(void)_setFilteredDataType:(NSInteger)arg0 ;
-(void)_willChangeToIdiom:(NSInteger)arg0 onScreen:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadView;
-(void)previewingContext:(id)arg0 commitViewController:(id)arg1 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willPresentPreviewViewController:(id)arg0 forLocation:(struct CGPoint )arg1 inSourceView:(id)arg2 ;
-(void)willPresentPreviewViewController:(id)arg0 forPosition:(struct CGPoint )arg1 inSourceView:(id)arg2 ;
-(void)willPresentPreviewViewController:(id)arg0 forRowAtIndexPath:(id)arg1 ;


@end


#endif
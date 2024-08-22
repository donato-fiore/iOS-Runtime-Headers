// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISTACKDOCUMENTVIEWCONTROLLER_H
#define SKUISTACKDOCUMENTVIEWCONTROLLER_H

@class IKAppDocument, NSArray, NSMapTable, NSString;
@protocol SKUIIndexBarControlControllerDataSource, SKUIIndexBarControlControllerDelegate, SKUIIndexBarEntryListControllerDelegate, SKUIModalSourceViewProvider, SKUIViewControllerTesting, SKUICollectionViewPullToRefreshDelegate, SKUIStorePageSectionsDelegate, SKUIResourceLoaderDelegate, SKUIDocumentViewController;


#import "SKUIViewController.h"
#import "SKUIIndexBarControlController.h"
#import "SKUIResourceLoader.h"
#import "SKUIStackTemplateElement.h"
#import "SKUIStorePageSectionsViewController.h"

@interface SKUIStackDocumentViewController : SKUIViewController <SKUIIndexBarControlControllerDataSource, SKUIIndexBarControlControllerDelegate, SKUIIndexBarEntryListControllerDelegate, SKUIModalSourceViewProvider, SKUIViewControllerTesting, SKUICollectionViewPullToRefreshDelegate, SKUIStorePageSectionsDelegate, SKUIResourceLoaderDelegate, SKUIDocumentViewController>

 {
    IKAppDocument *_document;
    NSArray *_entryListControllers;
    BOOL _hasResetState;
    SKUIIndexBarControlController *_indexBarControlController;
    NSInteger _lastNeedsMoreCount;
    NSInteger _layoutStyle;
    SKUIResourceLoader *_resourceLoader;
    SKUIStackTemplateElement *_templateElement;
    NSMapTable *_viewElementToEntryListController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIStorePageSectionsViewController *sectionsViewController; // ivar: _sectionsViewController
@property (readonly) Class superclass;


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)_shouldShowIndexBar;
-(BOOL)_tryToScrollToSectionAtIndexPath:(id)arg0 ;
-(BOOL)performTestWithName:(id)arg0 options:(id)arg1 ;
-(NSInteger)_globalIndexFromIndexPath:(id)arg0 ;
-(NSInteger)_maxGlobalIndex;
-(NSInteger)_pinningTransitionStyle;
-(NSInteger)indexBarControlController:(id)arg0 numberOfEntryDescriptorsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInIndexBarControlController:(id)arg0 ;
-(id)_colorScheme;
-(id)_indexBarControlController;
-(id)_indexBarViewElement;
-(id)_indexPathFromGlobalIndex:(NSInteger)arg0 ;
-(id)_pageComponentsWithViewElements:(id)arg0 ;
-(id)_pageSplitsDescription;
-(id)_pullToRefreshElement;
-(id)_resourceLoader;
-(id)impressionableViewElements;
-(id)indexBarControlController:(id)arg0 entryDescriptorAtIndexPath:(id)arg1 ;
-(id)initWithTemplateElement:(id)arg0 layoutStyle:(NSInteger)arg1 ;
-(void)_configureIndexBarControl:(id)arg0 ;
-(void)_resetState;
-(void)_resetStateForDocumentNotification:(id)arg0 ;
-(void)_updateEntryListControllersWithReload:(BOOL)arg0 ;
-(void)_updateIndexBarVisibility;
-(void)dealloc;
-(void)documentDidUpdate:(id)arg0 ;
-(void)documentDidUpdate:(id)arg0 withTemplate:(id)arg1 ;
-(void)documentMediaQueriesDidUpdate:(id)arg0 ;
-(void)getModalSourceViewForElementIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)indexBarControlController:(id)arg0 didSelectEntryDescriptorAtIndexPath:(id)arg1 ;
-(void)indexBarControlControllerDidSelectBeyondBottom:(id)arg0 ;
-(void)indexBarControlControllerDidSelectBeyondTop:(id)arg0 ;
-(void)indexBarEntryListControllerDidInvalidate:(id)arg0 ;
-(void)loadView;
-(void)refresh:(id)arg0 refreshControl:(id)arg1 ;
-(void)resourceLoader:(id)arg0 didLoadAllForReason:(NSInteger)arg1 ;
-(void)resourceLoaderDidBeginLoading:(id)arg0 ;
-(void)sectionsViewController:(id)arg0 willScrollToOffset:(struct CGPoint )arg1 visibleRange:(struct SKUIIndexPathRange )arg2 ;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)skui_viewWillAppear:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif
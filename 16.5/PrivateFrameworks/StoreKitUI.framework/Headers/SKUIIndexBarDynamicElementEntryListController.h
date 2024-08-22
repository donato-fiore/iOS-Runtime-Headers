// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIINDEXBARDYNAMICELEMENTENTRYLISTCONTROLLER_H
#define SKUIINDEXBARDYNAMICELEMENTENTRYLISTCONTROLLER_H

@protocol SKUIEntityProviding;


#import "SKUIIndexBarEntryListController.h"
#import "SKUIDynamicPageSectionIndexMapper.h"
#import "SKUIIndexBarEntryViewElement.h"
#import "SKUIViewElement.h"
#import "SKUIIndexBarEntryListViewElement.h"

@interface SKUIIndexBarDynamicElementEntryListController : SKUIIndexBarEntryListController {
    SKUIDynamicPageSectionIndexMapper *_dynamicIndexMapper;
    id<SKUIEntityProviding> *_entityProvider;
    SKUIIndexBarEntryViewElement *_indexBarEntryViewElement;
    SKUIViewElement *_templateElement;
}


@property (readonly, nonatomic) SKUIIndexBarEntryListViewElement *entryListViewElement; // ivar: _entryListViewElement


-(BOOL)hidesIndexBar;
-(BOOL)needsRootTargetViewElement;
-(NSInteger)numberOfEntryDescriptors;
-(id)entryDescriptorAtIndex:(NSInteger)arg0 ;
-(id)initWithEntryListViewElement:(id)arg0 ;
-(id)rootTargetIndexBarEntryID;
-(id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(NSInteger)arg0 returningRelativeSectionIndex:(*NSInteger)arg1 ;
-(void)_entityProviderDidInvalidateNotification:(id)arg0 ;
-(void)dealloc;
-(void)reloadViewElementData;
-(void)setRootTargetViewElement:(id)arg0 ;


@end


#endif
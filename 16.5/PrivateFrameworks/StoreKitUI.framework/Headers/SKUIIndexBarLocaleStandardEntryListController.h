// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIINDEXBARLOCALESTANDARDENTRYLISTCONTROLLER_H
#define SKUIINDEXBARLOCALESTANDARDENTRYLISTCONTROLLER_H

@class NSSet, IKViewElementStyle;


#import "SKUIIndexBarEntryListController.h"
#import "SKUIIndexBarEntryListViewElement.h"

@interface SKUIIndexBarLocaleStandardEntryListController : SKUIIndexBarEntryListController {
    SKUIIndexBarEntryListViewElement *_entryListViewElement;
    NSSet *_requiredVisibilitySet;
    IKViewElementStyle *_style;
}




-(NSInteger)numberOfEntryDescriptors;
-(id)entryDescriptorAtIndex:(NSInteger)arg0 ;
-(id)initWithSKUIIndexBarEntryListViewElement:(id)arg0 ;
-(id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(NSInteger)arg0 returningRelativeSectionIndex:(*NSInteger)arg1 ;
-(void)reloadViewElementData;


@end


#endif
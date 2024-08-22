// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONVIEWCOMPOSITIONLAYOUTINVALIDATIONCONTEXT_H
#define _UICOLLECTIONVIEWCOMPOSITIONLAYOUTINVALIDATIONCONTEXT_H

@class NSMapTable;


#import "UICollectionViewLayoutInvalidationContext.h"

@interface _UICollectionViewCompositionLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {
    NSMapTable *_invalidationContextTable;
}


@property (retain, nonatomic, getter=_invalidationContextTable, setter=_setInvalidationContextTable:) NSMapTable *invalidationContextTable;




@end


#endif
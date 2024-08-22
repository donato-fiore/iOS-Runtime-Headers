// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMOJISECTIONHEADERLAYOUTINVALIDATIONCONTEXT_H
#define EMOJISECTIONHEADERLAYOUTINVALIDATIONCONTEXT_H

@class NSIndexSet;


#import "UICollectionViewFlowLayoutInvalidationContext.h"

@interface EmojiSectionHeaderLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext {
    *__CFDictionary _headerWidthDict;
}


@property (readonly, nonatomic) NSIndexSet *invalidatedSections; // ivar: _invalidatedSections


-(CGFloat)preferredWidthForHeaderInSection:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif
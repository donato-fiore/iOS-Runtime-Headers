// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUISHELFVIEWLAYOUTINVALIDATIONCONTEXT_H
#define VUISHELFVIEWLAYOUTINVALIDATIONCONTEXT_H

@class UICollectionViewLayoutInvalidationContext, NSIndexPath;



@interface VUIShelfViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext

@property (retain, nonatomic) NSIndexPath *focusedItemIndexPath; // ivar: _focusedItemIndexPath
@property (nonatomic) BOOL invalidateLayout; // ivar: _invalidateLayout
@property (nonatomic) BOOL invalidateVerticalBumps; // ivar: _invalidateVerticalBumps




@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITABLEVIEWDROPPROPOSAL_H
#define UITABLEVIEWDROPPROPOSAL_H

@class NSIndexPath;


#import "UIDropProposal.h"

@interface UITableViewDropProposal : UIDropProposal

@property (readonly, nonatomic) NSInteger _dropLocation;
@property (retain, nonatomic, getter=_adjustedTargetIndexPath, setter=_setAdjustedTargetIndexPath:) NSIndexPath *adjustedTargetIndexPath; // ivar: _adjustedTargetIndexPath
@property (nonatomic) NSInteger intent; // ivar: _intent


-(NSInteger)_dropAction;
-(id)_updatedDropProposalWithDropOperation:(NSUInteger)arg0 dropIntent:(NSInteger)arg1 adjustedTargetIndexPath:(id)arg2 ;
-(id)initWithDropOperation:(NSUInteger)arg0 ;
-(id)initWithDropOperation:(NSUInteger)arg0 dropLocation:(NSInteger)arg1 ;
-(id)initWithDropOperation:(NSUInteger)arg0 intent:(NSInteger)arg1 ;


@end


#endif
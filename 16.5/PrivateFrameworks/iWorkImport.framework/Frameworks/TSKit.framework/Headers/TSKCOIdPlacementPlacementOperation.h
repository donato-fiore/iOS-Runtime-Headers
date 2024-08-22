// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKCOIDPLACEMENTPLACEMENTOPERATION_H
#define TSKCOIDPLACEMENTPLACEMENTOPERATION_H



#import "TSKCOIdPlacementBaseOperation.h"

@interface TSKCOIdPlacementPlacementOperation : TSKCOIdPlacementBaseOperation



-(id)initWithAddress:(*void)arg0 fromIndex:(int)arg1 toIndex:(int)arg2 dominating:(BOOL)arg3 ;
-(id)initWithAddress:(*void)arg0 fromIndex:(int)arg1 toIndex:(int)arg2 dominating:(BOOL)arg3 noop:(BOOL)arg4 ;
-(int)placementType;
-(struct shared_ptr<TSKCO::AbstractOperation> )newTransformableOperation;
-(void)saveToArchiver:(id)arg0 message:(*void)arg1 ;


@end


#endif
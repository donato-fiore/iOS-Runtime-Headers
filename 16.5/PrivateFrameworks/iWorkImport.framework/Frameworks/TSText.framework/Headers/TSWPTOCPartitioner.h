// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPTOCPARTITIONER_H
#define TSWPTOCPARTITIONER_H

@protocol TSDPartitioner;

#import <Foundation/Foundation.h>

#import "TSWPTOCInfo.h"

@interface TSWPTOCPartitioner : NSObject <TSDPartitioner>



@property (readonly, weak, nonatomic) TSWPTOCInfo *info; // ivar: _info
@property (readonly, nonatomic) CGRect totalPartitionFrame;


-(BOOL)didHint:(id)arg0 syncWithNextHint:(id)arg1 horizontally:(BOOL)arg2 ;
-(id)hintForLayout:(id)arg0 ;
-(id)initWithInfo:(id)arg0 ;
-(id)layoutForHint:(id)arg0 parentLayout:(id)arg1 ;
-(id)nextHintForSize:(struct CGSize )arg0 parentLayout:(id)arg1 previousHint:(id)arg2 horizontally:(BOOL)arg3 outFinished:(*BOOL)arg4 ;
-(id)nextLayoutForSize:(struct CGSize )arg0 parentLayout:(id)arg1 previousHint:(id)arg2 horizontally:(BOOL)arg3 outFinished:(*BOOL)arg4 ;
-(void)setLayoutPartititionsRightToLeft:(BOOL)arg0 contentPartitionsRightToLeft:(BOOL)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CELLOUTRANKHANDLERSTATE_H
#define CELLOUTRANKHANDLERSTATE_H



#import "ExpertSystemStateCore.h"

@interface CellOutrankHandlerState : ExpertSystemStateCore

@property (nonatomic) BOOL noPreconditions; // ivar: _noPreconditions


+(id)createStateWithLabel:(id)arg0 rank:(NSUInteger)arg1 entryPreds:(id)arg2 ;
-(id)_initStateWithLabel:(id)arg0 rank:(NSUInteger)arg1 entryPreds:(id)arg2 ;
-(id)description;


@end


#endif
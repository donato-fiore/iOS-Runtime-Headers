// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPREVIOUSWORKSPACEENTITY_H
#define SBPREVIOUSWORKSPACEENTITY_H



#import "SBWorkspaceEntity.h"

@interface SBPreviousWorkspaceEntity : SBWorkspaceEntity

@property (readonly, nonatomic) NSInteger previousLayoutRole; // ivar: _previousLayoutRole


+(id)entityWithPreviousLayoutRole:(NSInteger)arg0 ;
-(BOOL)isPreviousWorkspaceEntity;
-(id)initWithIdentifier:(id)arg0 displayChangeSettings:(id)arg1 ;
-(id)initWithPreviousLayoutRole:(NSInteger)arg0 ;
-(id)succinctDescriptionBuilder;


@end


#endif
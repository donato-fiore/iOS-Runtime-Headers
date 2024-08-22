// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBREQUESTFOLDERSNAPSHOTSSWITCHEREVENTRESPONSE_H
#define SBREQUESTFOLDERSNAPSHOTSSWITCHEREVENTRESPONSE_H



#import "SBSwitcherModifierEventResponse.h"

@interface SBRequestFolderSnapshotsSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (nonatomic, getter=isSnapshotRequested) BOOL snapshotRequested; // ivar: _snapshotRequested


-(NSInteger)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithSnapshotRequest:(BOOL)arg0 ;


@end


#endif
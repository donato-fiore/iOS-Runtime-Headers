// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBPARTICIPANTPRESENCECOORDINATOR_H
#define WBPARTICIPANTPRESENCECOORDINATOR_H

@protocol _WBParticipantPresenceCoordinatorDelegate, WBParticipantPresenceCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "_WBParticipantPresenceCoordinator.h"

@interface WBParticipantPresenceCoordinator : NSObject <_WBParticipantPresenceCoordinatorDelegate>

 {
    _WBParticipantPresenceCoordinator *_internalCoordinator;
}


@property (weak, nonatomic) NSObject<WBParticipantPresenceCoordinatorDelegate> *delegate; // ivar: _delegate


-(id)activeParticipantsInTabGroupWithIdentifier:(id)arg0 ;
-(id)activeParticipantsInTabWithIdentifier:(id)arg0 ;
-(id)init;
-(id)tabGroupIdentifierForParticipantIdentifier:(id)arg0 ;
-(id)tabIdentifierForParticipantIdentifier:(id)arg0 ;
-(void)beginCollaborationForShare:(id)arg0 ;
-(void)beginDeviceCoordination;
-(void)endCollaborationForShare:(id)arg0 ;
-(void)endDeviceCoordination;
-(void)moveCurrentParticipantToTabIdentifier:(id)arg0 inTabGroupIdentifier:(id)arg1 withDeviceIdentifier:(id)arg2 ;
-(void)participantPresenceCoordinator:(id)arg0 didUpdateParticipantsInTabGroupWithIdentifier:(id)arg1 ;
-(void)participantPresenceCoordinator:(id)arg0 didUpdateParticipantsInTabWithIdentifier:(id)arg1 ;


@end


#endif
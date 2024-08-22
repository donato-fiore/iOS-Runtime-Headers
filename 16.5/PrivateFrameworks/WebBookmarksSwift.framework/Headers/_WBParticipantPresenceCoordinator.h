// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WBPARTICIPANTPRESENCECOORDINATOR_H
#define _WBPARTICIPANTPRESENCECOORDINATOR_H

@protocol _WBParticipantPresenceCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface _WBParticipantPresenceCoordinator : NSObject {
    ? participantIdentifiersToCurrentIdentifiers;
    ? tabGroupIdentifiersToParticipants;
    ? tabIdentifiersToParticipants;
    ? participantPresenceStore;
    ? connectionManagerStore;
}


@property (nonatomic, weak) NSObject<_WBParticipantPresenceCoordinatorDelegate> *delegate; // ivar: delegate


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
-(void)removeTabGroupWithIdentifier:(id)arg0 ;
-(void)removeTabWithIdentifier:(id)arg0 ;


@end


#endif
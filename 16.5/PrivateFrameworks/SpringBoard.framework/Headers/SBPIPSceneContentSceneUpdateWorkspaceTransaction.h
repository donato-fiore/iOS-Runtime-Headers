// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPIPSCENECONTENTSCENEUPDATEWORKSPACETRANSACTION_H
#define SBPIPSCENECONTENTSCENEUPDATEWORKSPACETRANSACTION_H



#import "SBMainWorkspaceTransaction.h"
#import "SBApplicationSceneEntity.h"

@interface SBPIPSceneContentSceneUpdateWorkspaceTransaction : SBMainWorkspaceTransaction {
    SBApplicationSceneEntity *_applicationSceneEntity;
}




-(id)initWithApplicationSceneEntity:(id)arg0 transitionRequest:(id)arg1 ;
-(void)_begin;
-(void)_didComplete;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFSCENEWORKSPACECONTROLLER_H
#define SBFSCENEWORKSPACECONTROLLER_H

@class FBSceneWorkspace, NSString;
@protocol BSInvalidatable, BSDescriptionProviding, SBFSceneWorkspaceControllerDelegate;

#import <Foundation/Foundation.h>


@interface SBFSceneWorkspaceController : NSObject <BSInvalidatable, BSDescriptionProviding>

 {
    FBSceneWorkspace *_sceneWorkspace;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<SBFSceneWorkspaceControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *sceneWorkspaceIdentifier;
@property (readonly) Class superclass;


-(BOOL)enumerateScenesWithBlock:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 delegate:(id)arg1 ;
-(id)sceneFromIdentityToken:(id)arg0 ;
-(id)sceneFromIdentityTokenStringRepresentation:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)createSceneForProcessIdentity:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)invalidate;


@end


#endif
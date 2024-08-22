// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFSCENEWORKSPACEDEFAULTDELEGATE_H
#define SBFSCENEWORKSPACEDEFAULTDELEGATE_H

@class NSMutableSet, NSMutableDictionary, NSString;
@protocol SBFSceneWorkspaceControllerDelegate;

#import <Foundation/Foundation.h>


@interface SBFSceneWorkspaceDefaultDelegate : NSObject <SBFSceneWorkspaceControllerDelegate>

 {
    NSMutableSet *_scenesActivatedUponClientConnection;
    NSMutableSet *_scenesKeptActiveWhileForeground;
    NSMutableDictionary *_scenesWithActivationContextGeneratorBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_activateScene:(id)arg0 ;
-(void)_cleanupTransitionContextGeneratorBlockForSceneIfNeeded:(id)arg0 ;
-(void)_setScene:(id)arg0 activatesWithTransitionContextGeneratorBlock:(id)arg1 ;
-(void)_setScene:(id)arg0 cached:(BOOL)arg1 inContainer:(id)arg2 withContextGenerator:(id)arg3 ;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneDidActivate:(id)arg0 ;
-(void)sceneDidDeactivate:(id)arg0 withError:(id)arg1 ;
-(void)setScene:(id)arg0 shouldActivateUponClientConnection:(BOOL)arg1 withContextGenerator:(id)arg2 ;
-(void)setScene:(id)arg0 shouldBeKeptActiveWhileForeground:(BOOL)arg1 withContextGenerator:(id)arg2 ;
-(void)workspace:(id)arg0 clientDidConnectWithHandshake:(id)arg1 ;
-(void)workspace:(id)arg0 didAddScene:(id)arg1 ;
-(void)workspace:(id)arg0 willRemoveScene:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCENEIDENTITYPROVIDER_H
#define SBSCENEIDENTITYPROVIDER_H

@class FBSDisplayIdentity, NSString;
@protocol SBApplicationSceneIdentityProviding;

#import <Foundation/Foundation.h>


@interface SBSceneIdentityProvider : NSObject <SBApplicationSceneIdentityProviding>

 {
    FBSDisplayIdentity *_displayIdentity;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_sceneIdentifierForBundleIdentifier:(id)arg0 ;
-(id)initWithDisplayIdentity:(id)arg0 ;
-(id)newSceneIdentityForApplication:(id)arg0 ;
-(id)sceneIdentityForApplication:(id)arg0 ;
-(id)sceneIdentityForApplication:(id)arg0 createPrimaryIfRequired:(BOOL)arg1 sceneSessionRole:(id)arg2 ;
-(id)sceneIdentityForApplication:(id)arg0 excludingIdentifiers:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg0 targetContentIdentifier:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg0 targetContentIdentifier:(id)arg1 allowCanMatches:(BOOL)arg2 preferNewScene:(BOOL)arg3 allowSceneCreation:(BOOL)arg4 visibleIdentifiers:(id)arg5 preferredDisplay:(id)arg6 ;
-(id)sceneIdentityForApplication:(id)arg0 targetContentIdentifier:(id)arg1 allowCanMatches:(BOOL)arg2 preferNewScene:(BOOL)arg3 visibleIdentifiers:(id)arg4 ;
-(id)sceneIdentityForApplication:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg0 uniqueIdentifier:(id)arg1 targetContentIdentifier:(id)arg2 ;
-(id)sceneIdentityForApplication:(id)arg0 uniqueIdentifier:(id)arg1 targetContentIdentifier:(id)arg2 sceneSessionRole:(id)arg3 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBDEFAULTSCENEENTITYFRAMEPROVIDER_H
#define _SBDEFAULTSCENEENTITYFRAMEPROVIDER_H

@class NSString;
@protocol SBLayoutStateTransitionSceneEntityFrameProvider;

#import <Foundation/Foundation.h>

#import "SBWindowScene.h"

@interface _SBDefaultSceneEntityFrameProvider : NSObject <SBLayoutStateTransitionSceneEntityFrameProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


-(id)initWithWindowScene:(id)arg0 ;
-(struct CGRect )sceneEntityFrameForWorkspaceEntity:(id)arg0 inLayoutState:(id)arg1 ;


@end


#endif
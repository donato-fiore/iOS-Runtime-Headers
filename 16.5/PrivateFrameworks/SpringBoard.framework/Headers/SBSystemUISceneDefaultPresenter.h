// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMUISCENEDEFAULTPRESENTER_H
#define SBSYSTEMUISCENEDEFAULTPRESENTER_H

@class FBScene, NSString;
@protocol SBScenePresenting;

#import <Foundation/Foundation.h>

#import "SBTraitsSceneParticipantDelegate.h"
#import "SBSingleSceneWindow.h"

@interface SBSystemUISceneDefaultPresenter : NSObject <SBScenePresenting>

 {
    FBScene *_scene;
    SBTraitsSceneParticipantDelegate *_sceneTraitsDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBSingleSceneWindow *hostingWindow; // ivar: _hostingWindow
@property (readonly) Class superclass;
@property (nonatomic, getter=usesWindowHosting) BOOL windowHosting; // ivar: _windowHosting


-(id)initWithScene:(id)arg0 ;
-(id)presentScene:(id)arg0 viewControllerBuilderBlock:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)scene:(id)arg0 didChangeTraitsParticipantDelegate:(id)arg1 ;
-(void)scene:(id)arg0 hasVisibleContent:(BOOL)arg1 ;
-(void)sceneDidChangeDisplayIdentity:(id)arg0 ;


@end


#endif
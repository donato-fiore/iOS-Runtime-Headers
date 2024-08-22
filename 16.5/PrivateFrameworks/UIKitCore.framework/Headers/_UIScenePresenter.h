// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISCENEPRESENTER_H
#define _UISCENEPRESENTER_H

@class NSString, UIView<UIScenePresentation>, FBScene;
@protocol BSDescriptionProviding, UIScenePresenter, NSCopying;

#import <Foundation/Foundation.h>

#import "_UIScenePresenterOwner.h"
#import "_UIScenePresentationView.h"
#import "UIScenePresentationContext.h"

@interface _UIScenePresenter : NSObject <BSDescriptionProviding, UIScenePresenter>

 {
    _UIScenePresenterOwner *_owner;
    NSString *_identifier;
    BOOL _invalidated;
    _UIScenePresentationView *_view;
}


@property (nonatomic) CGFloat _initializeTime; // ivar: _initializeTime
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isActive) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHosting) BOOL hosting; // ivar: _hosting
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, copy, nonatomic) UIScenePresentationContext *presentationContext; // ivar: _presentationContext
@property (readonly, nonatomic) UIView<UIScenePresentation> *presentationView;
@property (readonly, weak, nonatomic) FBScene *scene;
@property (readonly, copy, nonatomic) NSObject<NSCopying> *sortContext; // ivar: _sortContext
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisibilityPropagationEnabled) BOOL visibilityPropagationEnabled; // ivar: _visibilityPropagationEnabled


-(NSInteger)compare:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithOwner:(id)arg0 identifier:(id)arg1 sortContext:(id)arg2 ;
-(id)newSnapshot;
-(id)newSnapshotContext;
-(id)newSnapshotPresentationView;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)activate;
-(void)deactivate;
-(void)dealloc;
-(void)invalidate;
-(void)modifyPresentationContext:(id)arg0 ;


@end


#endif
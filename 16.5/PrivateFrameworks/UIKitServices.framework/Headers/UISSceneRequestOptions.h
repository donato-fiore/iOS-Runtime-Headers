// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISSCENEREQUESTOPTIONS_H
#define UISSCENEREQUESTOPTIONS_H

@class FBSWorkspaceSceneRequestOptions, NSSet, NSString;
@protocol BSXPCSecureCoding;



@interface UISSceneRequestOptions : FBSWorkspaceSceneRequestOptions <BSXPCSecureCoding>



@property (copy, nonatomic) NSSet *actions; // ivar: _actions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *interactionIdentifier; // ivar: _interactionIdentifier
@property (nonatomic) BOOL preserveLayout; // ivar: _preserveLayout
@property (nonatomic) BOOL requestBackground; // ivar: _requestBackground
@property (nonatomic) BOOL requestCenterSlot; // ivar: _requestCenterSlot
@property (nonatomic) BOOL requestFullscreen; // ivar: _requestFullscreen
@property (nonatomic) BOOL requestQuickLookScene; // ivar: _requestQuickLookScene
@property (nonatomic) NSInteger sceneRequestIntent; // ivar: _sceneRequestIntent
@property (copy, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif
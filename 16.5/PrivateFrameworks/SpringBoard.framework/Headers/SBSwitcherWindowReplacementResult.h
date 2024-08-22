// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSWITCHERWINDOWREPLACEMENTRESULT_H
#define SBSWITCHERWINDOWREPLACEMENTRESULT_H


#import <Foundation/Foundation.h>

#import "SBWorkspaceEntity.h"
#import "SBLayoutElement.h"

@interface SBSwitcherWindowReplacementResult : NSObject

@property (readonly, nonatomic) SBWorkspaceEntity *activatingEntity; // ivar: _activatingEntity
@property (readonly, nonatomic) SBLayoutElement *primaryElement; // ivar: _primaryElement
@property (readonly, nonatomic) NSInteger requestedUnlockedEnvironmentMode; // ivar: _requestedUnlockedEnvironmentMode
@property (readonly, nonatomic) SBLayoutElement *sideElement; // ivar: _sideElement


+(id)defaultWindowReplacementResult;
+(id)windowReplacementResultByRemovingLayoutElements:(id)arg0 fromLayoutState:(id)arg1 withPrecedingLayoutState:(id)arg2 recentAppLayouts:(id)arg3 ;
-(id)initWithPrimaryElement:(id)arg0 sideElement:(id)arg1 activatingEntity:(id)arg2 requestedUnlockedEnvironmentMode:(NSInteger)arg3 ;


@end


#endif
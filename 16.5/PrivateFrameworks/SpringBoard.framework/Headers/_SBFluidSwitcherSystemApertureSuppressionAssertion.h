// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBFLUIDSWITCHERSYSTEMAPERTURESUPPRESSIONASSERTION_H
#define _SBFLUIDSWITCHERSYSTEMAPERTURESUPPRESSIONASSERTION_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface _SBFluidSwitcherSystemApertureSuppressionAssertion : NSObject <BSInvalidatable>

 {
    BOOL _isValid;
    NSString *_sceneID;
    NSString *_bundleID;
    id *_invalidationBlock;
}


@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *sceneID;
@property (readonly) Class superclass;


-(id)initWithSceneID:(id)arg0 bundleID:(id)arg1 invalidationBlock:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif
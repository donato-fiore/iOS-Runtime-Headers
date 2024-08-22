// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRAITSORIENTATIONDEFAULTTREERESOLVER_H
#define SBTRAITSORIENTATIONDEFAULTTREERESOLVER_H

@class SBFTraitsSettingsValidator, NSMutableDictionary, NSNumber, NSString;
@protocol SBFTraitsPreferencesStageTreeResolving;


#import "SBTraitsOrientationStageComponent.h"

@interface SBTraitsOrientationDefaultTreeResolver : SBTraitsOrientationStageComponent <SBFTraitsPreferencesStageTreeResolving>

 {
    SBFTraitsSettingsValidator *_settingsValidator;
    NSMutableDictionary *_mapResolverCache;
}


@property (readonly, nonatomic) NSNumber *componentOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_node:(id)arg0 validatesNewSettings:(id)arg1 ;
-(NSInteger)_targetOrientationForResolutionInfo:(id)arg0 validatedInputs:(id)arg1 rawInputs:(id)arg2 participant:(id)arg3 parent:(id)arg4 ;
-(id)_mapResolverForTargetOrientation:(NSInteger)arg0 currentOrientation:(NSInteger)arg1 ;
-(id)initWithComponentOrder:(id)arg0 ;
-(void)resolveStagePreferencesTree:(id)arg0 context:(id)arg1 ;


@end


#endif
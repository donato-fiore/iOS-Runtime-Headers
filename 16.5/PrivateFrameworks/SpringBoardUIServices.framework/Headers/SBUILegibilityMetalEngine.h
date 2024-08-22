// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUILEGIBILITYMETALENGINE_H
#define SBUILEGIBILITYMETALENGINE_H

@class NSString, NSMapTable, UIScreen, NSOperationQueue;
@protocol SBUILegibilityEngine;

#import <Foundation/Foundation.h>

#import "SBUILegibilityCache.h"

@interface SBUILegibilityMetalEngine : NSObject <SBUILegibilityEngine>

 {
    NSString *_engineIdentifier;
    SBUILegibilityCache *_legibilityCache;
    NSMapTable *_enginesForSettingsForScreen;
    UIScreen *_screen;
    NSOperationQueue *_asyncOperationQueue;
}


@property (readonly, nonatomic) NSInteger algorithm; // ivar: _algorithm
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useMinFillHeightForTemplateGeneration; // ivar: _useMinFillHeightForTemplateGeneration


-(id)_findEngineConfigurationMatchingScreen:(id)arg0 settings:(id)arg1 ;
-(id)applyStrength:(CGFloat)arg0 toImage:(id)arg1 settings:(id)arg2 ;
-(id)executeAsyncLegibilityUpdateForContainer:(id)arg0 image:(id)arg1 settings:(id)arg2 strength:(*CGFloat)arg3 completion:(id)arg4 ;
-(id)initWithEngineIdentifier:(id)arg0 ;
-(id)initWithEngineIdentifier:(id)arg0 algorithm:(NSInteger)arg1 ;
-(struct CGSize )calculateShadowImageViewSizeForOriginalImage:(id)arg0 shadowImage:(id)arg1 settings:(id)arg2 ;
-(void)_teardownCaches:(id)arg0 ;
-(void)executeLegibilityUpdateForContainer:(id)arg0 forImage:(id)arg1 settings:(id)arg2 strength:(*CGFloat)arg3 engineResult:(struct ? *)arg4 ;
-(void)prewarmForSettings:(id)arg0 maxSize:(struct CGSize )arg1 minSize:(struct CGSize )arg2 scale:(CGFloat)arg3 ;


@end


#endif
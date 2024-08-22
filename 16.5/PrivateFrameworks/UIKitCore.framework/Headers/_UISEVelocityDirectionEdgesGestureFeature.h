// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISEVELOCITYDIRECTIONEDGESGESTUREFEATURE_H
#define _UISEVELOCITYDIRECTIONEDGESGESTUREFEATURE_H

@class UISEGestureFeature;
@protocol _UISETouchedEdgesProvider, _UISEGestureFeatureSettings;



@interface _UISEVelocityDirectionEdgesGestureFeature : UISEGestureFeature <_UISETouchedEdgesProvider>

 {
    id<_UISEGestureFeatureSettings> *_settings;
    id<_UISETouchedEdgesProvider> *_provider;
    BOOL _exactMatchEdges;
    CGPoint _initialLocation;
}


@property (readonly, nonatomic) NSUInteger touchedEdges; // ivar: _touchedEdges


-(id)debugDictionary;
-(id)initWithSettings:(id)arg0 touchedEdgesProvider:(id)arg1 exactMatchEdges:(BOOL)arg2 ;
-(void)_incorporateSample:(struct _UISEGestureFeatureSample *)arg0 ;


@end


#endif
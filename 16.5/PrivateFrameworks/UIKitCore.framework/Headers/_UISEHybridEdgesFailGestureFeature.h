// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISEHYBRIDEDGESFAILGESTUREFEATURE_H
#define _UISEHYBRIDEDGESFAILGESTUREFEATURE_H

@class UISEGestureFeature, NSString, NSArray;
@protocol _UISEGestureFeatureDelegate, _UISETouchedEdgesProvider;



@interface _UISEHybridEdgesFailGestureFeature : UISEGestureFeature <_UISEGestureFeatureDelegate, _UISETouchedEdgesProvider>

 {
    NSUInteger _fails;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *subfeatures; // ivar: _subfeatures
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger touchedEdges;


-(id)debugDictionary;
-(id)initWithSubfeatures:(id)arg0 ;
-(void)_incorporateSample:(struct _UISEGestureFeatureSample *)arg0 ;
-(void)featureDidChangeState:(id)arg0 ;


@end


#endif
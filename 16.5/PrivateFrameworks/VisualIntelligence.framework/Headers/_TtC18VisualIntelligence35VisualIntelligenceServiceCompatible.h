// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18VISUALINTELLIGENCE35VISUALINTELLIGENCESERVICECOMPATIBLE_H
#define _TTC18VISUALINTELLIGENCE35VISUALINTELLIGENCESERVICECOMPATIBLE_H


#import <Foundation/Foundation.h>

#import "_TtC18VisualIntelligence23OntologyGraphCompatible.h"

@interface _TtC18VisualIntelligence35VisualIntelligenceServiceCompatible : NSObject {
    ? service;
    ? cancellables;
}


@property (nonatomic, readonly) _TtC18VisualIntelligence23OntologyGraphCompatible *ontologyGraph;


+(NSUInteger)parseFlowCacheVersion;
-(id)detectWithImage:(id)arg0 regionOfInterest:(struct CGRect )arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithTimeoutInterval:(NSInteger)arg0 ;
-(id)parseCachedWithVisualQuery:(id)arg0 cachedResults:(id)arg1 completion:(id)arg2 ;
-(id)parseWithVisualQuery:(id)arg0 completion:(id)arg1 ;
-(id)pegasusPayloadDataWithImage:(id)arg0 visualUnderstanding:(id)arg1 queryContext:(id)arg2 error:(*id)arg3 ;
-(id)refineRegionsWithRequest:(id)arg0 error:(*id)arg1 ;
-(id)searchWithImage:(id)arg0 visualUnderstanding:(id)arg1 queryContext:(id)arg2 completion:(id)arg3 ;
-(id)searchWithVisualQuery:(id)arg0 completion:(id)arg1 ;
-(id)submitUserFeedbackWithUserFeedback:(id)arg0 completion:(id)arg1 ;
-(void)clearCacheWithCacheOption:(NSInteger)arg0 ;


@end


#endif
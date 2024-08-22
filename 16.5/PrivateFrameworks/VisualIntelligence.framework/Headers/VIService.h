// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VISERVICE_H
#define VISERVICE_H


#import <Foundation/Foundation.h>

#import "_TtC18VisualIntelligence35VisualIntelligenceServiceCompatible.h"
#import "_TtC18VisualIntelligence26VITextLookupFlowCompatible.h"

@interface VIService : NSObject {
    _TtC18VisualIntelligence35VisualIntelligenceServiceCompatible *_compatService;
    _TtC18VisualIntelligence26VITextLookupFlowCompatible *_textLookupFlow;
}




+(NSUInteger)parseFlowCacheVersion;
-(id)detectWithImage:(id)arg0 regionOfInterest:(struct CGRect )arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithNetworkTimeoutInterval:(NSInteger)arg0 ;
-(id)lookupTextWithQuery:(id)arg0 completion:(id)arg1 ;
-(id)newStreamingSession;
-(id)ontologyGraph;
-(id)parseWithVisualQuery:(id)arg0 cachedResult:(id)arg1 completion:(id)arg2 ;
-(id)parseWithVisualQuery:(id)arg0 cachedResults:(id)arg1 completion:(id)arg2 ;
-(id)parseWithVisualQuery:(id)arg0 completion:(id)arg1 ;
-(id)pegasusPayloadWithParsedVisualQuery:(id)arg0 error:(*id)arg1 ;
-(id)refineRegionsWithRequest:(id)arg0 error:(*id)arg1 ;
-(id)searchWithParsedVisualQuery:(id)arg0 completion:(id)arg1 ;
-(id)searchWithVisualQuery:(id)arg0 completion:(id)arg1 ;
-(id)submitUserFeedback:(id)arg0 completion:(id)arg1 ;
-(void)clearCacheWithOption:(NSInteger)arg0 ;


@end


#endif
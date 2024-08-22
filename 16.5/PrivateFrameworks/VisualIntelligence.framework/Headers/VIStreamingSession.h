// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VISTREAMINGSESSION_H
#define VISTREAMINGSESSION_H


#import <Foundation/Foundation.h>

#import "_TtC18VisualIntelligence35VisualIntelligenceServiceCompatible.h"

@interface VIStreamingSession : NSObject {
    _TtC18VisualIntelligence35VisualIntelligenceServiceCompatible *_compatService;
}




-(id)extractSignalsWithRequest:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithCompatService:(id)arg0 ;
-(id)parseWithRequest:(id)arg0 error:(*id)arg1 ;


@end


#endif
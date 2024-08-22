// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DRENDERPIPELINE_H
#define TSCH3DRENDERPIPELINE_H


#import <Foundation/Foundation.h>

#import "TSCH3DContext.h"
#import "TSCH3DRenderProcessor.h"
#import "TSCH3DSession.h"

@interface TSCH3DRenderPipeline : NSObject

@property (readonly, nonatomic) TSCH3DContext *context;
@property (retain, nonatomic) TSCH3DRenderProcessor *processor; // ivar: _processor
@property (readonly, nonatomic) TSCH3DSession *session; // ivar: _session


+(id)clipRectForTargetSize:(*void)arg0 intermediateSize:(*void)arg1 ;
+(id)pipelineWithProcessor:(id)arg0 session:(id)arg1 ;
-(id)initWithProcessor:(id)arg0 session:(id)arg1 ;


@end


#endif
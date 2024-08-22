// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DRAYPICKRENDERPROCESSOR_H
#define TSCH3DRAYPICKRENDERPROCESSOR_H

@class NSMutableArray, NSArray;


#import "TSCH3DRetargetRenderProcessor.h"
#import "TSCH3DDataBuffer.h"
#import "TSCH3DRayPickPipelineDelegate.h"

@interface TSCH3DRayPickRenderProcessor : TSCH3DRetargetRenderProcessor {
    TSCH3DDataBuffer *_buffer;
    NSMutableArray *_pickedPoints;
}


@property (readonly, nonatomic) NSArray *pickedPoints;
@property (nonatomic) tvec2<float> position; // ivar: _position
@property (retain, nonatomic) TSCH3DRayPickPipelineDelegate *sceneObjectDelegate; // ivar: _sceneObjectDelegate
@property (nonatomic) float slack; // ivar: _slack


-(id)init;
-(id)matrix;
-(void)geometry:(id)arg0 ;
-(void)submit:(id)arg0 ;


@end


#endif
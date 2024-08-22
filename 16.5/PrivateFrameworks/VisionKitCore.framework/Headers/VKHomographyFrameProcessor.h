// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKHOMOGRAPHYFRAMEPROCESSOR_H
#define VKHOMOGRAPHYFRAMEPROCESSOR_H

@class VNTrackHomographyRequest;


#import "VKFrameProcessor.h"

@interface VKHomographyFrameProcessor : VKFrameProcessor {
    VNTrackHomographyRequest *_homographyRequest;
    id *_resultHandler;
}


@property (copy, nonatomic) id *resultHandler;


-(void)processFrame:(id)arg0 ;
-(void)sendResult:(id)arg0 ;


@end


#endif
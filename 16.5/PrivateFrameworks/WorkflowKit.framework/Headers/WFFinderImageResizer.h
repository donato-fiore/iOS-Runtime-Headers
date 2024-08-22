// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFFINDERIMAGERESIZER_H
#define WFFINDERIMAGERESIZER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFFinderImageResizer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)unsafeComputeResizedSizesForImageContentItems:(id)arg0 inSizes:(id)arg1 intoSizesTable:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(id)resizeImages:(id)arg0 toSize:(id)arg1 completion:(id)arg2 ;
-(void)computeResizedSizesForImages:(id)arg0 inSizes:(id)arg1 completion:(id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKOBJECTBOUNDSCONTEXT_H
#define VKOBJECTBOUNDSCONTEXT_H


#import <Foundation/Foundation.h>


@interface VKObjectBoundsContext : NSObject {
    vector<gm::Matrix<double, 2, 1>, std::allocator<gm::Matrix<double, 2, 1>>> _points;
}


@property (nonatomic) VKEdgeInsets edgePadding; // ivar: _edgePadding


-(BOOL)isEmpty;
-(struct ? )boundingRect;
-(void)addPoints:(*void)arg0 ;


@end


#endif